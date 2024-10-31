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
    int row=0, col=0;
    gotoxy(col,row);

    char ar[10];
    char *ptr, *ptr1, *ptr2;
    ptr=ar;
    ptr1=ar;
    ptr2=ar;

char ch;

do{

    ch = getch();
    if(isprint(ch)){
        if(strlen(ar)<9 or (ptr1-ptr)<9){
            col=ptr1-ptr;
            gotoxy(col,0);
            cout<<ch;
            *ptr1=ch;
             ptr1++;
            if((ptr1-ptr)==strlen(ar)){
                ptr2++;
            }
        }
    }

    else if(ch==-32){
        ch = getch();
        if(ch==71){
            ptr1=ptr;
            col=ptr1-ptr;
            gotoxy(col,0);
        }
        else if(ch==79){
            ptr1=&ar[strlen(ar)];
            col=strlen(ar);
            gotoxy(col,0);
        }
        else if(ch==77){
            if(ptr1<&ar[strlen(ar)]){
                ptr1++;
                col=ptr1-ptr;
                gotoxy(col,0);
            }
            else{
                col=strlen(ar);
                gotoxy(col,0);
            }
        }
        else if(ch==75){
            ptr1--;
            col=ptr1-ptr;
            gotoxy(col,0);
        }
    }
    else if(ch==13){
        *ptr2='\0';
        gotoxy(10,10);
        cout<<ar;
        }


}while(ch!=27);


return 0;
}
