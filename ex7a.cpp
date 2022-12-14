#include "pzhelp.h"

PROGRAM {
    int N = READ_INT();
    if (N >= 10 && N < 100000000) 
    {
        N /= 10;
        N %= 10;
        WRITELN(N);
    } else {
        return 0; 
    }
}