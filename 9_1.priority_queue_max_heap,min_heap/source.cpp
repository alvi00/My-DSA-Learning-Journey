#include "header.h"

// Max Heap methods
void MaxHeap::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void MaxHeap::heapifyUp(int index) {
    if (index == 0) return;
    int parent = (index - 1) / 2;
    if (heap[parent] < heap[index]) {
        swap(heap[parent], heap[index]);
        heapifyUp(parent);
    }
}

void MaxHeap::heapifyDown(int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int largest = index;
    if (left < heap.size() && heap[left] > heap[index])
        largest = left;
    if (right < heap.size() && heap[right] > heap[largest])
        largest = right;
    if (largest != index) {
        swap(heap[index], heap[largest]);
        heapifyDown(largest);
    }
}

void MaxHeap::insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
}

void MaxHeap::removeMax() {
    if (heap.empty()) return;
    swap(heap[0], heap.back());
    heap.pop_back();
    heapifyDown(0);
}

void MaxHeap::print() {
    for (int val : heap)
        std::cout << val << " ";
    std::cout << std::endl;
}

void MaxHeap::push_back(int value) {
    heap.push_back(value);
}

void MaxHeap::pop_back() {
    if (!heap.empty()) heap.pop_back();
}

// Min Heap methods
void MinHeap::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void MinHeap::heapifyUp(int index) {
    if (index == 0) return;
    int parent = (index - 1) / 2;
    if (heap[parent] > heap[index]) {
        swap(heap[parent], heap[index]);
        heapifyUp(parent);
    }
}

void MinHeap::heapifyDown(int index) {
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    int smallest = index;
    if (left < heap.size() && heap[left] < heap[index])
        smallest = left;
    if (right < heap.size() && heap[right] < heap[smallest])
        smallest = right;
    if (smallest != index) {
        swap(heap[index], heap[smallest]);
        heapifyDown(smallest);
    }
}

void MinHeap::insert(int value) {
    heap.push_back(value);
    heapifyUp(heap.size() - 1);
}

void MinHeap::removeMin() {
    if (heap.empty()) return;
    swap(heap[0], heap.back());
    heap.pop_back();
    heapifyDown(0);
}

void MinHeap::print() {
    for (int val : heap)
        std::cout << val << " ";
    std::cout << std::endl;
}

void MinHeap::push_back(int value) {
    heap.push_back(value);
}

void MinHeap::pop_back() {
    if (!heap.empty()) heap.pop_back();
}

// Priority Queue using Max Heap methods
void MaxPriorityQueue::enqueue(int value) {
    maxHeap.insert(value);
}

void MaxPriorityQueue::dequeue() {
    maxHeap.removeMax();
}

void MaxPriorityQueue::print() {
    maxHeap.print();
}

// Priority Queue using Min Heap methods
void MinPriorityQueue::enqueue(int value) {
    minHeap.insert(value);
}

void MinPriorityQueue::dequeue() {
    minHeap.removeMin();
}

void MinPriorityQueue::print() {
    minHeap.print();
}
