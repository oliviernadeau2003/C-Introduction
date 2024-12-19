#include <stdio.h>

int height = 10;
void printPyramid();
void enterHeight();

void enterHeight()
{
    printf("\nEnter height : ");
    scanf("%d", &height);
}

int main(int argc, char const *argv[])
{
    enterHeight();

    // Nombre d'
    for (int i = 1; i <= height; i++)
    {
        // Nombre d'espace avant le #
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        //
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

void printPyramid()
{
}