#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T* arr;
    int topIndex;
    int capacity;

    public:
        Stack(int cap = 100) : arr(new T[cap]), topIndex(-1), capacity(cap) {}

        ~Stack() { 
            delete[] arr;
            arr = nullptr;
        }

        void push(T data) {
            if (topIndex < capacity - 1) {
                arr[++topIndex] = data;
            } else {
                return;
            }
                
        }

        void pop() {
            if (topIndex >= 0) {
                topIndex--;
            }
            else {
                return;
            }
        }

        T top() {
            if (topIndex >= 0) {
                return arr[topIndex];
            }
            return;
        }

        bool isEmpty() { 
            return topIndex == -1; 
        }
};
