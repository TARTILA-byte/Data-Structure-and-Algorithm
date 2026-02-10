#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root=NULL;

void Printing()
{
    node *curr=root;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void InsertFirst(int val)
{

  node  *temp = new node;
  temp->data=val;
    temp->next = NULL;
    if(root==NULL){
        root=temp;
    }
    else{
        temp->next=root;
        root=temp;
    }
}
void InsertLast(int val)
{

  node*temp=new node();
    temp->data=val;
    temp->next=NULL;
     node *curr=root;
     while(curr->next != NULL){
        curr=curr->next;
    }
    curr->next=temp;
}
void insertByPosition(int pos, int val)
{
    if (pos == 1)
    {
        InsertFirst(val);
        return;
    }

    node *curr = root;
    for (int i = 1; i < pos - 1 && curr != NULL; i++)
        curr = curr->next;

    if (curr == NULL)
        return;

    node *temp = new node();
    temp->data = val;
    temp->next = curr->next;
    curr->next = temp;
}
void insertByValue(int x, int val)
{
    node *curr = root;
    while (curr != NULL && curr->data != x)
        curr = curr->next;

    if (curr == NULL)
        return;

    node *temp = new node();
    temp->data = val;
    temp->next = curr->next;
    curr->next = temp;
}
void DeleteFirst()
{

    if(root == NULL) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    node *temp = root;
    root = root->next;
    delete temp;
}

void DeleteLast()
{
    node *curr=root;
    node *prev=root;
     while(curr->next != NULL){
            prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    delete curr;
}

void deleteByPosition(int pos)
{
    if (root == NULL)
        return;

    if (pos == 1)
    {
        DeleteFirst();
        return;
    }

    node *curr = root;
    for (int i = 1; i < pos - 1 && curr->next != NULL; i++)
        curr = curr->next;

    if (curr->next == NULL)
        return;

    node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
}
void deleteByValue(int val)
{
    if (root == NULL)
        return;

    if (root->data == val)
    {
        DeleteFirst();
        return;
    }

    node *curr = root;
    while (curr->next != NULL && curr->next->data != val)
        curr = curr->next;

    if (curr->next == NULL)
        return;

    node *temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

void searching(int val)
{
    node*curr=root;
    int f=0;
while(curr!=NULL){
        if(curr->data==val){
           f=1;
           cout<<"Found"<<endl;
           break;
        }

    curr=curr->next;

}
if(f==0){
    cout<<"Not found"<<endl;
}
      cout<<endl;

}

void printlast()
{
node *curr = root;
while(curr->next != NULL)
{
curr = curr->next;
}
cout<<curr->data<<" "<<endl;
}
void printPreviousOfLast()
{
node*curr=root;
      node*prev=root;
      while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;

      }
      cout<<prev->data<<endl;
}
void ListSize()
{
    int cnt = 0;
    node *curr = root;
    while (curr != NULL)
    {
        cnt++;
        curr = curr->next;
    }
    cout << cnt << endl;
}

void printRev(node*curr){
if(curr!=NULL){
    printRev(curr->next);
    cout<<curr->data<<" ";
}



}
int main()
{
InsertFirst(200);
InsertFirst(100);
InsertLast(300);
InsertLast(400);
Printing();
insertByPosition(3, 250);
insertByValue(300, 500);
Printing();
deleteByPosition(2);
deleteByValue(500);
Printing();
searching(250);
printlast();
printPreviousOfLast();
ListSize();
printRev(root);
cout << endl;
return 0;
}

