#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename T>
class Node {
public:
    T data;
    Node<T>* next;

    Node(const T& newData);
};

template<typename T>
class LinkedList {
private:
    Node<T>* head;
    int size;

public:
    LinkedList();
    ~LinkedList();

    void insert(const T& newData);
    void remove(const T& dataToRemove);
    void clear();
    int getSize() const;
};

#endif // LINKEDLIST_H
