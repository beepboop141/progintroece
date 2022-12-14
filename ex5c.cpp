#include "pzhelp.h"
#include <iostream>
using namespace std; 


bool checking_input(string s) {
    int count = 0; 
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i+1; j <s.length(); j++)
        {
            if (s[i] == s[j] && s[i] != '\n') count++;
        }
        if (s[i] < 'a' || s[i] > 'z') count++;
    }
    if (count > 0 || s.length() != 26 ) return false;
    return true; 
}

int main() {
    string s;
    char text, d; 
    cin >> s;    
    SKIP_LINE();
    d = getchar(); 
    SKIP_LINE();

    if (d == 'e') {
        while ((text = getchar()) != EOF)
        {
            if (checking_input(s) == true) {
                if (islower(text))
                    putchar(s[text - 'a']);
                else if (isupper(text))
                    putchar(s[text - 'A'] - 32);
                else
                    putchar(text);
            } else {
                cout << "error" << endl;
                break;
            }
        }
    } else if (d == 'd') {
        while ((text = getchar()) != EOF)
        {
            if (checking_input(s) == true) {
                if (islower(text)) {
                    for (int i = 0; i < 26; i++) {
                        if (s[i] == text)
                        putchar(i + 'a'); 
                    }
                } else if (isupper(text)) {
                    text += 32;
                    for (int i = 0; i < 26; i++) {
                        if (s[i] == text)
                        putchar(i + 'A'); 
                    } 
                } else {
                    putchar(text);
                }
            } else {
                cout << "error" << endl;
                break;
            }
        }
    }
    return 0; 
}


