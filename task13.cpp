#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[10];
    cout<<"enter a word: ";
    cin>>str;
    int i=0;
    while(str[i]!=0){
        i++;
    }
    cout<<"length of word is: "<<i;
}

