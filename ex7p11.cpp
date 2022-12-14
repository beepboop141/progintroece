#include "pzhelp.h"
#include <iostream>

PROGRAM {
    int n, m, a, b, count; 
    count = 0; 

    cin >> n >> m;
    a = n % 2;
    b = m % 2; 

    if (b == 0) count++; 
    if (a == 0) count++;

    cout << count << endl;

}