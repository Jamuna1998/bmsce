#include<stdio.h>
struct fractions
{
int numerator;
int denominator;
typedef struct *p;
}
int input(int *p)
{
printf("enter the numerator\n");
scanf("%d",&numerator);
printf("enter the denominator\n");
scanf("%d",&denominator);
return 0;
}

void sum(int *p,int *sum)
{
int ans;
if(numerator>denominator)
{
ans=gcd(numerator-denominator,denominator);
}
else if(denominator>numerator)
{
ans=gcd(numerator,denominator-numerator);
}
sum=numerator+denominator/ans;
}

int gcd(int *p)
{
int ans;
ans=gcd(denominator,numerator mod denominator)
return ans;
}

int ouput(int sum)
{
printf("%d",sum);
}

int main()
{
int *p,c;
input(p);
sum(p,&c);
output(c);
}
