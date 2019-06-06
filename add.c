#inclue<stdio.h>
int main()
{
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
    printf("sum is:%d",sum);
  }
  int printdata()
  {
    printf("sum is:"+sum);
  }
}
