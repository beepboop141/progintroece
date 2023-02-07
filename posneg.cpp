#include <iostream>  
using namespace std;  
  
struct node   
{  
    int data;   
    node *next;   
};  
  
struct queue {  
    node *front;  
    node *rear;  
    long int size;   
};  
  
queue* create() {  
    queue* q = new queue;   
    q->front = NULL;  
    q->rear = NULL;   
    q->size = 0;   
    return q;   
};  
  
bool empty(queue* q)  
{  
    if (q->front == NULL && q->rear == NULL) return true;   
    else return false;   
};  
  
void enqueue (queue* q, int x)  
{  
    node *p = new node();   
    p->data = x;   
    p->next = NULL;   
  
    if (q->front == NULL)   
    {  
        q->front = p;   
        q->rear = p;   
    } else {  
        q->rear->next = p;   
        q->rear = p;  
    }  
    q->size++;  
};  
  
void dequeue (queue* q)  
{  
    if (empty(q) == false)  
    {  
        if (q->front == q->rear)  
        {  
            delete q->front;  
            q->front = q->rear = NULL;  
            q->size--;  
        } else {  
            node *p = q->front;   
            q->front = q->front->next;   
            delete p;  
            q->size--;  
        }  
    }   
};  
  
int peek(queue* q)  
{  
    if (empty(q) == false)  
    {  
        return q->front->data;  
    }   
};  
  
int main ()  
{  
    long int nums, count = 0, foo= 0;  
    queue* pos= create();  
    queue* neg = create();   
    while((scanf("%d", &nums)) == 1)  
    {  
        if (nums > 0)  
        {  
            enqueue(pos, nums);  
            count++;   
        }  
        else if (nums < 0)  
            enqueue(neg, nums);  
    }  
  
    while (true) {  
        if (!empty(pos))  
        {  
            if (abs(peek(pos)) == abs(peek(neg))) foo++;  
            dequeue(pos);  
            dequeue(neg);  
        } else break;  
    }  
      
    if ((pos->size == neg->size) && foo == count)  
            cout << "yes" << endl;  
    else   
        cout << "no" << endl;  
  
    return 0;  
}  