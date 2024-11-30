
#include <iostream>
#include<string.h>
using namespace std;

class student{
    int id;
    char name[20];
    int grade;
    static int Count;
    static char school[20];
public:
    student(){
        Count++;
        id=0;
        strcpy(name,"null");
        grade=0;
        }

    student(int d, char n[20], int g){
        Count++;
        id=d;
        strcpy(name,n);
        grade=g;
        }

    void setID(int d){
        id = d;
    }
    void setName(char n[20]){
        strcpy(name,n);
    }
    void setGrade(int g){
        grade = g;
    }

    void static setSchool(char s[20]){
        strcpy(school,s);
    }

    int static getCount(){
    return Count;}
    int getId(){
    return id;}
    char* getName(){
    return name;}
    int getGrade(){
    return grade;}
    static char* getSchool(){
    return school;}

    ~student(){
    Count--;}
};

student fillstd();
void printstd(student s1);
int student::Count=0;
char student::school[20]="ITI";

int main()
{
    student s1,s2(1,"name1",100);
    cout<<"number of student is: "<<student::getCount()<<endl;
    cout<<"default values is: ";
    printstd(s1);
    cout<<endl;

    cout<<"parametrized values is: ";
    printstd(s2);
    cout<<endl;

    char s[20];
    cout<<"new school name: ";
    cin>>s;
    student::setSchool(s);

    s1=fillstd();
    printstd(s1);
    printstd(s1);
    return 0;
}

student fillstd(){
    int i,g;
    char n[20];
    cout<<"enter values of student"<<endl;
    cout<<"id: ";
    cin>>i;
    cout<<"name: ";
    cin>>n;
    cout<<"grade: ";
    cin>>g;
    student s1;
    s1.setID(i);
    s1.setName(n);
    s1.setGrade(g);
    return s1;
}
void printstd(student s1){
    cout<<endl<<"id: "<<s1.getId();
    cout<<endl<<"name: "<<s1.getName();
    cout<<endl<<"grade: "<<s1.getGrade()<<endl;
    cout<<"school name is: "<<student::getSchool()<<endl;
    }


