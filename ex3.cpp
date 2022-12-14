#include "pzhelp.h"

FUNC int gcd (int x, int y)
{
    x = abs(x); y = abs(y);
    while (x > 0 && y > 0)
    {
        if (x > y ) x = x % y; else y = y % x;
    }
    return x + y; 
}

PROGRAM {
    int N, num1, num2, den1, den2;
    char operation; 
    int a, b, c;

    N = READ_INT(); SKIP_LINE();
    
    if (N > 0)
    {
        for (int i = 0; i < N; i++)
        {
            operation = getchar();
            num1 = READ_INT(); den1 = READ_INT();
            num2 = READ_INT(); den2 = READ_INT();
            SKIP_LINE();

            switch (operation)
        {
            case '+': a = (num1 * den2) + (num2 * den1); b = (den1*den2); break;
            case '-': a = (num1 * den2) - (num2 * den1); b = (den1*den2); break;
            case '*': a = (num1 * num2); b = (den1 * den2); break;
            case '/': a = (num1 * den2); b = (num2 * den1); break;
            default: break;
        }
        c = a/b; 
        float w = a*b; 
        if (w<0)
        {
            WRITE("-");
            WRITELN(abs(c), (abs(a) - abs(c)*abs(b)/gcd(a,b)), abs(b)/gcd(a,b));
        }
        else    WRITELN(abs(c), (abs(a) - abs(c)*abs(b)/gcd(a,b)), abs(b)/gcd(a,b));

        if ( den1 == 0 || den2 == 0 )   WRITELN("error");

        if (operation == '/' && num2 == 0)   WRITELN("error");

        }
    }
}