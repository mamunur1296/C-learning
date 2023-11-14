/**
 * Relational operators :
 * in C are used to compare two values and determine the relationship between them.
 * They return a Boolean result, which is either true (1) or false (0). Here are the common relational operators
 * in C:
 *
 * 1 : Equality Operator (==): Checks if two values are equal.
 * 2 : Inequality Operator (!=): Checks if two values are not equal.
 * 3 : Greater Than Operator (>): Checks if the left operand is greater than the right operand.
 * 4 : Less Than Operator (<): Checks if the left operand is less than the right operand.
 * 5 : Greater Than or Equal To Operator (>=): Checks if the left operand is greater than or equal to the right operand.
 * 6 : Less Than or Equal To Operator (<=): Checks if the left operand is less than or equal to the right operand.
 *
 * Logical operators :
 *  in C are used to perform logical operations on Boolean values (true or false). They are typically used in conditional
 * expressions to combine or manipulate conditions. The three main logical operators in C are:
 *
 * 1 : Logical AND (&&): The logical AND operator returns true if both of its operands are true, otherwise, it returns false.
 * 2 : Logical OR (||): The logical OR operator returns true if at least one of its operands is true, otherwise, it returns false.
 * 3 : Logical NOT (!): The logical NOT operator is a unary operator that reverses the logical value of its operand. If the operand
 * is true, it returns false, and if the operand is false, it returns true.
 */
#include <stdio.h>

int main()
{
    int x = 5, y = 10;
    int a = 0, b = 15;
    int value = 5;

    // Relational operators examples:

    // Equality Operator (==)
    if (x == y)
    {
        printf("This is Equal");
    }
    else
    {
        printf("This is not Equal");
    }

    // Inequality Operator (!=)
    if (a != b)
    {
        // This condition is true, as a and b are not equal.
    }

    // Greater Than Operator (>)
    if (x > y)
    {
        // This condition is false, as x is not greater than y.
    }

    // Less Than Operator (<)
    if (x < y)
    {
        // This condition is true, as x is less than y.
    }

    // Greater Than or Equal To Operator (>=)
    if (x >= y)
    {
        // This condition is false, as x is not greater than or equal to y.
    }

    // Less Than or Equal To Operator (<=)
    if (x <= y)
    {
        // This condition is true, as x is less than or equal to y.
    }

    // Logical operators examples:

    // Logical AND (&&)
    if (x > 0 && y > 0)
    {
        // This condition is true because both x and y are greater than 0.
    }

    // Logical OR (||)
    if (a == 0 || b == 15)
    {
        // This condition is true because b is equal to 15.
    }

    // Logical NOT (!)
    if (!(value > 10))
    {
        // This condition is true because the value is NOT greater than 10.
    }

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("The number is positive.\n");
    }
    else if (number < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

    int age = 18;
    char gender = "m";

    if (age >= 18)
    {
        if (gender == 'M' || gender == 'm')
        {
            printf("You are an adult male.\n");
        }
        else if (gender == 'F' || gender == 'f')
        {
            printf("You are an adult female.\n");
        }
        else
        {
            printf("Invalid gender input.\n");
        }
    }
    else
    {
        printf("You are a minor.\n");
    }

    return 0;
}
