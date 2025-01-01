#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }

  // destructure
  ~Node()
  {
    int value = this->data;

    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }

    // log
    cout << " Memory is free for node with data " << value << endl;
  }
};

void insertAtHead(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d)
{
  Node *temp = new Node(d);
  tail->next = temp;
  tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int d)
{

  // insert at Start
  if (pos == 1)
  {
    insertAtHead(head, d);
    return;
  }

  // traverse till p-1th and insert an node

  Node *temp = head;
  int cnt = 1;

  while (cnt < pos - 1)
  {
    temp = temp->next;
    cnt++;
  }

  // inserting at Last Position - Without this tail is not updated
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }

  Node *nodeToInsert = new Node(d);

  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void deleteNode(Node *&head, int pos)
{
  // deleting first - different
  if (pos == 1)
  {
    Node *temp = head;
    head = head->next;

    temp->next = NULL;
    delete temp;
  }
  else
  {
    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;

    // traverse
    while (cnt < pos)
    {
      prev = curr;
      curr = curr->next;
      cnt++;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}

void print(Node *&head)
{

  if (head == NULL)
  {
    cout << "List is empty" << endl;
    return;
  }

  Node *temp = head;
  // traverse from head to tail
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main()
{
  Node *node = new Node(10);

  Node *head = node;
  Node *tail = node;

  insertAtTail(tail, 12);
  insertAtTail(tail, 15);

  insertAtPosition(head, tail, 3, 13);

  print(head);

  cout << "head " << head->data << " tail " << tail->data << endl;

  deleteNode(head, 1);

  print(node);

  return 0;
}