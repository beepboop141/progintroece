/* Should you do this? no 
did i do this because i was lazy and the previous code worked? 
yes. 
you should probably try to implement a better approach with pointers instead of creating and deleting the nodes but i was lazy 
and because it was the first semester aka parties </3
*/ 
#include <iostream>  
using namespace std;   
  
struct node {  
    int data;  
    node *next;   
};  
  
class list {  
 private:   
        node* head;  
        int size;  
 public:  
   list() : head(NULL), size(0) {}; // initializing list  
     
   bool empty() {  
    if (size == 0) return true;   
    else return false;  
   }  
  
   void add(int x, int k) { // adding new node  
    node *p = new node;   
    p->data = x;   
    p->next = NULL;  
    size++;  // incrementing size variable  
    if (k == 1 && head == NULL){  
        head = p;  
    } else if (k == 1)  
    {  
        p->next = head;   
        head = p;   
    } else {  
        node* current = head;   
        for (int i = 1; i < k-1; i++) {  
            current = current->next;  
        }   
        if (current != NULL) {  
            p->next = current->next;  
            current->next = p;  
        }  
    }   
    }  
      
    int get(int k) { // returns list element  
        node* current = head;   
        for (int i = 1; i < k ; i++) {  
            current = current->next;   
        }  
        return current->data;     
    };  
  
    void remove(int k) { // removes list element  
        node *p = head, *p2 = NULL;   
        size--;  
        if (k == 1)  
        {  
            head = p->next;  
            delete p;  
        }  
        else {  
            for (int i =1; i <k; i++)  
            {  
                p2 = p;   
                p = p->next;   
            }  
            if (p != NULL && p->next != NULL)  
            {   
                p2->next= p->next;  
                delete p;   
            }  
        }  
    }  
  
    int megethos() { // size function  
        return size;   
    }  
  
    int searchMF (int x)  
    {  
        node *p = head;   
        for (int i = 1; i < size +1; i++)  
        {  
            if (p->data == x)   
            {  
                return i;   
            }   
            p = p->next;  
        }   
        return 0;   
    };  
  
};  
  
int main(void)  
{  
    list l;   
    int N, K, X, M, s;   
    int count = 0;   
  
    cin >> N;  
    for (int i = 0; i < N; i++)  
    {  
        cin >> K;  
        cin >> X;  
        l.add(X,K);  
    }  
    cin >> M;  
  
    for (int i = 0; i <M; i++)  
    {  
        cin >> X;  
        s = l.searchMF(X);  
        count+= s;  
        if (s>0) {
            l.remove(s);  
            l.add(X, 1);  
        }
    }  
  
    cout << count << endl;  
  
    return 0;  
}
