#include<stdio.h>
//int getdata(int,int);
//int add(int,int,int);
//int printdata(int);
int main()
{
  getdata();
  add();
  result();
}
  int a,b,sum;
  int getdata(int a,int b)
  {
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
  }
  int add(int a,int b,int sum)
  {
    sum=a+b;
printf("sum is:%d\n",sum);
  }
  int result(int sum)
  {
   // printf("sum is:%d",sum);
  }
