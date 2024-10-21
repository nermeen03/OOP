
#include <iostream>
using namespace std;

int main()
{
    int no;
   cout<<"1 File"<<endl;
   cout<<"2 Edit"<<endl;
   cout<<"3 Save"<<endl;
   cout<<"4 Exit"<<endl;
   do{
    cout<<"choose a number: ";\
    cin>>no;
    switch(no){
        case 1:
            cout<<"File is pressed"<<endl;
            break;
        case 2:
            cout<<"Edit is pressed"<<endl;
            break;
        case 3:
            cout<<"Save is pressed"<<endl;
            break;
    }
   }while(no!=4);

}

