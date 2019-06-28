#include<stdio.h>

struct fraction
{
	int num;
	int deno;
};

struct fraction input_fraction()
{	
	struct fraction f1,f2;
	printf("enter the first fraction\n");
	scanf("%d%d",&f1.num,&f1.deno);
	printf("enter the second fraction\n");
	scanf("%d%d",&f2.num,&f2.deno);
	return;
}

struct fraction sum_fraction(struct fraction f1,struct fraction f2)
{	
	struct fraction *sum;
	sum=f1.deno*f2.deno;
	printf("sum=%p",sum);
	return;
}	

int main()
{	struct fraction f1,f2;
	input_fraction(&f1,&f2);
	sum_fraction(f1,f2);
}
