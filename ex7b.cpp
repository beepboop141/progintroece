#include "pzhelp.h"

PROGRAM {
    int N = READ_INT();
    int num = 1;
    int factorial = 1; 
    if (N > 0 && N < 2000000000)
    {
        while (factorial < N)
        {
            num++;
            factorial *= num;
        }
        if (factorial != N){
            factorial /= num;
            num--; 
            WRITELN(num);
        } else {
            WRITELN(num);
        }

    } else {
        return 0; 
    }
}