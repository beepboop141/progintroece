#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line, word, leftover_word, output; 
    
    FILE *f; 
    f = fopen("a.txt", "rt");


    while (!feof(f))
    {
        fscanf(f, "%20s", word);
        line += word;
        if (line.length() > 60)
        {
            leftover_word = word;
            for (int i = 0; i < word.length(); i++) line.pop_back(); 
            for (int i = line.length(); i < 60; i++)
                line += " "; 
        } 
        else if (line.length() == 60)
        {
            output += line; 
            output.append("/n");
            line = "";
            line += leftover_word; 
        }
    }

    printf("%s" , output); 
    return 0;
}