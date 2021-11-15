#include <stdio.h>
#define false 0
#define true  1
#define noPath -1

// task 1
void fillMatrixFromInput(int mat[10][10]){
    int currPlace;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &currPlace);
            mat[i][j] = currPlace;
        }
    }
}

void copyMatrix(int mat[10][10] , int copied[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            copied[i][j] = mat[i][j];
        }
    }
}

void takeShortestPath(int minDestination[10][10]){
    for(int k = 0; k < 10; k++){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if (minDestination[i][k] == 0 || minDestination[k][j] == 0){
                    continue;
                }
                if(minDestination[i][j] > minDestination[i][k] + minDestination[k][j]){
                    minDestination[i][j] = minDestination[i][k] + minDestination[k][j];
                }
            }
        }
    }
}

// task 2
int isTherePath(int mat[10][10], int i, int j){
    if(mat[i][j] == false){
        return false;
    }
    return true;
}
// task 3
int shortestPath(int mat[10][10],int i, int j){
    if(mat[i][j] == false){
        return noPath;
    }
    return mat[i][j];
}