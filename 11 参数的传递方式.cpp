//
// Created by phoenix on 2/15/2019.
//
#include <iostream>
using  namespace std;

void mySwap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void test1101()
{
    int a=10;
    int b=20;
    mySwap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}

//地址传递
void mySwap2(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void test1102()
{
    int a=10;
    int b=20;
    mySwap2(&a,&b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}

//引用传递
void mySwap3(int &a,int &b)
{
    cout<<"address of a:"<<&a<<endl;
    cout<<"address of b:"<<&b<<endl;
    int temp=a;
    a=b;
    b=temp;
}

void test1103()
{
    int a=10;
    int b=20;
    cout<<"address of a:"<<&a<<endl;
    cout<<"address of b:"<<&b<<endl;
    mySwap3(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}

//引用注意事项
//2.不要返回局部变量的引用
int& doWork()
{
    int a;
    return a;
}
void test1104()
{
//    int &b=doWork();
//    cout<<"doWork:"<<b<<endl;
}

int& doWork2()
{
    static int aa=10;
    return aa;
}

void test1105()
{
    cout<<doWork2()<<endl;
    cout<<doWork2()<<endl;
    cout<<doWork2()<<endl;
    doWork2()=30;
    cout<<doWork2()<<endl;
    cout<<doWork2()<<endl;
}

int main11()
{
    test1101();
    test1102();
    test1103();
    test1104();
    test1105();
    cout<<"--------------------------11---------------------------"<<endl;
    return 0;
}

