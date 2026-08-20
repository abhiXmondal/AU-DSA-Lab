// Wap to take input marks of ten student randomly in an array. Sort the array using merge sort and show the hghest and lowest marks

#include <stdio.h>

void merge(int arr[], int st, int mid, int end)
{
    int i = st;
    int j = mid + 1;
    int k = 0;

    int temp[end - st + 1];

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= end)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (i = st, k = 0; i <= end; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int st, int end)
{
    if (st >= end)
        return;

    int mid = st + (end - st) / 2;

    mergeSort(arr, st, mid);
    mergeSort(arr, mid + 1, end);

    merge(arr, st, mid, end);
}

int main()
{
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
