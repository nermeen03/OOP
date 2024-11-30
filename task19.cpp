/*
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

struct student{
    int id;
    char name[20];
    int grades[3];
};

student fillstd();
void printstd(student s1);

int main()
{
    student *arr;

    int Size;
    cout<<"enter number of student: ";
    cin>>Size;

    arr = new student[Size];

    for(int i=0;i<Size;i++){
        cout<<"student "<<i<<endl;
       arr[i] = fillstd();
    }

    cout<<"--------------------------------------------"<<endl;
    for(int i=0;i<Size;i++){
        cout<<"student "<<i<<endl;
       printstd(arr[i]);
    }

return 0;
}

student fillstd(){
    student s1;
    cout<<"id: ";
    cin>>s1.id;
    cout<<"name: ";
    cin>>s1.name;
    cout<<"grade 1: ";
    cin>>s1.grades[0];
    cout<<"grade 2: ";
    cin>>s1.grades[1];
    cout<<"grade 3: ";
    cin>>s1.grades[2];
    return s1;
}
void printstd(student s1){
    cout<<endl<<"id: "<<s1.id;
    cout<<endl<<"name: "<<s1.name;
    cout<<endl<<"grade 1: "<<s1.grades[0];
    cout<<endl<<"grade 2: "<<s1.grades[1];
    cout<<endl<<"grade 3: "<<s1.grades[2];
    }

*/
