#include <stdio.h>
int main() {
    
// Suitable data types for storage
char name[20]; 
int age; 
float height;
char grade;
printf("--- Enter Personal Details ---\n");
printf("Enter your Name: ");


// Use fgets for safer string input
fgets(name, sizeof(name), stdin);
printf("Enter your Age (years): ");
scanf("%d", &age);
printf("Enter your Height (Fit, e.g., 5.5): ");
scanf("%f", &height);
printf("Enter your Letter Grade (e.g., A, B, C): ");
scanf(" %c", &grade);

// Display the values in a formatted output
printf("\n--- Stored Personal Profile ---\n");
printf("Name: \t%s", name);
printf("Age: \t%d years\n", age);
printf("Height: \t%.2f meters\n", height);
printf("Grade: \t%c\n", grade);
return 0;
}