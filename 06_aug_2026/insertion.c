#include <stdio.h>

void insertionSort(int arr[] , int size) {
    for( int i = 0 ; i< size ; i++){
        int curr = arr[i];
         int prev = i-1;

         while (prev >=0 && arr[prev] > curr)
         {
            arr[prev +1] = arr [prev];
            prev-- ;
         }

         arr[prev+1] = curr;
         
    }
    
}


void printArray(int arr[] , int n){
    
    printf("The sorted Array is : ");
for(int idx = 0 ; idx< n ; idx++){
    printf(" %d " , arr[idx]);
}
}

int main() {

    int arr[6] = { 230 , 145  , 89 , 76 , 10 , 467};

    insertionSort( arr , 6);
    printArray(arr , 6);


    

    return 0;
}
