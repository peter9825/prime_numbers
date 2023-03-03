/*   This program will display the prime integers between a given range
 *   entered by the user.
 */

#include <stdio.h>
#include <stdbool.h>

// primeNum function declaration

bool primeNum(int prime);

/*                         Main Function                          */

int main()
{

    int num1;
    int num2;
    int i;

    // User Prompt

    printf("\nWelcome to primeNum.");
    printf("\n\nThis program will display the prime integers that are in the range\nbetween the two integers you enter.");
    printf("\n\nPlease enter the beginning integer: ");
    scanf("%d", &num1);
    printf("Please enter the ending integer: ");
    scanf("%d", &num2);

    printf("\n\nThe prime numbers from %d and %d are:\n", num1, num2);

    /*                      Main Function Logic                     */

    // for loop prints all integers in the given the range.

    for (i = num1; num1 <= num2; i++, num1++)
    {

        // if primeNum function returns true(if prime). Call function on the starting integer as it iterates through the range.

        if (primeNum(i))
        {

            // print out prime numbers

            printf("\n%d", i);
        }
    }

    // thank you message

    printf("\n\nThank you for using primeNum. Bye!\n");
    return 0;
}

/*                   primeNum Function Logic                  */

// since function must return true or false it is given a bool return type with one integer argument prime.

bool primeNum(int prime)
{

    int i;

    // excludes 1 and anything less than 1 as prime.
    if (prime <= 1)
    {

        return false;
    }

    // for loop starts at 2 and increments by 1.

    for (i = 2; i < prime; i++)
    {

        // if the integer is divisible from 2 up to the number itself with no remainder return false.

        if (prime % i == 0)
        {

            // if it is not prime it will return 0
            return 0;

            // if it is prime it will return 1
            return 1;
        }
    }
}
