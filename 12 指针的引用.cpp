//
// Created by phoenix on 2/15/2019.
//
#include <iostream>
#include <string>
using  namespace std;

struct Person12
{
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
int main12()
{
    test1201();
    test1202();
    cout<<"----------------------------------12----------------------"<<endl;
    return 0;
}

