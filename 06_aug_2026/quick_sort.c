// Write a program to take a input in an array 10 unordered number and apply quick sort to order the array in a ascending order
// array is [8 , 2 , 10 , 6 , 5 , 12 , 18 , 9 , 4 , 11]



#include <stdio.h>


int partition(int arr[] , int st , int end){
    
    int pivot = arr[end]; 
    int idx = st - 1 ;

    for (int i = st; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            idx++;
            int temp = arr[idx];
            arr[idx] = arr[i];
            arr[i] = temp ; 
        }
        
    }

    idx++;
    int temp1 = arr[idx];
    arr[idx] = arr[end];
    arr[end] = temp1;

    return idx;
}

void quickSort(int arr[], int start, int high)
{

    if (start < high)
    {

        int partindex = partition(arr, start, high);

        quickSort(arr, start, partindex - 1); // left part
        quickSort(arr, partindex + 1, high);  // right part
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {8 , 2 , 10 , 6 , 5 , 12 , 18 , 9 , 4 , 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Before Sorting: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("\nAfter Sorting: ");
    printArray(arr, n);

    return 0;
}
    





    

    
    
