#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

#include <bits/stdc++.h>
using namespace std;
// Max Heap
class MaxHeap {
private:
    std::vector<int> heap;

    void swap(int& a, int& b);
    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(int value);
    void removeMax();
    void print();
    void push_back(int value);
    void pop_back();
};

// Min Heap
class MinHeap {
private:
    std::vector<int> heap;

    void swap(int& a, int& b);
    void heapifyUp(int index);
    void heapifyDown(int index);

public:
    void insert(int value);
    void removeMin();
    void print();
    void push_back(int value);
    void pop_back();
};

// Priority Queue using Max Heap
class MaxPriorityQueue {
private:
    MaxHeap maxHeap;

public:
    void enqueue(int value);
    void dequeue();
    void print();
};

// Priority Queue using Min Heap
class MinPriorityQueue {
private:
    MinHeap minHeap;

public:
    void enqueue(int value);
    void dequeue();
    void print();
};

#endif // HEAP_H_INCLUDED
