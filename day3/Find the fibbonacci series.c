#include<stdio.h>
int main(){
   int a,b,sum,n;
   printf("enter the max limit to find fibbonacci series :");
   scanf("%d",&n);
   a=0,b=1,sum=0;
   for(int i=1;i<=n;i++){
    printf("%d \n",sum);
    a=b;
    b=sum;
    sum=a+b;
       
   }
    return 0;
}
