#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    printf("enter the elements of array : \n");
    for(int i=0 ; i<5 ; i++){
        scanf("%d",&arr[i]);
    }
    printf("the elements = \n");
     for(int i=0 ; i<5 ; i++){
        printf("%d \n",arr[i]);
    }

    return 0;
}
