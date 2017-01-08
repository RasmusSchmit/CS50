#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Because of scope we have to declare the value outside of the body of the loop:
    int n;
    do
    {
        n = get_int();
    }
    while (n < 0);

    int bottles = n * 12;

    // Printing the result:
    printf("Minutes: %i\n", n);
    printf("Bottles:m %i\n", bottles);
}
