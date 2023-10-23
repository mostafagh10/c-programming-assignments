#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    printf("enter the elements : \n");
    for(int i=0 ; i<5 ; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=0 ; i<5 ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("the max = %d and the min = %d \n",max,min);
    return 0;
}
