#include <stdio.h>
#include "my_mat.h"
#define size 10

int main(){
    int matrix[size][size];
    int copied[size][size];
    int i;
    int j;
    char func;
    while(func != 'D'){
        scanf("%c" , &func);
        if(func == 'A'){
            fillMatrixFromInput(matrix);
            takeShortestPath(matrix);
        }else if(func == 'B'){
            copyMatrix(matrix , copied);
            takeShortestPath(copied);
            int res = isTherePath(matrix , i , j);
            if(res == 0){
                printf("False");
            }else{
                printf("True");
            }
        }else if(func == 'C'){
            copyMatrix(matrix , copied);
            takeShortestPath(copied);
            scanf("%d %d", &i,&j);
            printf("%d" ,shortestPath(matrix , i , j));
        }
    }
    return 0;
}