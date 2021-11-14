#include <stdio.h>
#include "my_mat.h"

int main(){
    int matrix[10][10];
    char func;
    while(func != 'D'){
        scanf("%c" , &func);
        if(func == 'A'){
            fillMatrix(matrix);
            takeShortestPath(matrix);
        }else if(func == 'B'){
            int i , j;
            scanf("%d %d", &i,&j);
            isTherePath(matrix , i , j);
        }else if(func == 'C'){
            int i , j;
            scanf("%d %d", &i,&j);
            printShortestPath(matrix , i , j);
        }

    }
    

}