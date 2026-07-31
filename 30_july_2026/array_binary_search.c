#include<stdio.h>
int findProductId( int arr[] , int size ,  int target){
    int st=0 , end = size-1;
    while(st <= end){
        int mid = (st + end)/2;
        if(target> arr[mid]){
            st = mid+1;
        }
    else if (target< arr[mid]){
        end = mid-1;
    }
    else{
        return mid ;
    }
}
return -1;
}
int main(){
    int itemnumber;
     int arr[10] = { 2 , 8 , 9 , 16 , 18 , 26 , 38 , 48 , 51 , 90};
      int size = sizeof(arr)/ sizeof(arr[0]);
     printf("Enter the value to be searched :" );
     scanf("%d" , &itemnumber);
     int result = findProductId(arr , size , itemnumber);
     if(result == -1){
        printf("item is not found");
     }
     else{
        printf("%d is found in %d index " , itemnumber ,  result);
     }
 return 0;
}

