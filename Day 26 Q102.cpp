#include <iostream>
using namespace std;

int main() {
    int age;

    
    cout << "Enter your age: ";
    cin >> age;

  
    if (age < 0) {
        cout << "Invalid age! Please enter a positive number." << endl;
    } else if (age >= 18) {
        cout << "Congratulations! You are eligible to vote." << endl;
    } else {
        int years_left = 18 - age;
        cout << "Sorry, you are not eligible to vote yet." << endl;
        cout << "You can vote in " << years_left << " year(s)." << endl;
    }

    return 0;
}
