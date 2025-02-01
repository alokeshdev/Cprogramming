// Recursive function to calculate GCD
#include <stdio.h>
int gcd(int a, int b) {
    // Base case: if b becomes 0, the GCD is a
    if (b == 0) {
        return a;
    }
    // Recursive case: GCD of b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
