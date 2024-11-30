

#include <iostream>
#include<string.h>
using namespace std;

class point{
    int x,y;
    public:
        point(){
            x=y=0;
        }
        point(int m){
        x=y=m;
        }
        point(int m,int n){
        x=m;
        y=n;
        }
        void setX(int v){
        x=v;}
        void setY(int v){
        y=v;}
        int getX(){
        return x;}
        int getY(){
        return y;}
};

class rectangle{
    int len,wid;
    point *ptr1,*ptr2;
public:
    rectangle(){
        ptr1=ptr2=NULL;
    }
    rectangle(point *p1,point *p2){
        ptr1=p1;
        ptr2=p2;
        if(ptr1!=NULL && ptr2!=NULL){
            len=abs(ptr1->getX()-ptr2->getX());
            wid=abs(ptr1->getY()-ptr2->getY());
        }
    }
    void setPtr1(point *p){
        ptr1=p;
        if(ptr1!=NULL && ptr2!=NULL){
            len=abs(ptr1->getX()-ptr2->getX());
            wid=abs(ptr1->getY()-ptr2->getY());
        }
    }
    void setPtr2(point *p){
        ptr2=p;
        if(ptr1!=NULL && ptr2!=NULL){
            len=abs(ptr1->getX()-ptr2->getX());
            wid=abs(ptr1->getY()-ptr2->getY());
        }
    }
    int getLen(){
    return len;
    }
    int getWid(){
    return wid;
    }
    int Area(){
    return (len*wid);}
};

int main(){
    point p1(10,20);
    point p2(50,70);
    rectangle r(&p1,&p2);
    cout<<r.getLen()<<endl;
    cout<<r.getWid()<<endl;
    cout<<r.Area();
    return 0;
}

