#include <iostream>
using namespace std;

int main() {
    int arr[100]; 
    int size = 0;
    int choice;

    do {
       
        cout << "\n===== ARRAY OPERATION SYSTEM =====" << endl;
        cout << "1. Insert an Element" << endl;
        cout << "2. Display Array Elements" << endl;
        cout << "3. Search for an Element" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
              
                if (size >= 100) {
                    cout << "Error: Array is full!" << endl;
                } else {
                    int element;
                    cout << "Enter the integer to insert: ";
                    cin >> element;
                    arr[size] = element;
                    size++;             
                    cout << "Element inserted successfully!" << endl;
                }
                break;
            }
            case 2: {
                
                if (size == 0) {
                    cout << "Array is currently empty." << endl;
                } else {
                    cout << "Current Array Elements: ";
                    for (int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 3: {
               
                if (size == 0) {
                    cout << "Array is empty. Nothing to search." << endl;
                } else {
                    int target, foundIndex = -1;
                    cout << "Enter the element to search for: ";
                    cin >> target;

                  
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == target) {
                            foundIndex = i;
                            break; 
                        }
                    }

                    if (foundIndex != -1) {
                        cout << "Element found at index: " << foundIndex << endl;
                    } else {
                        cout << "Element not found in the array." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << "Exiting system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select an option between 1 and 4." << endl;
        }
    } while (choice != 4); 

    return 0;
}
