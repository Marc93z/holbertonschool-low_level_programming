#include <stdio.h>
/**
 * main - f print 1 to 100
 *
 * Return: 1 to 100, "fizz"if  3,"buzz" if 5 and "FizzBuzz" it is 3 and 5
 */
int main(void)
{
        int i;

        for (i = 1 ; i <= 100 ; i++)
        {
                if (i % 3 == 0 && i % 5 == 0)
                {
                        printf("FizzBuzz");
                }
                else if (i % 3 == 0)
                {
                        printf("Fizz");
                }
                else if (i % 5 == 0)
                {
                        printf("Buzz");
                }
                else
                {
                        printf("%d", i);
                }
                if (i <= 99)
                {
                        printf(" ");
                }
        }
        printf("\n");
        return (0);
}
