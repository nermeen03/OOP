#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[10];
    cout<<"enter a word: ";
    cin>>str;
    int len = strlen(str);
    cout<<"reverse word is";
    for(int i=len;i>=0;i--){
        cout<<str[i];
    }
}





