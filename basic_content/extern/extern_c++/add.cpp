#include <iostream>
using namespace std;
extern "C" {
    #include "add.h"        //所以说，尽量都使用cpp文件，减少这类兼容问题
}
int main() {
    add(2,3);
    return 0;
}
