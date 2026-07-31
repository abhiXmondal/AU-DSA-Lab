#include<stdio.h>
int findAccessNumber( int arr[] , int size  , int itemnumber){
    int item = itemnumber;
    int flow = 0;
    int index_no = 0;
    for(int i = 0 ; i < size ; i++){
        if(item == arr[i]){
            flow++;
            index_no = i;
            break;
        }
    }
    if(flow == 1){
        printf("%d is found in %d  no. index" , item , index_no);
    }else{
        printf("Item is not found");
    }
}
int main(){
    int n;
    int itemnumber ;
    int arr[10] = { 101 , 20 , 49 , 385 , 210 , 620 , 85 , 921 , 12 , 206};
      int size = sizeof(arr)/ sizeof(arr[0]);
    printf("Enter the value to be searched :");
    scanf("%d" , &itemnumber );
findAccessNumber( arr, size , itemnumber);
return 0;
}



