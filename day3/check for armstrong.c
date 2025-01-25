#include<stdio.h>
int main(){
    int n=0,r,rev=0,p;
    printf("enter the number to check for armstrong:");
    scanf("%d",&n);
    p=n;
    while(0<n){
        r=n%10;
        rev=rev+(r*r*r);
        n=n/10;
        
    }
    if(rev==p){
   printf("its a armstrong");
    }else{
        printf("not a armstrong");
    }
 
    return 0;
}
