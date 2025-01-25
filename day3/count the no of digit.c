#include<stdio.h>
int main(){
    int n, count=0;
    printf("enter the number to count the no of digit:");
    scanf("%d",&n);
    while(0<n){
        n=n/10;
        count++;
    }
    printf("the no of digits are :%d",count);
    return 0;
}
