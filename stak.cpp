#include <iostream>
using namespace std;

const int SIZE = 5;

int stack[SIZE];
int top = -1;

void push(int value) {
    if (top == SIZE - 1) {
        cout << "Stack is full!" << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " added to stack." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << stack[top] << " removed from stack." << endl;
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}
