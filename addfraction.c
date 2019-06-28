#include<stdio.h>

struct fraction
{
	int num;
	int deno;
};

void input_fraction(struct fraction f1,struct fraction f2)
{	
	printf("enter the first fraction\n");
	scanf("%d%d",&f1.num,&f1.deno);
	printf("enter the second fraction\n");
	scanf("%d%d",&f2.num,&f2.deno);	
}

void sum_fraction(struct fraction f1,struct fraction f2,int *sum,int *total)
{
	
	*sum=0;
	*sum=(f1.num*f2.deno)+(f1.deno*f2.num);
	*total=f1.deno*f2.deno;
}
void display_fraction(int sum,int total)
{	
	printf("sum=%d/%d",sum,total);
}
	
int main()
{	
	struct fraction f1,f2;
	int sum,total;
	input_fraction(f1,f2);
	sum_fraction(f1,f2,&sum,&total);
	display_fraction(sum,total);
}
