#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Duplicate elements are:\n";
    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;

        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        // Check if already printed
        if (isDuplicate) {
            bool alreadyPrinted = false;
            for (int k = 0; k < i; ++k) {
                if (arr[i] == arr[k]) {
                    alreadyPrinted = true;
                    break;
                }
            }

            if (!alreadyPrinted)
                cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
