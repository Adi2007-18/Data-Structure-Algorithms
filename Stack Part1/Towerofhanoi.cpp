
#include <iostream>
using namespace std;

// Recursive Tower of Hanoi function
void towerOfHanoi(int n, char s,
                  char a, char d) {

    // Base case
    if (n == 1) {
        cout << "Move disk 1 from "
             << s << " to " << d << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, s, d, a);

    // Move the largest disk to destination
    cout << "Move disk " << n << " from "
         << s << " to " << d << endl;

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, a, s, d);
}

int main() {
    int n;

    cout << "===== TOWER OF HANOI =====" << endl;
    cout << "Enter the number of disks (1-10): ";

    if (!(cin >> n) || n < 1 || n > 10) {
        cout << "Invalid input! Enter a number between 1 and 10."
             << endl;
        return 1;
    }

    cout << "\nRecursive Tower of Hanoi Execution" << endl;
    cout << "Number of disks: " << n << endl;
    cout << "Source: A | Auxiliary: B | Destination: C"
         << endl;

    cout << "\n--- Disk Movements ---" << endl;

    towerOfHanoi(n, 'A', 'B', 'C');

    cout << "\nTotal moves required: "
         << ((1LL << n) - 1) << endl;

    cout << "Execution completed successfully!" << endl;

    return 0;
}