#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr = {30, 78, 24, 13};

    Node* x = new Node(arr[2], nullptr);
    Node* y = new Node(arr[3], x);
    
    cout << y->data;
    cout << endl;
    cout << y->next;
    cout << endl;
    cout << x->data;
    cout << endl;
    cout << x->next;
    cout << endl;

    return 0;
}