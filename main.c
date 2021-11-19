#include <stdio.h>
#include "my_mat.h"
#define size 10

int main(){
    int matrix[size][size];
    int copied[size][size];
    int i;
    int j;
    char func;
    scanf("%c" , &func);
    while(func != 'D'){
        if(func == 'A'){
            fillMatrixFromInput(matrix);
            takeShortestPath(matrix);
        }else if(func == 'B'){
            copyMatrix(matrix , copied);
            takeShortestPath(copied);
            int res = isTherePath(matrix);
            if(res == 0){
                printf("False\n");
            }else{
                printf("True\n");
            }
        }else if(func == 'C'){
            copyMatrix(matrix , copied);
            takeShortestPath(copied);
            printf("%d\n" ,shortestPath(matrix));
        }
        scanf("%c" , &func);
    }
    return 0;
}