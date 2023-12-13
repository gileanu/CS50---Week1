#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    do
    {
        start = get_int("Starting number of llamas: ");
    }
    while (start < 9);

    int end;
    do
    {
        end = get_int("How many year you want? ");
    }
    while (end < start);

    int years = 0;
    while (start < end)
    {
        start += start / 3 - start / 4;
        years++;
    }

    printf("Years: %i\n", years);
}