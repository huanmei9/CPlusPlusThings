/* Compile code with optimization option */
#include <stdio.h> 

int main(void) 
{ 
    const volatile int local = 10; 
    int *ptr = (int*) &local; 

    printf("Initial value of local : %d \n", local); 

    *ptr = 100; 

    printf("Modified value of local: %d \n", local); 

    return 0; 
} 


// const volatile 的作用：
// 只读的状态寄存器
// 它是只读的，所以用const告知编译器不要优化到寄存器，而告知程序本身不要做修改
// 它是状态寄存器，所以它可能被程序之外的东西（硬件，中断等）修改，所以用volatile。



// volatile的作用：
// 1.告知编译器不要做优化
// 2.每次访问从内存读取，而不是寄存器
// 3.const和指针都可以用volatile