#include <stdio.h>

void findcubes(int *ptr, int rows, int cols)
{
    printf("\nCubes of the elements in the array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int value = *(ptr + i * cols + j);
            printf("%d ", value * value * value);
        }
        printf("\n");
    }
}

int main()
{
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int array[size][size];
    printf("Enter the elements of the array:\n");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    findcubes(&array[0][0], size, size);

    return 0;
}