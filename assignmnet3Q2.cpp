#include <iostream>

using namespace std;

// Create class of Stack

class Stack
{
    // top element, size of Stack , array
    int *arr;
    int stackSize;
    int top;

    // Create constructor for initialzing the stack
public:
    Stack(int size = 5)
    {
        arr = new int[stackSize];
        top = -1;
    }

    // function for push data in stack

    void push(int elem)
    {

        // Check first stack is full or not
        if (isFull())
        {
            cout << "The Stack is Full " << endl;
        }
        // if Stack is empty increment top elem and then assign value to top element.
        top++;
        arr[top] = elem;
    }

    // function for pop data in stack -> First check Stack is underflow or not and then decrement the top pointer
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty " << endl;
        }
        int val = arr[top];
        top--;
        cout << "Pop Element is : " << val << endl;
    }

    // function for peek data from stack -> top element of Stack
    int peek()
    {
        return arr[top];
    }

    // function for isEmpty()
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }

    // function for isFull()

    bool isFull()
    {
        if (top == stackSize - 1)
        {
            return true;
        }
        return false;
    }

    // function for printing the Stack -> first check stack is iSEmpty() then the print the Array Elements

    void printStack()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << "      ";
        }
    }
};

int main()
{

    Stack st;
    int n;
    int choice;

    do
    {

        cout << "0.Exit the Program" << endl;
        cout << "1. Enter the Size of an Stack" << endl;
        cout << "2. Push the Element in Stack" << endl;
        cout << "3. Pop the Element in Stack" << endl;
        cout << "4. Peek the Element in Stack" << endl;
        cout << "5. Print the Stack" << endl;
        cout << "6. Check if Stack is Empty" << endl;
        cout << "7. Check if Stack is Full" << endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Exiting..." << endl;
            break;
        case 1:
            cout << "Enter the Size of Stack: ";
            cin >> n;
            break;
        case 2:
            int elem;
            cout << "Enter the Element to Push: ";
            cin >> elem;
            st.push(elem);
            break;
        case 3:
            st.pop();
            break;
        case 4:
            cout << st.peek() << endl;
            break;
        case 5:
            st.printStack();
            break;
        case 6:
            cout << st.isEmpty() << endl;
            break;
        case 7:
            cout << st.isFull() << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
        }

    } while (choice != 0);
}