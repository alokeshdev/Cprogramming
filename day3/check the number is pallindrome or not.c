#include<stdio.h>
int main(){
    int n,r,rev=0,p;
    printf("enter the number to check for pallindrome:");
    scanf("%d",&n);
    p=n;
    while(0<n){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    if(rev==p){
   printf("its a pallindrome");
    }else{
        printf("not a pallindrome");
    }
 
    return 0;
}
