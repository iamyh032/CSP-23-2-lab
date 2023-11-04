#include <iostream>
#include "magic_square.h"

void magic_square(int n, int **matrix){
        int row = 0;
        int col = (n - 1) * (0.5);
        int count = 1;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                matrix[row][col] = count;
                count += 1;
                row -= 1;
                col += 1;
                if (row < 0){
                    row += n;
                }
                if (col >= n){
                    col -= n;
                }
            }
            col -=1;
            row += 2;
            if(row>=n){
                row -= n;
            }
            if(col<0){
                col += n;
            }
        }
}