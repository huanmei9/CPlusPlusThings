#include <iostream>
using namespace std;

int count=0;    // 全局(::)的count

class A {
public:
    static int count;  // 类A的count (A::count)

};

namespace ns{
    static int count = 10;
}

// 静态变量必须在此处定义
int A::count;
int main() {
    ::count=1; // 设置全局的count为1
    A::count=5; // 设置类A的count为2
    cout<<A::count<<endl;
    cout<<ns::count<<endl;
//    int count=3; // 局部count
//    count=4;     // 设置局部的count为4
    return 0;
}



// ::用来指定作用空间，可以是全局，可以是类，也可以是命名空间。