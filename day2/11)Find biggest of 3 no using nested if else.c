#include <stdio.h>

int main() {
  
    float a,b,c;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number: ");
    scanf("%f", &c);

  
    if (a >= b) {
        if (a >= c) {
            printf("The largest number is %.2f\n",a);
        } else {
            printf("The largest number is %.2f\n",c);
        }
    } else {
        if (b>= c) {
            printf("The largest number is %.2f\n",b);
        } else {
            printf("The largest number is %.2f\n",c);
        }
    }

    return 0;
}
