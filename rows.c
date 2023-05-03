#include <stdio.h>

int main(void)
{
    int x1,  x2,  x3,  x4,
        x5,  x6,  x7,  x8,
        x9,  x10, x11, x12,
        x13, x14, x15, x16;

    int row1Sum,    row2Sum,    row3Sum,    row4Sum,
        column1Sum, column2Sum, column3Sum, column4Sum,
        diag1Sum,   diag2Sum;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, 
    &x5, &x6, &x7, &x8, &x9, &x10, &x11, &x12, &x13, &x14, &x15, &x16);

    row1Sum = x1 + x2 + x3 + x4;
    row2Sum = x5 + x6 + x7 + x8;
    row3Sum = x9 + x10 + x11 + x12;
    row4Sum = x13 + x14 + x15 + x16;

    column1Sum = x1 + x5 + x9 + x13;
    column2Sum = x2 + x6 + x10 + x14;
    column3Sum = x3 + x7 + x11 + x15;
    column4Sum = x4 + x8 + x12 + x16;

    diag1Sum = x1 + x6 + x11 + x16;
    diag2Sum = x4 + x7 + x10 + x13;

    printf("\n%2d %2d %2d %2d\n", x1, x2, x3, x4);
    printf("%2d %2d %2d %2d\n", x5, x6, x7, x8);
    printf("%2d %2d %2d %2d\n", x9, x10, x11, x12);
    printf("%2d %2d %2d %2d\n", x13, x14, x15, x16);

    printf("\nRow sums: %2d %2d %2d %2d\n", column1Sum, column2Sum, column3Sum, column4Sum);

    printf("Diagonal sums: %2d %2d", diag1Sum, diag2Sum);

return 0;
}