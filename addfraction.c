#include<stdio.h>

struct fractions
{
int num;
int deno;
}p;

int input(int p)
{
int num1,num2,deno1,deno2;
printf("enter first fraction");
printf("enter the numerator and denominator\n");
scanf("%d%d",&p.num1,&p.deno1);
printf()"enter second fraction");
printf("enter the numerator and denominator\n");
scanf("%d%d",&p.num2,&p.deno2);
return 0;
}

int gcd(int p)     
{
while(p.num!=p.deno)
{
if(num>deno)
{
num=(num-deno);
}
else 
{
deno=(deno-num);
}
}
return num;
}

void sum(int p,int *s)
{
int lcm;
lcm=deno1*deno2;
printf("sum is=%d%d",num1*deno1+num2*deno2,lcm);

}

int output(int s)
{
printf("sum of two fractions=%d",s);
return 0;
}

int main()
{
struct fractions p;
int c;
input(p);
sum(p,&c);
output(c);
}
