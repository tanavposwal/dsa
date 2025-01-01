#include <iostream>
using namespace std;

class Queue
{
private:
  int arr[100];
  int f = 0;
  int b = 0;

public:
  void push(int d)
  {
    arr[b] = d;
    b++;
  }
  void pop()
  {
    f++;
    if (f >= b)
    {
      f = 0;
      b = 0;
    }
  }
  int size()
  {
    return b - f;
  }
  int front()
  {
    return arr[f];
  }
  int back()
  {
    return arr[b - 1];
  }
  bool isEmpty()
  {
    if (f == b)
      return true;
    return false;
  }
};

int main()
{

  Queue q;

  q.push(2);
  q.push(23);
  q.push(45);

  cout << q.front() << " " << q.back() << endl;
  cout << q.size() << " " << q.isEmpty() << endl;

  return 0;
}