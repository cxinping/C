#include <stdio.h>

// 只是做个函数声明，并不用实现
 int sum(int a, int b);
 
 int main()
 {
     int c = sum(1, 4);
     return 0;
 }
 
 // 函数的定义(实现)
 int sum(int a, int b) {
     return a + b;
 }