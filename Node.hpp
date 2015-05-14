template <class T>
class Node
{
private:
  T data;
  Node<T>* next;
  Node<T>* prev;

public:
  Node();
  void setNext(Node<T>* x);
  void setPrevious(Node<T>* x);
  void setData(T x);
  Node<T>* getNext();
  Node<T>* getPrevious();
  T getData();
  
};

template <class T>
Node<T>::Node()
{}


template <class T>
void Node<T>::setNext(Node<T>* x)
{
  next = x;
}

template <class T>
void Node<T>::setPrevious(Node<T>* x)
{
  prev = x;
}

template <class T>
void Node<T>::setData(T x)
{
  data = x;
}

template <class T>
Node<T>* Node<T>::getNext()
{
  return next;
}

template <class T>
Node<T>* Node<T>::getPrevious()
{
  return prev;
}

template <class T>
T Node<T>::getData()
{
  return data;
}
