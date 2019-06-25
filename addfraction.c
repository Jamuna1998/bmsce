#include<stdio.h>
struct fractions
{
int numerator;
int denominator;
}p;
int input(int numerator,int denominator)
{
printf("enter the numerator\n");
scanf("%d",&numerator);
printf("enter the denominator\n");
scanf("%d",&denominator);
return 0;
}



int gcd(int numerator,int denominator)     
{
while(numerator!=denominator)
{
if(numerator>denominator)
{
numerator=(numerator-denominator);
}
else 
{
denominator=(denominator-numerator);
}
}
return numerator;
}
void sum(int numerator,int denominator,int *s)
{
*s=numerator+denominator/numerator;
}
int output(int sum)
{
printf("%d",sum);
return 0;
}

int main()
{
//struct fractions p;
int a,b,c;
input(a,b);
sum(a,b,&c);
output(c);
}
