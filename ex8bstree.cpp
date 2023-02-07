#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left; 
    node* right; 
};

class bstree { 
    
    public:         
    node* root;


       bstree() {root = nullptr;} ;       // constructor
       
       int height(node *root)
        {
        if (root == nullptr) return 0; 
        else {
            int Lheight = height(root->left);
            int Rheight = height(root->right);
            return max(Lheight, Rheight) + 1;
        }
        }


       void insert(int x)
            {
            node *p = new node;
            p->data = x; 
            p->left = p->right = nullptr;

            if (root == nullptr) {
                root = p;
                return;
            }

            node *current = root; 
            while (true) {
                if (x < current->data) {
                if (current->left == nullptr) {
                    current->left = p;
                    return;
                }
                current = current->left;
                } else {
                if (current->right == nullptr) {
                    current->right = p;
                    return;
                }
                current = current->right;
                }
            }
            }

       int search(int x)
       {
            node *current = root;
            if (root == NULL || root->data == x) return 1; 
            int height = 0; 
            while(current != NULL) {
                height++;
                if (x < current->data) current = current->left;
                else if (x > current->data) current = current->right;
                else return height;
            }
            return 0; 
       }

       int min() {
        node* current = root; 
        while (current->left != NULL)
        {
            current = current->left;
        }
        return current->data;
       }
       
       int maximum() {
        node* current = root; 
        while (current->right != NULL) current = current->right;
        return current->data;
       }

       void inorder(node* root) {
        if (root == nullptr) return;
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
       }

       void preorder(node* root) {
        if (root == nullptr) return;
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
       }

       void postorder(node* root) {
        if (root == nullptr) return;
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
       }
};

int main() 
{
    bstree b; 
    int N, M, W;
    vector <int> res; // vector of results
    cin >> N;
    for (int i = 0; i< N; i++)
    {
        cin >> W;
        b.insert(W);
    }
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M;
        res.push_back(b.search(M));
    }

    cout << b.height(b.root) << endl;
    cout << b.min() << " " << b.maximum() << endl;
    for (int i = 0; i < res.size()-1; i++) cout << res[i] << " ";
    for (int i = res.size()-1; i < res.size(); i++) cout << res[i] << endl;
    b.inorder(b.root);
    cout << "end" << endl;
    b.preorder(b.root);
    cout << "end" << endl;
    b.postorder(b.root);
    cout << "end" << endl;

    return 0;
}
