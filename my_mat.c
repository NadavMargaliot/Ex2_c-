#include <stdio.h>
#include "my_mat.h"
#define false 0
#define true  1
#define noPath -1
#define size 10

// task 1
void fillMatrixFromInput(int mat[size][size]){
    int currPlace;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            scanf("%d", &currPlace);
            mat[i][j] = currPlace;
        }
    }
}

void copyMatrix(int mat[size][size] , int copied[size][size]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            copied[i][j] = mat[i][j];
        }
    }
}

void takeShortestPath(int mat[size][size]){
    for(int k = 0; k < size; k++){
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if (mat[i][k] == 0 || mat[k][j] == 0){
                    continue;
                }
                if(mat[i][j] == 0 && i != j){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
                else if(mat[i][j] > mat[i][k] + mat[k][j]){
                    mat[i][j] = mat[i][k] + mat[k][j];
                }
            }
        }
    }
}

int min(int num1, int num2) 
{
    if(num1>num2){
        return num2;
    }
    else{
        return num1;
    }
}

// task 2
int isTherePath(int mat[size][size]){
    int i , j;
    scanf("%d" , "%d" , i , j);
    if(mat[i][j] == false){
        return false;
    }
    return true;
}
// task 3
int shortestPath(int mat[size][size]){
    int i , j;
    scanf("%d" , "%d" , i , j);
    if(mat[i][j] == false){
        return noPath;
    }
    return mat[i][j];
}