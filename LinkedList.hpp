#include "Node.hpp"

template <class T>
class LinkedList
{
private:
  int size;
  Node<T>* head;
  Node<T>* rear;
  Node<T>* current;

public:
  LinkedList();
  void insert(T x);
  void remove(T x);
  void startIteration();
  bool hasNext();
  T getNext()
  {
    T data = current -> getData();
    current = current -> getNext();
  
    return data;
  }
};

template <class T>
LinkedList<T>::LinkedList()
{
  size = 0;
  head = NULL;
  rear = NULL;
  current = NULL;
}

template <class T>
void LinkedList<T>::insert(T x)
{
  Node<T>* temp = new Node<T>();
    
  if(0 == size) {
    ++size;
    head = new Node<T>();
    head -> setData(x);
    head -> setNext(NULL);
    head -> setPrevious(NULL);
    rear = head;
    current = head;
  } else {
    ++size;
    rear -> setNext(temp);
    temp -> setPrevious(rear);
    temp -> setData(x);
    temp -> setNext(NULL);
    rear = temp;
  }
}

template <class T>
void LinkedList<T>::remove(T x)
{
  Node<T> itr = head;
  Node<T> temp;
  
  while (x != itr.getData()) {
    itr = itr.getNext();
    
    if (x == itr.getData()) {
      temp = itr.getPrevious();
      temp.setNext(itr.getNext());
      
      temp = itr.getNext();
      temp.setPrevious(itr.getPrevious());
      itr = NULL;
    }
  }
}

template <class T>
void LinkedList<T>::startIteration()
{
  current = head;
}

template <class T>
bool LinkedList<T>::hasNext()
{
  Node<T>* next = current;
  
  if (next == NULL) {
    return false;
  } else {
    return true;
  }
  
}

