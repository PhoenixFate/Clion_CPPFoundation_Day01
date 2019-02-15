//
// Created by phoenix on 2/14/2019.
//
#include <iostream>
using namespace std;

void test1001()
{
    int a=10;
    int &b=a;
    cout<<"b:"<<b<<endl;
    b=20;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}

void test1002()
{
    int a=10;
    int &b=a;
    int c=20;
    b=c;
}

void test1003()
{
    int arr[6]={1,2,3,4,5,6};
    int (&b)[6]=arr;//数组起别名
    for(int i=0;i<6;++i)
    {
        cout<<"i:"<<b[i]<<endl;
    }

    //第二种方式起别名
    typedef int ArrayRef[6];//一个具有6个元素的int数组
    ArrayRef &c=arr;
    for(int i=0;i<6;++i)
    {
        cout<<"i:"<<c[i]<<endl;
    }
}
int main10()
{
    test1001();
    test1003();
    cout<<"----------------------------------10-----------------------------"<<endl;
    return 0;
}

