#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[10];
    char str2[10];
    cout<<"enter the first word: ";
    cin>>str1;
    cout<<"enter the second word: ";
    cin>>str2;

    if(strcmp(str1,str2)){
       cout<<"the 2 words are different";
       }
    else{
        cout<<"the 2 words are the same";
    }

}


