#include<stdio.h>

struct frac
{
	int num;
	int deno;
};

struct frac input(struct frac f1,struct frac f2)
{	struct frac t;
	printf("enter the fraction\n");
	scanf("%d%d",&f1.num,&f1.deno);
	printf("enter the fraction\n");
	scanf("%d%d",&f1.num,&f1.deno);
	f1=f2=t;
	return t;
}

int main()
{	
	struct frac f1,f2;
	input(f1,f2);
	printf("%d%d",f1.num,f1.deno);
	
}

	
