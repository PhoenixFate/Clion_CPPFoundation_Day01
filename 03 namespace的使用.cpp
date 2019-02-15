//
// Created by phoenix on 2/13/2019.
//
#include <iostream>
#include "game1.h"
#include "game2.h"
using namespace std;
void test31()
{
    game1::atk();
    game2::atk();
}

//1.命名空间下可以放：函数、变量、结构体、类
namespace A
{
    int m_a=1;
    struct Person
    {
        char name[64];
    };
}
//2.命名空间必须定义在全局作用域下


//3.命名空间可以嵌套
namespace B {
    int a = 10;
    namespace C {
        int a = 20;
    }
}

void test32()
{
    cout<<"---------------------test32---------------------"<<endl;
    cout<<B::a<<endl;
    cout<<B::C::a<<endl;
}

//4、命名空间是开放的，可以随时往原先的命名空间添加内容
namespace A
{
    int b=100;
}
void test33()
{
    cout<<"4:命名空间是开放的，可以随时往原先的命名空间添加内容"<<endl;
    cout<<A::m_a<<endl;
    cout<<A::b <<endl;
}

//5.匿名命名空间
namespace
{
    int c=22;
    int d=23;//==  staitc int d
}

namespace veryLongName
{
    int mm=0;
}

void test34()
{
    namespace shortName=veryLongName;
    cout<<veryLongName::mm<<endl;
    cout<<shortName::mm<<endl;
}

int main3() {
    test31();
    test32();
    test33();
    test34();
    cout << "-------------------------------03-------------------------" << endl;
    return 0;
}
