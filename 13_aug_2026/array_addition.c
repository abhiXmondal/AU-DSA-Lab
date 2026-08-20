#include <stdio.h>

void display(int arr3[2][5], int r, int c)
{
    printf("The Resultant array is :\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}

void addArray(int arr1[2][5], int arr2[2][5],
              int arr3[2][5], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main()
{
   

  

    int arr1[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    int arr2[2][5] = {
        {5, 6, 7, 8, 9},
        {3, 4, 23, 4, 10}
    };

    int arr3[2][5];

    addArray(arr1, arr2, arr3, 2, 5);

    display(arr3, 2, 5);

    return 0;
}
