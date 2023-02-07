#include<bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    vector<string> line;
    int startLine = 0, totalLength = -1, wordCnt = 0;
  
    while (cin >> word)
    {
        if ( (1 + word.size() + totalLength) > 60)
        {
            int spacesNeeded = 60 - totalLength;
            int spacesEach = spacesNeeded / (wordCnt-1) + 1;
            int spacesExtra = spacesNeeded % (wordCnt-1) + 1;
           
            for (int i = startLine; i < wordCnt + startLine; i++)
            {
                cout << line[i];
                
                if (i == wordCnt + startLine - 1) break;
                
                if (i-startLine < wordCnt-spacesExtra)
                {
                    for (int j=0; j < spacesEach; j++) cout << " ";
                } else {
                    for (int j=0; j < spacesEach + 1; j++) cout << " ";
                }
            }

            cout << endl;
            startLine = line.size();
            wordCnt = 0;
            totalLength = -1;
        }

        line.push_back(word);
        wordCnt++;
        totalLength+=word.size()+1;
    }
    

    for (int i = startLine; i < line.size()-1; i++)
    {
        cout << line[i] << " ";
    }

    for (int i = line.size()-1; i < line.size(); i++)
    {
        cout << line[i] << endl;
    }
}

