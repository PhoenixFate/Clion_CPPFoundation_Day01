//
// Created by phoenix on 2/15/2019.
//
#include <iostream>
#include <string>
using  namespace std;

struct Person12
{
    string *name;
    int age;
};

void allocatePerson(struct Person12 **p)
{
    *p=(struct Person12*)malloc(sizeof(struct Person12));
    (*p)->age=10;
}

void test1201()
{
    struct Person12 *p=NULL;
    allocatePerson(&p);
    cout<<"p->age"<<p->age<<endl;
}

void allocatePersonByRef(struct Person12* &p)
{
    p=(struct Person12*)malloc(sizeof(struct Person12));
    p->age=20;
}

void test1202()
{
    struct Person12 *p=NULL;
    allocatePersonByRef(p);
    cout<<"age:"<<p->age<<endl;
}

void test1203()
{
    cout<<"size of Person12:"<< sizeof(struct Person12)<<endl;
    struct Person12 p;
    p.name=new string("name");
    p.age=10;
    cout<<"name:"<<*p.name<<endl;
    cout<<"age:"<<p.age <<endl;
    struct Person12 *s=new struct Person12();
    cout<< sizeof(s)<<endl;
    s->name=new string("new name");
    cout<<*s->name<<endl;
    struct Person12 *ss=(struct Person12*)malloc(sizeof(struct Person12));
    cout<<sizeof(ss)<<endl;
    ss->name=new string("?????????????");
    cout<<*ss->name<<endl;
}
int main()
{
    test1201();
    test1202();
    test1203();
    cout<<"----------------------------------12----------------------"<<endl;
    return 0;
}

