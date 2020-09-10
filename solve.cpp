#include "solve.h"

bool solve (int n, int row) {
    if (n == row) {
        print(n);
        return true;
    }
    //variable res is use for possible backtracking 
    bool res = false;
    for (int i = 0;i <=n-1;i++) {
        if (isSafe(i, row, n)) {
            grid[row][i] = 1;
            //recursive call solve(n, row+1) for next queen (row+1)
            res = solve(n, row+1) || res;//if res ==false then backtracking will occur 
            //by assigning the grid[row][i] =grid[row][i] = 0;
        }
    }
    return res;
}
