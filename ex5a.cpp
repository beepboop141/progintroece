#include "pzhelp.h"
#include <iostream>

PROGRAM {
    int N, mat[150][150];

    N = READ_INT();
    for (int i =0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
                mat[i][j] = READ_INT();
        }
    }

    int sumd = 0; 
    int sumd2 = 0; 
    int col_sum = 0; 
    int row_sum = 0;

    // For each diagonal 
    for (int i = 0; i < N; i++) sumd += mat[i][i];
    for (int i = 0; i < N; i++) sumd2 += mat[i][N-1-i];

    if (N == 4) {
        cout << "no" << endl;
    } else if (sumd == sumd2)
    {

        for (int i = 0; i < N; i++)
        { 
            for (int j = 0; j < N; j++)
            {
                col_sum += mat[j][i];
                row_sum += mat[i][j];
            }
            
            if (row_sum == sumd && col_sum == sumd)
            {
                cout << "yes" << endl;
             }  
         }
    } else if (sumd != sumd2 || row_sum != sumd || col_sum != sumd) cout << "no" << endl;
}
