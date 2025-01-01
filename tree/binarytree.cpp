#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
  int data;
  Node *left;
  Node *right;

  Node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

Node *buildTree(Node *root)
{
  // cout << "enter data: " << endl;
  int data;
  cin >> data;
  root = new Node(data);

  if (data == -1)
    return NULL;

  // cout << "enter data for inserting in left of " << data << endl;
  root->left = buildTree(root->left);
  // cout << "enter data for inserting in right of " << data << endl;
  root->right = buildTree(root->right);

  return root;
}
// DFS
void levelOrderTraversal(Node *root)
{
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    if (temp == NULL)
    {
      // purana level complete traverse ho chuka hai
      cout << endl;
      if (!q.empty())
      {
        // queue still has some child ndoes
        q.push(NULL);
      }
    }
    else
    {
      cout << temp->data << " ";
      if (temp->left)
      {
        q.push(temp->left);
      }

      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}
// BFS
void inorderTraversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  inorderTraversal(root->left);
  cout << root->data << " ";
  inorderTraversal(root->right);
}
// BFS
void preorderTraveral(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preorderTraveral(root->left);
  preorderTraveral(root->right);
}
// BFS
void postorderTraversal(Node *root)
{
  if (root == NULL)
  {
    return;
  }
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  cout << root->data << " ";
}

void buildFromLevelOrder(Node *&root)
{
  queue<Node *> q;

  cout << "Enter data for root" << endl;
  int data;
  cin >> data;
  root = new Node(data);

  q.push(root);

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    cout << "Enter left node for: " << temp->data << endl;
    int leftData;
    cin >> leftData;

    if (leftData != -1)
    {
      temp->left = new Node(leftData);
      q.push(temp->left);
    }

    cout << "Enter right node for: " << temp->data << endl;
    int rightData;
    cin >> rightData;

    if (rightData != -1)
    {
      temp->right = new Node(rightData);
      q.push(temp->right);
    }
  }
}

int main()
{

  Node *root = NULL;

  cout << "Enter tree: " << endl;
  root = buildTree(root);
  // 1 3 4 -1 -1 7 -1 -1 5 17 -1 -1 16 -1 -1

  // levelOrderTraversal(root);

  inorderTraversal(root);
  cout << endl;
  preorderTraveral(root);
  cout << endl;
  postorderTraversal(root);
  cout << endl;

  return 0;
}