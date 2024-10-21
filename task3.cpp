/*
#include <iostream>
using namespace std;

int main()
{
int Size, row=1, col, i = 1;
cout<<"enter the size of the magic box: ";
cin>>Size;
if(Size%2!=0){
    col = (Size+1)/2;
    cout<<"num "<<i<<"\t";
    cout<<"row "<<row<<"\t";
    cout<<"col "<<col<<endl;

    for(i=2; i<= Size*Size; i++){
            if((i-1)%Size){
                row--;
                col--;
                if(row<1)
                    row = Size;
                if(col<1)
                    col = Size;
                cout<<"num "<<i<<"\t";
                cout<<"row "<<row<<"\t";
                cout<<"col "<<col<<endl;
            }
            else{
                row++;
                if(row>Size){
                    row=1;
                }
                cout<<"num "<<i<<"\t";
                cout<<"row "<<row<<"\t";
                cout<<"col "<<col<<endl;

            }
    }
}
else{
    cout<<"size must be odd";
}
}
*/
