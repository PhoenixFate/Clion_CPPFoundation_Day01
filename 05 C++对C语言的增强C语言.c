//
// Created by phoenix on 2/14/2019.
//
#include <stdio.h>
#include <stdlib.h>

//1.全局变量检测增强
int a;
int a=10;

//2.函数检测增强
int getRectS(w,h)
{

}


//7.const 增强
const int g_a=100;
void test507()
{
    const int a=10;
    int *b=&a;
    *b=20;
    printf("%d\n",a);
//    int *c=&g_a; //const全局变量在只读的全局区
//    *c=300;
//    printf("%d\n",*c);
}

int main5()
{
    test507();
    printf("------------------------05---------------------\n");
    return 0;
}

