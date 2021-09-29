#include <iostream>


using std::cout;
using std::endl;


// 4-Byte alignment
struct Student
{
    char gender;
    char name[20];
    int num;
};


int main(void)
{
    struct Student s = {'M', "HuanMei", 10};
    cout<<s.num<<endl;
    cout<<sizeof(s.num)<<" Byte"<<endl;
    cout<<sizeof(s.name)<<" Byte"<<endl;
    cout<<sizeof(s.gender)<<" Byte"<<endl;
    cout<<sizeof(s)<<" Byte"<<endl;

    return 0;
}