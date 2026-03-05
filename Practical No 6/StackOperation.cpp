#include <iostream>
using namespace std;
int main(){
    const int MAX = 5;
    int stack[MAX];
    int top = -1;
    int choice, value;
    do
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peek";
        cout << "\n4. Display";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:   // Push element
                if(top == MAX - 1){
                    cout << "Stack Overflow";
                }
                else{
                    cout << "Enter value: ";
                    cin >> value;
                    top++;
                    stack[top] = value;
                    cout << "Element pushed";
                }
                break;

            case 2:   // Pop element
                if(top == -1){
                    cout << "Stack Underflow";
                }
                else{
                    cout << "Popped element: " << stack[top];
                    top--;
                }
                break;

            case 3:   // Peek element
                if(top == -1){
                    cout << "Stack is empty";
                }
                else{
                    cout << "Top element: " << stack[top];
                }
                break;

            case 4:   // Display stack
                if(top == -1){
                    cout << "Stack is empty";
                }
                else{
                    cout << "Stack elements are:\n";
                    for(int i = top; i >= 0; i--)
                    {
                        cout << stack[i] << endl;
                    }
                }
                break;

            default:
                cout << "Invalid choice";
        }
    } while(choice != 5);
    return 0;
}