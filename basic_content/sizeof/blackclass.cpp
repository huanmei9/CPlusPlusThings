/**
 * @file blackclass.cpp
 * @brief 空类的大小为1字节
 * @author 光城
 * @version v1
 * @date 2019-07-21
 */

#include<iostream>

using namespace std;

class A{};
int main()
{
    cout<<sizeof(A)<<endl;
    return 0;
}

// 为什么空类和空结构体的sizeof是 1 字节

// 空类或者空结构体在实例化多个实例之后，可以让编译器给每一个实例分配一个地址，加以区分。