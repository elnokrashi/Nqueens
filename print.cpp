#include "print.h"


void print(int n) {
    for (int i = 0;i <= n-1; i++) {
        for (int j = 0;j <= n-1; j++) {
                cout <<grid[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
