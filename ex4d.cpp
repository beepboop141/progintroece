#include "pzhelp.h"
#include <iostream>
#include <stdio.h>


PROGRAM {
    int N, M, i, j;   
    double matrix[100][100], avgcolumn[100], avgrow[100];
    double sumcolumn = 0; 
    double sumrow = 0;

    double resultA, resultB, foo, bar; 

  
    N = READ_INT();  
    M = READ_INT();   
    for ( i = 0; i < N; i++)  
    {  
        for ( j = 0; j < M; j++)  
        {  
            cin >> matrix[i][j];   
        }  
    } 

    for (i = 0; i < N; i++)
    {
        sumrow = 0; 
        for (j = 0; j < M; j++)
        sumrow += matrix[i][j];
        avgrow[i] = (sumrow/M);
        foo += avgrow[i];
        resultA = foo/N; 
    }

    for (j = 0; j < M; j++)
    {
        sumcolumn = 0; 
        for (i = 0; i < N; i++)
        sumcolumn += matrix[i][j];
        avgcolumn[j] = (sumcolumn/N);
        bar += avgcolumn[j];
        resultB = bar/M;  
    }
    printf("%.3lf\n", resultA);
    printf("%.3lf\n", resultB);
}