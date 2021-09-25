#include<iostream>
using namespace std;


// 如果函数形参设置为 const int，是否会对传入的实参有影响
void fun(const int i){
    cout<< i <<endl;
}


void f(const int i){
    //i=10; // error: assignment of read-only parameter ‘i’
    cout<<i<<endl;
}

int main(){
    f(1);
    int var = 100;
    fun(var);
    var ++;
    cout<<var<<endl;        // 打印 101
}


// 结论：不影响
