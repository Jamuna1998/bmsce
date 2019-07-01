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

void sum_fraction(struct fraction f1,struct fraction f2,int *sum,int *total)
{
	*sum=0;
	*sum=(f1.num*f2.deno)+(f1.deno*f2.num);
	*total=f1.deno*f2.deno;
}
void display_fraction(struct fraction f1,struct fraction f2,int sum,int total)
{	
	printf("sum of %d/%dand%d/%d=%d/%d",f1.num,f1.deno,f2.num,f2.deno,sum,total);
}
	
int main()
{	
	struct fraction f1,f2;
	int sum,total;
	input_fraction(&f1,&f2);
	sum_fraction(f1,f2,&sum,&total);
	display_fraction(f1,f2,sum,total);
}
