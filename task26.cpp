#include <iostream>

using namespace std;

class shape{
protected:
    int dim1, dim2;
public:
    shape(int m=0){
    dim1=dim2=m; }
    shape(int m,int n){
    dim1=m;
    dim2=n;}
    virtual float area()=0;
};
class circle:public shape{
public:
    circle(){}
    circle(int r):shape(r){}
    float area(){
    return (3.14*dim1*dim2);}
};
class triangle:public shape{
    public:
    triangle(){}
    triangle(int b,int h):shape(b,h){}
    float area(){
    return (0.5*dim1*dim2);}
};
class rect:public shape{
    public:
    rect(){}
    rect(int l,int w):shape(l,w){}
    float area(){
    return (1*dim1*dim2);}
};
class square:public rect{
    public:
    square(){}
    square(int s):rect(s,s){}
};

class geoShape{
    shape *ptr[4];
public:
    geoShape(shape *p1,shape *p2,shape *p3,shape *p4){
    ptr[0]=p1;
    ptr[1]=p2;
    ptr[2]=p3;
    ptr[3]=p4;
    }
    float totalArea(){
    float sum=0;
    for(int i=0;i<4;i++){
        sum+=ptr[i]->area();
    }
    return sum;
    }
};
int main()
{
    circle c(7);
    rect r(20,5);
    triangle t(10,20);
    square s(6);
    geoShape g(&c,&r,&t,&s);
    cout<<g.totalArea();
    return 0;
}
