#include <stdio.h>

void printTopPyramidHalf(unsigned int rows);
void printBotomPyramidHalf(unsigned int rows);

int main ()
{


    int rows = 0;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);

    printTopPyramidHalf(rows);
    printBotomPyramidHalf(rows);

    return 0;
}

void printTopPyramidHalf(unsigned int rows)
{
    int space = 0, i = 0, j = 0;
    for(i = 1; i <= rows-1; i++){
        for(space = 0; space < rows -i ; space++)
            printf("  ");
        for(j = 0; j < i * 2 - 1;j++)
            printf("* ");
            printf("x %d",j);

            printf("\n");
    }
}

void printBotomPyramidHalf(unsigned int rows)
{
    int space = 0, i = 0, j = 0;

    for(i = rows; i >= 1; i--){
        for(space = 0; space < rows - i; space++)
            printf("  ");
        for(j = 0; j < i * 2 -1 ; j++)
            printf("* ");
            printf("x %d",j);
            printf("\n");
    }
}
