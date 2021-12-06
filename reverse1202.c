#include<stdio.h>
int main()
{
	int enter,out,i;
	scanf("%d",&enter);
    for(i=1;i<=5;i++)
	{
		out=enter%10;
		enter/=10;
		printf("%d",out);
	 } 
	 
}
