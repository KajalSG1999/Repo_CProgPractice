#include<stdio.h>
int main()
{
  int num; 
  static int num1;
  volatile static int num2;
  static volatile int num3;
  const volatile static int num4;
  return 0;
}
