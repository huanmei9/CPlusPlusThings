#include<iostream>

using namespace std;
struct stuff 
{
    unsigned int field1: 30;
    unsigned int       : 2;         // 空位域，使得field1对齐32bit
    unsigned int field2: 4;
    unsigned int       : 0;         // 空0位域，使得field3在下一个整形开始
    unsigned int field3: 3; 
};

struct st
{
    unsigned short a: 4;
    unsigned short b: 4;
    unsigned short c: 1;
    unsigned short d: 2;
    unsigned short e: 1;
};

int main(){
    struct stuff s={1,3,5};
    cout<<s.field1<<endl;
    cout<<s.field2<<endl;
    cout<<s.field3<<endl;
    cout<<sizeof(s)<<endl;


    struct st ss={5,6,1,2,0};
    cout<<ss.a<<endl;
    cout<<ss.b<<endl;
    cout<<ss.c<<endl;
    cout<<ss.d<<endl;
    cout<<ss.e<<endl;
    cout<<sizeof(ss)<<endl;
    return 0;
}
