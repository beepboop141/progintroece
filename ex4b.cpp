#include "pzhelp.h"
#include <bits/stdc++.h>


bool palindrome(string S)
{
    for (int i =0; i < S.length()/2; i++) 
    {
        if (S[i] != S[S.length() - i- 1])
        {
            return false; 
        }
    }
    return true; 
}

PROGRAM {
    int N; 
    float percentage = 0.0; 
    N = READ_INT();
    SKIP_LINE();

    for (int i = 0; i < N; i++)
    {
        string c;
        getline(cin, c); 
        if (c.length() > 20){
            WRITELN("error"); 
            continue; 
        } else if (c.length() == 0){
            WRITELN("empty"); 
            continue; 
        } else { 

            if (palindrome(c) == true)
            {
                percentage += 1.0;
                WRITELN("yes");
            } else if (palindrome(c) == false) 
            {
                WRITELN("no");
            }

        }
    } 
    percentage = percentage / N * 100; 
    WRITELN(FORM(percentage, 0, 3));
}