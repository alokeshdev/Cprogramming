#include <stdio.h>
 #include <math.h>
 int main(){
 	int num,temp,reversed=0,remainder=0;
 	printf("Enter a number : ");
 	scanf("%d",&num);
 	temp=num;
 	for(;temp!=0;temp/=10)
 	{
 		remainder=temp%10;
 		reversed=reversed*10+remainder;
 	}
 	if(num==reversed)
 		printf("%d is a palindrome number",num);
 	else
 		printf("%d is Not a palindrome number",num);
 	return 0;
 }
