#include <iostream>
#include<string.h>
using namespace std;

class student{
    int id;
    char name[20];
    int grade;
public:
    student(){
        id=0;
        strcpy(name,"null");
        grade=0;
        }

    student(int d, char n[20], int g){
        id=d;
        strcpy(name,n);
        grade=g;
        }

    void setID(int d){
        id = d;
    }
    void setname(char n[20]){
        strcpy(name,n);
    }
    void setgrade(int g){
        grade = g;
    }

    int getId(){
    return id;}
    char* getname(){
    return name;}
    int getgrade(){
    return grade;}
};

student fillstd();
void printstd(student s1);

int main()
{
    student s1,s2(1,"name1",100);
    cout<<"default values is: ";
    printstd(s1);
    cout<<endl;

    cout<<"parametrized values is: ";
    printstd(s2);
    cout<<endl;

    s1=fillstd();
    printstd(s1);
    return 0;
}

student fillstd(){
    int i,g;
    char n[20];
    cout<<endl<<"enter values of student"<<endl;
    cout<<"id: ";
    cin>>i;
    cout<<"name: ";
    cin>>n;
    cout<<"grade: ";
    cin>>g;

    student s1;
    s1.setID(i);
    s1.setname(n);
    s1.setgrade(g);
    return s1;
}
void printstd(student s1){
    cout<<endl<<"id: "<<s1.getId();
    cout<<endl<<"name: "<<s1.getname();
    cout<<endl<<"grade: "<<s1.getgrade()<<endl;
    }
