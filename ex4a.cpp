#include "pzhelp.h"
#include <iostream>
#include <cmath>

int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

PROC function (int power)
{
    for (int i = 2; i < 10; i++)
    array[i] = pow(array[i], power);
}


PROGRAM {
    int N;
    N = READ_INT();
    function(N);
    for ( int a = 0; a < 10; a++)
        for (int b = 0; b < 10; b++)
            for (int c = 0; c <10; c++)
                for (int d = 0; d < 10; d++)
                    for (int e = 0; e < 10; e++)
                        for (int f = 0; f < 10; f++)
                            for (int g = 0; g <10; g++)
                                for (int h = 0; h < 10; h++) {
                                    int number = (a * pow (10, 7)) + (b * pow(10, 6)) + (c* pow(10,5)) +
                                    (d * pow(10,4)) + (e * pow(10, 3)) + (f * pow(10, 2)) + (g * 10) + h;
                                    
                                    int result = array[a] + array[b] + array[c] + array[d] + array[e] + array[f] + array[g] + array[h];

                                    
                                        if (number == result){ 
                                            WRITELN(number);
                                        } else {
                                            continue; 
                                        }
                                }

}