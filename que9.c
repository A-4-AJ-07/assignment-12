#include<stdio.h>
void octal(int );
int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	octal(n);
}
void octal(int n)
{
	if(n>=1)
	{
	
	octal(n/8);
	printf("%d",n%8);
}
}