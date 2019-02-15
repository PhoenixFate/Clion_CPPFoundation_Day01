//
// Created by phoenix on 2/14/2019.
//
#include <iostream>
using namespace std;

namespace  AA
{
    int id=10;
}
void test41()
{
//    int id=20;
//    cout<<"id:"<<id<<endl;
    //using声明
    using AA::id;
    cout<<"A::id:"<<id<<endl;
}
namespace BB
{
    int id=50;
}

void test42()
{
    //int id=30;
    //using 编译指针
    using namespace AA;
    using namespace BB;
    cout<<"test2:id:"<<BB::id<<endl;
}

int main4()
{
    test41();
    test42();
    cout<<"---------------------------------------04--------------------------------------"<<endl;
}

