#include<stdio.h>
int main()
{
int x,y,z;
getdata(x,y );
z=add(x,y);
printdata(z);
  
}
  int getdata(int *a,int *b)
  {
    printf("enter the numbers\n");
    scanf("%d%d",a,b);
 }
  int add(int c,int d)
  {
 int sum;
    sum=c+d;
    return sum;
  }
  int printdata(int sum)
  {
   printf("sum is:%d",sum);
   return 0;
  }
