#include<stdio.h>
int main(){
    int n,r,rev=0;
    printf("enter the number to reverse the digit:");
    scanf("%d",&n);
    while(0<n){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    printf("the reverse of the no is :%d",rev);
    return 0;
}
