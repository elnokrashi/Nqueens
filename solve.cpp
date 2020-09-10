#include "isSafe.h"

bool solveNQUtil(int board[N][N], int col) 
{
1    if (col >= N) 
        return true; 


    for (int i = 0; i < N; i++) { 
       
        if (isSafe(board, i, col)) { 
          
            board[i][col] = 1; 
   
          
            if (solveNQUtil(board, col + 1)) 
                return true; 
 
 
            board[i][col] = 0; 
        } 
    } 
   
    
    return false; 
} 
