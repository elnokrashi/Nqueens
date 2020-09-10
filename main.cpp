#include "print.h"
#include "solve.h"
#include "isSafe.h"


int main() 
{ 
    
     int board[N][N] = { { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 }, 
                        { 0, 0, 0, 0 } }; 
   
    if (solveNQUtil(board, 0) == false) { 
        printf("Solution does not exist"); 
        return 0; 
    } 
   
    printSolution(board); 
    return true; 
    return 0; 
} 