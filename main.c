#include <stdio.h>
#include "my_mat.h"

int main(){
    int matrix[10][10];
    int copied[10][10];
    int i;
    int j;
    char func;
    scanf("%c" , &func);
    while(func != 'D'){
        if(func == 'A'){
            fillMatrixFromInput(matrix);
            scanf("%c" , &func);
        }else if(func == 'B'){
            copyMatrix(matrix , copied);
            takeShortestPath(copied);
            scanf("%d %d", &i,&j);
            int res = isTherePath(matrix , i , j);
            if(res == 0){
                printf("False");
            }else{
                printf("True");
            }
            scanf("%c" , &func);
        }else if(func == 'C'){
            copyMatrix(matrix , copied);
            takeShortestPath(copied);
            scanf("%d %d", &i,&j);
            printf("%d" ,shortestPath(matrix , i , j));
            scanf("%c" , &func);
        }
    }
    return 0;
}