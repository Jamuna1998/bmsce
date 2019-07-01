#include<stdio.h>

struct fraction
{
	int num;
	int deno;
};
void input_fraction(struct fraction *f1,struct fraction *f2)
{	
	printf("enter the first fraction\n");
	scanf("%d",&f1->num);
	scanf("%d",&f1->deno);
	printf("enter the second fraction\n");
	scanf("%d",&f2->num);
	scanf("%d",&f2->deno);	
	
}

void sum_fraction(struct fraction f1,struct fraction f2,int *numerator,int *denominator)
{
	*numerator=0;
	*numerator=(f1.num*f2.deno)+(f1.deno*f2.num);
	*denominator=f1.deno*f2.deno;
}
void display_fraction(struct fraction f1,struct fraction f2,int numerator,int denominator)
{	
	printf("sum of %d/%dand%d/%d=%d/%d",f1.num,f1.deno,f2.num,f2.deno,numerator,denominator);
}
	
int main()
{	
	struct fraction f1,f2;
	int numerator,denominator;
	input_fraction(&f1,&f2);
	sum_fraction(f1,f2,&numerator,&denominator);
	display_fraction(f1,f2,numerator,denominator);
}
