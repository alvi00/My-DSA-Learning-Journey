#include <bits/stdc++.h>
using namespace std;

struct Node
{

public:
    int data;
    Node *next;

public:
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *alvi(vector<int> &arr)
{
    Node *head = new Node(arr[0], nullptr);
    Node *mover = head;
    for (size_t i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node *delete_head(Node *head)
{

    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *detele_tail(Node *head)
{
    Node *temp = head;
    if (temp->next == nullptr || temp == nullptr)
    {
        return nullptr;
    }
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *delete_k(Node *head, int k)
{
    if (head == nullptr)
    {
        return head;
    }

    if (k == 1)
    {
        Node *temp = head;
        head = temp->next;
        delete (temp);
        return head;
    }
    int count = 1;
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {

        if (count == k)
        {
            prev->next = prev->next->next;
            delete (temp);
            break;
        }
        prev = temp;
        temp = temp->next;
        count++;
    }
    return head;
}

Node *delete_el(Node *head,int el){
    if(head==nullptr){
        return head;
    }

    Node *temp=head;
    if(temp->data==el){
        head=head->next;
        delete(temp);
        return head;
    }
    Node *prev=nullptr;
    while(temp!=nullptr){
        if(temp->data==el){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = alvi(arr);
    cout << "The main Link List ";
    print(head);
    cout << endl;
    head = delete_head(head);
    cout << "After deleting head ";
    print(head);
    cout << endl;
    head = detele_tail(head);
    cout << "After deleting tail ";
    print(head);
    cout << endl;
    int k = 2;
    head = delete_k(head, k);
    cout << "After deleting Kth term ";
    print(head);
    cout<<endl;
    int el=4;
    head = delete_el(head, el);
    cout << "After deleting the element ";
    print(head);
}