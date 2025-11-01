#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T* arr;
    int frontIndex, rearIndex, capacity, size;

    public:
        Queue(int cap = 100) : arr(new T[cap]), frontIndex(0), rearIndex(-1), capacity(cap), size(0) {}

        ~Queue() { 
            delete[] arr; 
            arr = nullptr;
        }

        void enqueue(T data) {
            if (size < capacity) {
                rearIndex = (rearIndex + 1) % capacity;
                arr[rearIndex] = data;
                size++;
            } else {
                throw overflow_error("Queue Overflow");
            }
        }

        void dequeue() {
            if (size > 0) {
                frontIndex = (frontIndex + 1) % capacity;
                size--;
            } else {
                underflow_error("Queue Underflow");
            }
        }

        T front() {
            if (size > 0) {
                return arr[frontIndex];
            }   
            throw out_of_range("Queue is empty");
        }
        
        bool isEmpty() { 
            return size == 0; 
        }
};
