#include <iostream>
using namespace std;

class CircularQueue
{
private:
  int *queue;   // Dynamic array for the queue
  int front;    // Index of the front element
  int rear;     // Index of the rear element
  int size;     // Maximum size of the queue
  int capacity; // Total capacity of the queue

public:
  CircularQueue(int capacity)
  {
    this->capacity = capacity;
    queue = new int[capacity];
    front = -1;
    rear = -1;
    size = 0;
  }

  ~CircularQueue()
  {
    delete[] queue;
  }

  bool isEmpty()
  {
    return size == 0;
  }

  bool isFull()
  {
    return size == capacity;
  }

  void enqueue(int value)
  {
    if (isFull())
    {
      cout << "Queue is full! Cannot enqueue " << value << endl;
      return;
    }

    // First element case
    if (front == -1)
      front = 0;

    rear = (rear + 1) % capacity; // Circular increment
    queue[rear] = value;
    size++;
    cout << "Enqueued: " << value << endl;
  }

  void dequeue()
  {
    if (isEmpty())
    {
      cout << "Queue is empty! Cannot dequeue" << endl;
      return;
    }

    cout << "Dequeued: " << queue[front] << endl;
    front = (front + 1) % capacity; // Circular increment
    size--;

    // Reset pointers if the queue becomes empty
    if (size == 0)
    {
      front = -1;
      rear = -1;
    }
  }

  void peek()
  {
    if (isEmpty())
    {
      cout << "Queue is empty! No front element" << endl;
    }
    else
    {
      cout << "Front element: " << queue[front] << endl;
    }
  }

  void display()
  {
    if (isEmpty())
    {
      cout << "Queue is empty!" << endl;
      return;
    }

    cout << "Queue elements: ";
    for (int i = 0; i < size; i++)
    {
      int index = (front + i) % capacity; // Circular index
      cout << queue[index] << " ";
    }
    cout << endl;
  }
};

int main()
{
  CircularQueue q(5);

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);
  q.enqueue(50);

  q.display();

  q.dequeue();
  q.dequeue();

  q.display();

  q.enqueue(60);
  q.enqueue(70);

  q.display();

  q.peek();

  return 0;
}
