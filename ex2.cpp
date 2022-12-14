#include "pzhelp.h"

PROGRAM {
    // Initializing numerators and denominators 
    int num1, num2, den1, den2;
    num1 = READ_INT();
    den1 = READ_INT();

    WRITELN(num1, den1); // First fraction- unsure
    num2 = READ_INT();
    den2 = READ_INT();
    WRITELN(num2, den2); // Second fraction
    if ( den1 == 0 || den2 == 0 ) 
    {
        WRITELN("Cannot divide by 0");
    }
    else
    {
        WRITELN((num1 * den2) + (num2 * den1), (den1*den2));
    }
}




