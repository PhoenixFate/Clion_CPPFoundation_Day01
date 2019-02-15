//
// Created by phoenix on 2/15/2019.
//
#include <iostream>
using namespace std;

void test1301()
{
    const int &ref=10;//int temp=10; const int &ref=temp;
    int *p=(int *)&ref;
    *p=1000;
    cout<<"*p:"<<*p<<endl;
}

//常量引用的使用场景：通常用来修饰形参
void show(const int &a)
{
    cout<<"a:"<<a<<endl;
}

void test1302()
{
    int a=10;
    show(a);
}

int main()
{
    test1301();
    test1302();
    cout<<"----------------------------------13---------------------------"<<endl;
    return 0;
}

