#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	print(2*n);
}
void print(int n)
{
	if(n==0)
	return 0;
	if(n%2!=0)
	printf("%d\t",n);
	print(n-1);
}