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

int main()
{
    int row=0, col=0, Size;
    char *ar;
    gotoxy(col,row);
    cout<<"enter size of string: ";

    cin>>Size;
    ar = new char[Size];

    char *ptr, *ptr1, *ptr2;
    ptr=ar;
    ptr1=ar;
    ptr2=ar;


char ch;

do{
    ch = getch();
    if(isprint(ch)){
        if(strlen(ar)<Size or (ptr1-ptr)<Size){
            col=ptr1-ptr;
            gotoxy(col,1);
            cout<<ch;
            *ptr1=ch;
             ptr1++;
            if((ptr1-ptr)==strlen(ar)){
                ptr2++;
            }
            ar[strlen(ar)+1]='\0';
        }
    }

    else if(ch==-32){
        ch = getch();
        if(ch==71){
            ptr1=ptr;
            col=ptr1-ptr;
            gotoxy(col,1);
        }
        else if(ch==79){
            ptr1=&ar[strlen(ar)];
            col=strlen(ar);
            gotoxy(col,1);
        }
        else if(ch==77){
            if(ptr1<&ar[strlen(ar)]){
                ptr1++;
                col=ptr1-ptr;
                gotoxy(col,1);
            }
            else{
                col=strlen(ar);
                gotoxy(col,1);
            }
        }
        else if(ch==75){
            ptr1--;
            col=ptr1-ptr;
            gotoxy(col,1);
        }
    }
    else if(ch==13){

        gotoxy(10,10);
        cout<<ar;
        }


}while(ch!=27 && ch !=13);

delete(ar);
return 0;
}

