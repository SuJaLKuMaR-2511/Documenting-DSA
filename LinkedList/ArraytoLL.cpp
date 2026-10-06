#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = nullptr;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

void traverseLL(Node* head){
    Node* temp = head;

    while(temp){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null";
}

int main(){
    vector<int> arr = {1,3,5,7,9};

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    traverseLL(head);

    return 0;
}
