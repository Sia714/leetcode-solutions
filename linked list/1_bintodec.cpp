#include <iostream>
using namespace std;


struct node
{ 
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printData(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
node *insert_beg(node *head, int x)
{ 
    node *temp = new node(x);
    temp->next = head;
    return temp;
}
node *insert_end(node *head, int x)
{
    if (head == NULL)
    {
        node *temp = new node(x);
        return temp;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new node(x);
    return head;
}
void midnode(node *head)
{
    node *c = head;
    int count = 0;
    while (c != NULL)
    {
        count++;
        c = c->next;
    }
    c = head;
    for (int i = 0; i < count / 2; i++)
    {
        c = c->next;
    }
    cout << c->data<<endl;
}
void midnodesing(node *head)
{ 
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << slow->data<<endl;
}
int main()
{
    node *head=NULL;
    head=insert_beg(head,10);
    head=insert_end(head,20);
    head=insert_end(head,30);
    head=insert_end(head,40);
    head=insert_end(head,50);
    head=insert_end(head,60);

    midnode(head);
    midnodesing(head);
}
