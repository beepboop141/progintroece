#include "pzhelp.h"

PROGRAM {  
    int N, M, i, j;   
    int matrix[100][100], columns[100], rows[100];  
    int maxcolumn, minrow;   
  
    N = READ_INT();  
    M = READ_INT();   
    for ( i = 0; i < N; i++)  
    {  
        for ( j = 0; j < M; j++)  
        {  
            matrix[i][j] = READ_INT();   
        }  
    }  
  
    for ( i = 0; i < M; i++) {  
        maxcolumn = matrix[0][i];  
       for ( j = 1; j < N; j++) {  
        if (matrix[j][i] > maxcolumn)  
        maxcolumn = matrix[j][i];  
    }  
       columns[i] = maxcolumn;  
    }  
  
    for (i= 0; i < N; i++)  
    {  
        minrow = matrix[i][0];  
        for (j = 1; j < M; j++)  
        {  
            if (matrix[i][j] < minrow)  
            minrow = matrix[i][j];  
        }  
        rows[i] = minrow;  
    }  
      
    int max = rows[0];  
    for(int i = 0; i < N; i++){  
        if(rows[i] > max){  
            max = rows[i];  
        }  
    }  
  
    int min = columns[0];  
    for (i = 0; i < M; i++){  
     if (columns[i] < min) {  
        min = columns[i];  
          
    }  
  
    }  
    WRITELN(min);  
    WRITELN(max);  
}  