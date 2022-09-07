#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	print(2*n);
	
}
void print(int n)
{  
  if(n>0)
  {
  	print(n-1);
  	if(n%2==0)
  	printf(" %d",n);
  }
   
  
}