#include <iostream>
#include <string.h>

using namespace std;

class Person{
protected:
    int id;
    char name[20];
public:
    Person(int i=0, char n[20]="none"){
        id=i;
        strcpy(name,n);
    }
    void setId(int i){
    id=i;}
    int getId(){
    return id;}

    void setName(char n[20]){
    strcpy(name,n);}
    char* getName(){
    return name;}

    void virtual printData(){
    cout<<"id "<<id<<"  ";
    cout<<"name "<<name<<endl;}
};


class customer:public Person{
    char contact[14];
public:
    customer(int i=0, char nm[20]="none",char c[20]="0"):Person(i,nm){
        strcpy(contact,c);
    }
    void setCont(char c[20]){
    strcpy(contact,c);}
    char* getCont(){
    return contact;}
    void virtual printData(){
    cout<<"id "<<id<<"  ";
    cout<<"name "<<name<<"  ";
    cout<<"contact "<<contact<<endl;}
};

class employee:public Person{
    char comp[20];
public:
    employee(int i=0, char n[20]="none",char c[20]="none"):Person(i,n){
        strcpy(comp,c);
    }
    void setComp(char c[20]){
    strcpy(comp,c);}
    char* getComp(){
    return comp;}

    void virtual printData(){
    cout<<"id "<<id<<"  ";
    cout<<"name "<<name<<"  ";
    cout<<"comp name "<<comp<<endl;}
};

void print(Person* p){
    p->printData();
}
int main()
{
    Person p1(1,"a");
    customer c1(2,"b","0122");
    employee e1(3,"c","iti");

    print(&p1);
    print(&c1);
    print(&e1);


    return 0;
}
