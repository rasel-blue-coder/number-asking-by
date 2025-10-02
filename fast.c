#include <stdio.h>
int main() {
    int a, b, sum;

    printf("Enter First Number: ");
    scanf("%d", &a);
    
    printf("Enter Second Number: ");
    scanf("%d", &b);
    
    sum = a + b;
    printf("sum = %d\n", sum);  // Use %d to print an integer

    return 0;
}