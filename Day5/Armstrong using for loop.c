#include <stdio.h>
 #include <math.h>
 int main(){
 	int num,temp,remainder,sum=0,digits=0;
 	printf("Enter a number : ");
 	scanf("%d",&num);
 	temp=num;
 	for(;temp!=0;temp/=10)
 	{
 		digits++;
 	}
 	temp=num;
 	for(;temp!=0;temp/=10)
 	{
 		remainder=temp%10;
 		sum+=pow(remainder,digits);
 	}
 	if(sum==num)
 	{
 		printf("%d is an Armstrong number.\n",num);
 	}
 	else
 	{
 		printf("%d is Not an Armstrong number.\n",num);
 	}
 return 0;
 }
