#include <iostream>

using namespace std;


    int sum(int x,int y);
    void divide(int x,int y);
    long multi(int x,int y);
    void subtract(int x,int y);
    void power(int x,int y);

    int main()
{
    cout<<"1- Sum"<<endl;
    cout<<"2- Divide"<<endl;
    cout<<"3- Multiply"<<endl;
    cout<<"4- Subtract"<<endl;
    cout<<"5- Power"<<endl;
    cout<<"6- Exit"<<endl;


    int opt,a,b,result;
    do{
        cout<<"choice a number from 1 to 6: ";
        cin>>opt;
        switch(opt){
        case 1:
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            result = sum(a,b);
            cout<<"result is: "<<result<<endl;
            break;
        case 2:
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            divide(a,b);
            break;
        case 3:
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            result = multi(a,b);
            cout<<"result is: "<<result<<endl;
            break;
        case 4:
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            subtract(a,b);
            break;
        case 5:
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the power: ";
            cin>>b;
            power(a,b);
            break;
    }
    }while(opt!=6);
    return 0;
}


    int sum(int x,int y){
        int result = x+y;
        return result;
    }
    void divide(int x,int y){
        int result = x/y;
        cout<<"result is: "<<result<<endl;
    }
    long multi(int x,int y){
        int result = x*y;
        return result;
        }
    void subtract(int x,int y){
        int result = x-y;
        cout<<"result is: "<<result<<endl;
        }
    void power(int x,int y){
        int result = 1;
        for(int i=1;i<=y;i++){
            result*=x;
        }
        cout<<"result is: "<<result<<endl;
    }





