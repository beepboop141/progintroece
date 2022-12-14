#include "pzhelp.h"
#include <iostream>
#include <cstdio>
using namespace std;



int main(int argc, char *argv[]) 
{
    char word[20]; 
    char line[61];
    string input;
    string output;
    char ch; 
    int prev_was_space;
    int ccnt = 0; // char count
    int lcnt = 0; // line count

   

  //while (!EOF)

  /*
  1. check if its a word
  2. if yes put it into line
  3. if there are two or more spaces remove them 
  4. if when the new word is added >60 is reached put word in new line
  5. fill leftover area with spaces to the right 
  start counting charaxctersagain 
  repeat until eof 
*/
/*
    do
    {
        scanf("%20s", &word); 
        printf("%s ", word);
        ccnt = strlen(word);
        ccnt++;
    } while (word != "/n");

    printf("%d", ccnt);


    for (int i = 1; i < argc; i++)
    {
        FILE *f;
        if ((f = fopen(argv[i], "rt")) == NULL) return 1;

        while ((char ch = fgetc(f)) != EOF)
        {
            if (is_word(c) == false) break;
            else
            {

            }
        }

          while (fscanf(f, "%20s", word) == 1)
        {
            fputs(word, stdout);
            putchar(' ');

        }

        
      while((fscanf(f, "%20s", word)) == 1)
        {
            ccnt = strlen(word); 
            printf("%s ", word);
           //if (total == 60) printf("/n");
        }

        printf("%d \n", ccnt);
        */

        // put string until 60 char 
        // new line
        // repeat till eof 
        // if it doesnt fit add spaces evenly until its 60
        // sth with % ig
        // αν ένα διάκενο είναι μεγαλύτερο από κάποιο άλλο, τότε πρέπει να βρίσκεται δεξιότερα.
        // 


       /* while ((ch = fgetc(f)) != EOF)
        {
            count = 0; 
            
           if (isspace(ch)) prev_was_space = 1;
           else 
           {
            if (prev_was_space) wcnt++;
            prev_was_space = 0;
           } 
        }
        
        fclose(f);
    }
            cout << text;
*/
    return 0; 
}