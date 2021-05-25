#include<stdio.h>
void dis(int num)
{
	int r,rev=0,c=0,a,b=0;
	int p=num;
	while(num)
	{
		r=num%10;
		num=num/10;
		rev=rev*10+r;
		
	}
	while(rev)
	{
		a=rev%10;
		rev=rev/10;
		c++;
		b=b+pow(a,c);
		
	}
	printf("%d",b);
	if(b==p)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	dis(num);
	return 0;
}
