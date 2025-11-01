#include <iostream>
using namespace std;

template <typename T>
class Vector {
    T* arr;
    int capacity;
    int current;

    public:
        Vector() : arr(new T[1]), capacity(1), current(0) {}

        ~Vector() { 
            delete[] arr;
            arr = nullptr;
        }

        void push(T data) {
            if (current == capacity) {
                T* temp = new T[2 * capacity];
                for (int i = 0; i < capacity; i++) {
                    temp[i] = arr[i];
                }
                delete[] arr;
                capacity *= 2;
                arr = temp;
            }
            arr[current++] = data;
        }

        void push(T data, int index) {
            if (index == capacity) {
                push(data);
            } else {
                arr[index] = data;
            }
        }

        void pop() {
            if (current > 0) {
                current--;
            } 
        }

        T get(int index) {
            if (index < current) {
                return arr[index];
            } else {
                return -1;
            }
        }

        int size() { 
            return current;
        }

        int getcapacity() { 
            return capacity; 
        }

        void print() {
            for (int i = 0; i < current; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};
