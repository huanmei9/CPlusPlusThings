#include <iostream>
#include <string.h>

using std::cout;
using std::endl;


// union 一种内存共用结构体
union Student
{
    struct Grade {int chinese; int math; int english;}gra;
    int age;
}s;


int main()
{
    s.gra.chinese = 96;
    s.gra.math = 97;
    s.gra.english = 99;
    s.age = 18;     // 赋值之后，s.gra.chinese被覆盖

    cout<<s.gra.chinese<<endl;      
    cout<<s.gra.math<<endl;
    cout<<s.gra.english<<endl;
    cout<<s.age<<endl;
}
