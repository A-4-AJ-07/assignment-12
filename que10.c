#include<stdio.h>
void reverse(int);
int main()
{
	int n;
	printf("Enter the number for reverse:");
	scanf("%d",&n);
	printf("The reverse of the given number is:");
	reverse(n);
}
void reverse(int n)
{
	int a;
	if(n>0)
	{
		printf("%d",n%10);
		n=n/10;
		reverse(n);
	}
}