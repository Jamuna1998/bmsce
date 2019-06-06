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
  int getdata()
  {
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
  }
  int add()
  {
    sum=a+b;

  }
  int result()
  {
   printf("sum is:%d",sum);
  }
