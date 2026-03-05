#include <iostream>
using namespace std;
#define MAX 5
int main()
{
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value;
    do
    {
        cout << "\n--- Queue Operations ---\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: // Insertion
                if(rear == MAX - 1){
                    cout << "Queue Overflow\n";
                }
                else{
                    if(front == -1)
                        front = 0;
                    cout << "Enter value: ";
                    cin >> value;
                    rear++;
                    queue[rear] = value;
                }
                break;

            case 2: // Deletion
                if(front == -1 || front > rear){
                    cout << "Queue Underflow\n";
                }
                else{
                    cout << "Deleted element: " << queue[front] << endl;
                    front++;
                }
                break;

            case 3: // Display
                if(front == -1 || front > rear){
                    cout << "Queue is empty\n";
                }
                else{
                    cout << "Queue elements: ";
                    for(int i = front; i <= rear; i++)
                    {
                        cout << queue[i] << " ";
                    }
                    cout << endl;
                }
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}