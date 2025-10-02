#include <stdio.h>

int main()
{
    float num1, num2;
    char operator;

    // এখানে ইউজারদের থেকে প্রথম সংখ্য চাওয়া হবে।
    printf("Enter first number: ");
    scanf("%f", &num1);

    // ইউজার আসলে কি চায় তা জানতে অপারেটর এর ব্যাবহার করা হয়েছে।
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // The space before %c is to consume any leftover newline character

    // ইউজার এর থেকে দ্বিতীয় সংখ্যা চাওয়া হবে।
    printf("Enter second number: ");
    scanf("%f", &num2);

    // ইউজার কোন অপারেটর সিলেক্ট করলে কেমন আচরণ করবে তা নির্ধারণ করা হয়েছে এখানে।
    switch (operator)
    {
    /**এখানে যদি উজাড় , +, - ,*,/ ব্যাবহার করলে রেজাল্ট কি আসবে তা দেখানো হয়েছে এখন।
     *
     * %2f এর একটি উদাহণ, এখানে যদি num এর আসল মান 10.45678 হয়,তাহলে  %.2f ব্যবহারে এটি মাত্র দুই ঘর দশমিকের পরে দেখাবে। মানে 10.45 দেখাবে।  */
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        // এটা মানে হচ্ছে: যদি num2 শূন্য না হয় (অর্থাৎ num2 != 0), তবে ভাগফল প্রিন্ট করবে।
        {
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        }
        else
        // এটি বলছে, যদি num2 শূন্য হয়, তাহলে "Error! Division by zero." মেসেজটি প্রিন্ট করবে ।
        {
            printf("Error! Division by zero.\n");
        }
        break;
    default:
    // default বলবে যদি কোনো নির্দিষ্ট অপারেটর (যেমন +, -, *, /) যদি পাওয়া না যায়, তাহলে "Invalid operator!" মেসেজটি প্রিন্ট করবে।
    
        printf("Invalid operator!\n");
    }

    return 0;
}