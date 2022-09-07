#include<stdio.h>
void print(int);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	print(n);
	
}
void print(int n)
{  
  if(n>0)
  {
  	print(n-1);
  	
  	printf(" %d",n*n);
  }
   
  
}