#include <stdio.h>
 int main()
 {
 	int num, count=0;
 	printf("Enter a number: ");
 	scanf("%d",&num);
 	for(;num!=0; num/=10)
 	{
 		count ++;
 	}
 	printf("The number of digits given in the input is : %d", count);
 	return 0;
 }
