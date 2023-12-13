#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; // initialize the height of the piramid
    do
    {
        height = get_int("Height of: "); // ask for a numer that will be the height of the piramid
    }
    while (height <= 0 || height >= 9);

    for (int i = 0; i < height; i++) // build the height of the piramid based on:
    {
        for (int j = 0; j < height - i - 1; j++) // empty spaces
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++) // hashes
        {
            printf("#");
        }
        printf("  ");                   // add space between each half piramid
        for (int k = 0; k < i + 1; k++) // build a new half piramid
        {
            printf("#");
        }
        printf("\n");
    }
}