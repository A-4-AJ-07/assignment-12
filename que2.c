#include<stdio.h>
int sum(int);
int main()
{
	int n;
	printf("Enter the number upto whuch sum required: ");
	scanf("%d",&n);
	sum(n);
	
}
int sum(int n)
{
	if(n==0)
	return 1;
	printf("%d\t",n);
     return sum(n-1);
}