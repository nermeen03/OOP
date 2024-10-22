
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

COORD coord ={0,0};
void gotoxy(int x,int y){

    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

}
    int sum(int x,int y);
    void divide(int x,int y);
    long multi(int x,int y);
    void subtract(int x,int y);
    void power(int x,int y);

    int main()
{
    int opt,a,b,result;
    int row=0, col=0;
    gotoxy(col,row);
    char re;
do{

    char x;
    cout<<"Sum"<<endl;
    cout<<"Divide"<<endl;
    cout<<"Multiply"<<endl;
    cout<<"Subtract"<<endl;
    cout<<"Power"<<endl;
    cout<<"Exit"<<endl;

    row=0, col=0;
    gotoxy(col,row);
    char ch;
    do{
    ch=getch();
    if(ch==27){
            gotoxy(0,5);
            ch = 27;
            re=27;
            break;
    }
    if(ch==-32){
        ch = getch();
        if(ch==80){
            row++;
            if(row>5)
                row=0;
            gotoxy(col,row);
        }

        if(ch==72){
            row--;
            if(row<0)
               row=5;
            gotoxy(col,row);
        }

        if(ch==71){
            row=0;
            gotoxy(col,row);
        }
        if(ch==79){
            row=5;
            gotoxy(col,row);
        }
    }
    else{
        if(ch==13){
            opt=row;
            switch(opt){
        case 0:
            row=7;
            gotoxy(col,row);
            cout<<"you choose sum"<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            result = sum(a,b);
            cout<<"result is: "<<result<<endl;
            ch = 27;
            char x;
            x=getch();
            if(x!=27){
                system("CLS");
            }
            else{
                ch = 27;
                re=27;
                break;
            }
            break;
        case 1:
            row=7;
            gotoxy(col,row);
            cout<<"you choose divide"<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            divide(a,b);
            ch = 27;
            x=getch();
            if(x!=27){
                system("CLS");
            }
            else{
                ch = 27;
                re=27;
                break;
            }
            break;
        case 2:
            row=7;
            gotoxy(col,row);
            cout<<"you choose multi"<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            result = multi(a,b);
            cout<<"result is: "<<result<<endl;
            ch = 27;
            x=getch();
            if(x!=27){
                system("CLS");
            }
            else{
                ch = 27;
                re=27;
                break;
            }
            break;
        case 3:
            row=7;
            gotoxy(col,row);
            cout<<"you choose subtract"<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the 2nd number: ";
            cin>>b;
            subtract(a,b);
            ch = 27;
            x=getch();
            if(x!=27){
                system("CLS");
            }
            else{
                ch = 27;
                re=27;
                break;
            }
            break;
        case 4:
            row=7;
            gotoxy(col,row);
            cout<<"you choose power"<<endl;
            cout<<"Enter the 1st number: ";
            cin>>a;
            cout<<"Enter the power: ";
            cin>>b;
            power(a,b);
            ch = 27;
            x=getch();
            if(x!=27){
                system("CLS");
            }
            else{
                ch = 27;
                re=27;
                break;
            }
            break;

        case 5:
            ch = 27;
            re=27;
            break;
            }
        }
    }
    }while(ch!=27);
}while(re!=27);
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


