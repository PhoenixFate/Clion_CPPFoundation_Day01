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

struct T
{

};

struct T1
{
    int a;
};

struct T2
{
    string name;
};

void test1204()
{
    cout<<"-------------------------4------------------------"<<endl;
    cout<<"size of T:"<<sizeof(T)<<endl;
    cout<<"size of T1:"<<sizeof(T1)<<endl;
    cout<<"size of T2:"<<sizeof(T2)<<endl;
    T t;
    T1 t1;
    T2 t2;
    cout<<"size of t:"<<sizeof(t)<<endl;
    cout<<"size of t1:"<<sizeof(t1)<<endl;
    cout<<"size of t2:"<<sizeof(t2)<<endl;
}
int main()
{
    test1201();
    test1202();
    test1203();
    test1204();
    cout<<"----------------------------------12----------------------"<<endl;
    return 0;
}

