#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char first[8];
    char second[8];
    char name[16];
    cout<<"enter the first name (max 7 letters): ";
    cin>>first;
    cout<<"enter the second name (max 7 letters): ";
    cin>>second;

    //with pre-defined function
    char full[16];
    strcpy(full,first);
    int k=0;
    while(full[k]!=0){
        k++;
    }
    full[k]=' ';
    full[k+1]=0;
    cout<<strcat(full,second);

    //without pre-defined function
    int i=0;
    while(first[i]!=0){
        name[i]=first[i];
        i++;
    }

    name[i]=' ';
    i++;
    int j=0;
    while(second[j]!=0){
        name[i]=second[j];
        j++;
        i++;
    }
    name[i]=0;
    cout<<name<<endl;


}



