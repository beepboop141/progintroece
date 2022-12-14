#include "pzhelp.h"
#include <iostream>
using namespace std; 

int partition (int a[], int first, int last) 
{
    int x = a[(first + last) / 2];
    int i = first, j = last; 
    while (true)
    {
        while (a[i] < x) i++;
        while (x < a[j]) j--;
        if (i >= j) break; 
        swap(a[i], a[j]);
        i++; 
        j--;
    }
    return j;
}

void quicksort (int a[], int first, int last)
{
    if (first >= last) return; 
    int i = partition(a, first, last);
    quicksort(a, first, i);   
    quicksort(a, i+1, last); 
}

int main(void)
{
    int N, a[50000], b[50000], min= 0, max = 0; 
    int count = 0; 
    cin >> N; 
    SKIP_LINE();
    for (int i = 0; i < N; i++) cin >> a[i];
    SKIP_LINE(); 
    for (int i = 0; i < N; i++) cin >> b[i]; 
    quicksort(a, 0, N - 1);
    quicksort(b, 0, N - 1); 
    
    for (int i = 0; i < N; i++)
    {
        if (a[i] == b[i]) count++;
        if (a[i] != b[i])
        {
           if (a[i] > b[i] ) max = a[i]; 
           else if (b[i] > a[i]) max = b[i];
        }
    }

    for (int i = N; i--; i > 0)
    {
        if (a[i] != b[i])
        {
           if (a[i] < b[i] ) min = a[i]; 
           else if (b[i] < a[i]) min = b[i];
        }
    }
    if (count == N) cout << "yes" << endl;
    else cout << "no " << min << " " << max << endl;  
    return 0; 
}