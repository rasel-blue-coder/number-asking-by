#include <stdio.h>
int main() {
    // here is i takeing only variables name only
    int a, b, sum;

    // Here I asking Valu from user
    printf("Enter First Number: "); 
    scanf("%d", &a);
    
    printf("Enter Second Number: ");
    scanf("%d", &b);
    
    // now here i calculate a+b
    sum = a + b;
    printf("sum = %d\n", sum);  
    
    // Use %d to print an integer and use \n to keep a new line

    return 0;
}