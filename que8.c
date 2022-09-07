#include<stdio.h>
void binary(int );
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	binary(n);
}
void binary(int n)
{
	if(n>0)
	{   binary(n>>1);
	   if(n&1==1)
	   printf("1");
	   else
	   printf("0");
	   	
	}
}