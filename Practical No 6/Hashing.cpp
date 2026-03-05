#include <iostream>
#include <vector>
using namespace std;
int main(){
    int size;
    cout << "Enter size of hash table: ";
    cin >> size;
    vector<int> hashTable(size, -1);
    int choice;
    do{
        cout << "\n1. Insert";
        cout << "\n2. Search";
        cout << "\n3. Display";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1){
            int key;
            cout << "Enter key to insert: ";
            cin >> key;
            int index = key % size;
            while (hashTable[index] != -1){
                index = (index + 1) % size;
            }
            hashTable[index] = key;
            cout << "Inserted " << key << " at index " << index << endl;
        }

        else if (choice == 2){
            int key;
            cout << "Enter key to search: ";
            cin >> key;
            int index = key % size;
            int startIndex = index;
            bool found = false;
            while (hashTable[index] != -1){
                if (hashTable[index] == key){
                    cout << "Element found at index " << index << endl;
                    found = true;
                    break;
                }
                index = (index + 1) % size;
                if (index == startIndex)
                    break;
            }
            if (!found)
                cout << "Element not found" << endl;
        }

        else if (choice == 3){
            cout << "\nHash Table:\n";
            for (int i = 0; i < size; i++){
                cout << "Index " << i << " : " << hashTable[i] << endl;
            }
        }
        
        else{
            cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    return 0;
}