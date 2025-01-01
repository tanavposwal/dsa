#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }

  ~Node()
  {
    int value = this->data;
    if (this->next != NULL)
    {
      delete next;
      next = NULL;
    }

    cout << " Memory is free for " << value << endl;
  }
};

void insertNode(Node *&tail, int element, int d)
{
  if (tail == NULL)
  {
    Node *newNode = new Node(d);
    tail = newNode;
    // head --- tail
    newNode->next = newNode;
  }
  else
  {
    // non-empty list
    // assuming that the element is present in the list

    Node *curr = tail;

    while (curr->data != element)
    {
      curr = curr->next;
    }

    // element found -> curr is representing element wala node
    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}

void print(Node *tail)
{

  Node *temp = tail;

  // empty list
  if (tail == NULL)
  {
    cout << "List is Empty " << endl;
    return;
  }

  do
  {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);

  cout << endl;
}

void deleteNode(Node *&tail, int value)
{

  // empty list
  if (tail == NULL)
  {
    cout << " List is empty, please check again" << endl;
    return;
  }
  else
  {
    // non-empty

    // assuming that "value" is present in the Linked List
    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != value)
    {
      prev = curr;
      curr = curr->next;
    }

    prev->next = curr->next;

    // 1 Node Linked List
    if (curr == prev)
    {
      tail = NULL;
    }

    //>=2 Node linked list
    else if (tail == curr)
    {
      tail = prev;
    }

    curr->next = NULL;
    delete curr;
  }
}

bool isCircularList(Node *head)
{
  // empty list
  if (head == NULL)
  {
    return true;
  }

  Node *temp = head->next;
  while (temp != NULL && temp != head)
  {
    temp = temp->next;
  }

  if (temp == head)
  {
    return true;
  }

  return false;
}

int main()
{

  // both head and tail not required
  cout << "hi";
  return 0;
}