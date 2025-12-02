#include <stdio.h>

int main()
{
    int num1 = 5;
    int num2 = 10;
    char op = '+';

    switch (op)
    {
    case '+':
        printf("%d %c %d = %d\n", num1, op, num2, num1 + num2);
        break;
    case '-':
        printf("%d %c %d = %d\n", num1, op, num2, num1 - num2);
        break;
    case '*':
        printf("%d %c %d = %d\n", num1, op, num2, num1 * num2);
        break;
    case '/':
        if (b != 0)
            printf("%d %c %d = %d\n", num1, op, num2, num1 / num2);
        else
            printf("Division by zero error!\n");
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}
