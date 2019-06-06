#inclue<stdio.h>
int main()
{
  getdata();
  add();
  printdata();
}
  int a,b,sum;
  int getdata(int a,int b)
  {
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
  }
  int add(int a,int b)
  {
    sum=a+b;
  }
  int printdata(int sum)
  {
    printf("sum is:%d",sum);
  }
}
