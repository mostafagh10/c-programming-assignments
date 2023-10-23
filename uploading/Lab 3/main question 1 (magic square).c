#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}
int main()
{
    int row,col,size,value;
    printf("enter the size : ");
    scanf("%d",&size);
    if(size == 0 || size < 0 || size %2 ==0){
        printf("please enter odd number");
    }else if(size == 1){
        printf("please enter odd number bigger than 1");
    }
    else{
         row = 1;
         col= (size+1) /2;
         value=1;
         gotoxy(col*3,row);
         delay(1);
         printf("%3d",value);
        do{
         if(value%size == 0){
            if(row == size){
                row = 1;
            }else{
                row++;
            }
            value++;
            gotoxy(col*3,row);
            delay(1);
          printf("%3d",value);
         }else{
             if(col == 1){
                col = size;
             }else{
                 col--;
             }
              if(row == 1){
                row = size;
             }else{
                 row--;
             }
            value++;
            gotoxy(col*3,row);
            delay(1);
          printf("%3d",value);
         }

        }while(value < size*size);

    }


    return 0;

}
