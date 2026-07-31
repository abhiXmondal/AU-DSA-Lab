#include<stdio.h>
void swapArray( int arr[] , int size ){
    for(int i=0; i<size ; i++){

        for(int j=0; j<size-1 ; j++){
             
            if(arr[j] > arr[j+1]){
                  
                  int item = arr[j];
                    arr[j] = arr[j+1];
                     arr[j+1]= item;
                }
            }
        }
        printf("The sorted array is : ");
 for(int idx = 0; idx<size ; idx++){
    printf(" %d" , arr[idx]);
    }
}
int main(){
    int arr[10] = { 99 , 85 ,  58 , 71 , 46 , 80 , 76 , 65 , 49 , 55};
 int size = sizeof(arr)/ sizeof(arr[0]);
 swapArray(arr , size);
 return 0;
}

