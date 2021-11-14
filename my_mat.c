#include <stdio.h>
#define false 0

void fillMatrix(int mat[10][10]){
    int currPlace;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &currPlace);
            mat[i][j] = currPlace;
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
void isTherePath(int mat[10][10], int i, int j){
    if(mat[i][j] == false){
        printf("False");
    }else{
        printf("True");
    }
}
// task 3
void printShortestPath(int mat[10][10],int i, int j){
    if(mat[i][j] == false){
        printf("-1");
    }else{
        printf("%d" , mat[i][j]);
    }
}