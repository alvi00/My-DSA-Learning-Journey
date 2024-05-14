#include "header.h"
int main() {

    // Priority Queue using Max Heap
    MaxPriorityQueue maxPriorityQueue;
    maxPriorityQueue.enqueue(1);
    maxPriorityQueue.enqueue(2);
    maxPriorityQueue.enqueue(3);
       maxPriorityQueue.dequeue();
    maxPriorityQueue.print(); // Output: 10 5 3


    // Priority Queue using Min Heap
    MinPriorityQueue minPriorityQueue;
    minPriorityQueue.enqueue(1);
    minPriorityQueue.enqueue(2);
    minPriorityQueue.enqueue(3);
    minPriorityQueue.dequeue();
    minPriorityQueue.print(); // Output: 3 10 5


    return 0;
}
