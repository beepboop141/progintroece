#include <iostream>
#include <string>
using namespace std; 

int main(void)
{
    string line, leftover_text, output;
    char input[20];

    while((scanf("%s ", input)) != EOF)
    {
        scanf("%s ", input);
        string word = input;
        line = line + word + " "; 

        if (line.length() > 60)
        {
            line.pop_back(); // Remove the last space
            if (line.length() != 60) 
            {
                leftover_text = word;
                for (int i = 0; i <= word.length(); i++) line.pop_back(); 
                for (int i = (line.length() - 1); i < 60; i++) line += " ";
            }
        } 
        if (line.length() == 60)
        {
            output += line; 
            output += '\n';
            line = "";
            line = leftover_text; 
        } 
        else if (line.length() < 60 && (scanf("%s ", input)) == 0)
        {
            output = line;
        }
    }
    cout >> output >> endl;

    return 0;
}