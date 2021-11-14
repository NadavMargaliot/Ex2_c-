#include <stdio.h>

void fillMatrix(int matrix[10][10]){
    int currPlace;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &currPlace);
            matrix[i][j] = currPlace;
        }
    }
}