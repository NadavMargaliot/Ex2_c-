#include <stdio.h>
#include "my_mat.h"
#define False 0
#define True  1
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


// task 2
int isTherePath(int mat[size][size]){
    int i , j;
    scanf("%d" , &i);
    scanf("%d" , &j);
    if(mat[i][j] == False){
        return False;
    }
    return True;
}
// task 3
int shortestPath(int mat[size][size]){
    int i , j;
    scanf("%d" , &i);
    scanf("%d" , &j);
    if(mat[i][j] == False){
        return noPath;
    }
    return mat[i][j];
}