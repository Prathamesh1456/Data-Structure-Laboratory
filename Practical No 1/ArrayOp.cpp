// Array opration 
#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[100], n, choice, pos, value, key;
    string log[200];
    int logCount = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    log[logCount++] = "Program started and array initialized";

    do {
        cout << "\n--- ARRAY OPERATIONS MENU ---\n";
        cout << "1. Traverse\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Update\n";
        cout << "6. Sort (Ascending)\n";
        cout << "7. Show Log\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1: // Traverse
            cout << "Array elements: ";
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;

            log[logCount++] = "Traversed array";
            break;

        case 2: // Insert
            cout << "Enter position (0 to " << n << "): ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> value;

            for (int i = n; i > pos; i--)
                arr[i] = arr[i - 1];

            arr[pos] = value;
            n++;
            cout << "Element inserted.\n";

            log[logCount++] = "Inserted value " + to_string(value) +
                              " at position " + to_string(pos);
            break;

        case 3: // Delete
            cout << "Enter position (0 to " << n - 1 << "): ";
            cin >> pos;

            log[logCount++] = "Deleted value " + to_string(arr[pos]) +
                              " from position " + to_string(pos);

            for (int i = pos; i < n - 1; i++)
                arr[i] = arr[i + 1];

            n--;
            cout << "Element deleted.\n";
            break;

        case 4: // Search
            cout << "Enter element to search: ";
            cin >> key;

            {
                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) {
                        cout << "Element found at position " << i << endl;
                        log[logCount++] =
                            "Searched value " + to_string(key) +
                            " — found at position " + to_string(i);
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Element not found.\n";
                    log[logCount++] =
                        "Searched value " + to_string(key) + " — not found";
                }
            }
            break;

        case 5: // Update
            cout << "Enter position (0 to " << n - 1 << "): ";
            cin >> pos;
            cout << "Enter new value: ";
            cin >> value;

            log[logCount++] =
                "Updated position " + to_string(pos) +
                " from " + to_string(arr[pos]) +
                " to " + to_string(value);

            arr[pos] = value;
            cout << "Element updated.\n";
            break;

        case 6: // Sort
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }

            cout << "Array sorted in ascending order.\n";
            log[logCount++] = "Sorted array (ascending)";
            break;

        case 7: // Show Log
            cout << "\n--- OPERATION LOG ---\n";
            if (logCount == 0)
                cout << "No operations performed yet.\n";
            else {
                for (int i = 0; i < logCount; i++)
                    cout << i + 1 << ". " << log[i] << endl;
            }
            break;

        case 8:
            cout << "Exiting program.\n";
            log[logCount++] = "Program exited";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 8);

    return 0;
}