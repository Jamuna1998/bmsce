#include<stdio.h>
int input(int *a,int *b)
{
printf("enter the numbers");
scanf("%d%d",a,b);
return 0;
}

void sum(int a,int b,int *sum)
{
*sum=a+b;

}

int output(int sum)
{
printf("sum is=%d",sum);
return 0;
}
int main()
{
int a,b,c;
input(&a,&b);
sum(a,b,&c);
output(c);
}

