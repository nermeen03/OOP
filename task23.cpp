
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
    point ptr1,ptr2;
public:
    rectangle(int x1,int y1, int x2, int y2):ptr1(x1,y1),ptr2(x2,y2){
        len = abs(x1-x2);
        wid = abs(y1-y2);
    }
    void setPtr1(int x, int y){
        ptr1.setX(x);
        ptr1.setY(y);
        len = abs(x-ptr2.getX());
        wid = abs(y-ptr2.getY());
    }
    void setPtr2(int x, int y){
        ptr2.setX(x);
        ptr2.setY(y);
        len = abs(x-ptr1.getX());
        wid = abs(y-ptr1.getY());
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
    rectangle r(10,20,50,70);
    cout<<r.getLen()<<endl;
    cout<<r.getWid()<<endl;
    cout<<r.Area();
    return 0;
}

