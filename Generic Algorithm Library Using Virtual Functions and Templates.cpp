#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Base class for generic algorithm behavior
template <typename T>
class Algorithm {
public:
    virtual void execute(vector<T>& data) = 0;  // Pure virtual function to execute the algorithm
    virtual ~Algorithm() {}  // Virtual destructor for cleanup
};

// Derived class implementing Bubble Sort
template <typename T>
class BubbleSort : public Algorithm<T> {
public:
    void execute(vector<T>& data) override {
        bool swapped;
        for (size_t i = 0; i < data.size() - 1; ++i) {
            swapped = false;
            for (size_t j = 0; j < data.size() - i - 1; ++j) {
                if (data[j] > data[j + 1]) {
                    swap(data[j], data[j + 1]);  // Swap elements
                    swapped = true;
                }
            }
            if (!swapped) break;  // If no elements were swapped, the array is sorted
        }
    }
};

// Derived class implementing Binary Search
template <typename T>
class BinarySearch : public Algorithm<T> {
private:
    T target;
public:
    BinarySearch(T target) : target(target) {}

    void execute(vector<T>& data) override {
        sort(data.begin(), data.end());  // Ensure the data is sorted for binary search
        int left = 0, right = data.size() - 1;
        bool found = false;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (data[mid] == target) {
                cout << "Element " << target << " found at index " << mid << endl;
                found = true;
                break;
            }
            else if (data[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (!found) {
            cout << "Element " << target << " not found in the array." << endl;
        }
    }
};

// A helper function to print the vector contents
template <typename T>
void print_vector(const vector<T>& data) {
    for (const auto& elem : data) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    try {
        // Create a vector of integers for sorting and searching
        vector<int> data = {5, 2, 9, 1, 5, 6};

        // Demonstrating Bubble Sort algorithm
        BubbleSort<int> bubbleSort;
        cout << "Original data: ";
        print_vector(data);

        bubbleSort.execute(data);
        cout << "Data after Bubble Sort: ";
        print_vector(data);

        // Demonstrating Binary Search algorithm
        int target = 5;
        BinarySearch<int> binarySearch(target);
        binarySearch.execute(data);

        // Test with another data type (string)
        vector<string> strData = {"apple", "orange", "banana", "grape"};
        cout << "\nOriginal string data: ";
        print_vector(strData);

        // Sorting string data
        BubbleSort<string> bubbleSortStr;
        bubbleSortStr.execute(strData);
        cout << "String data after Bubble Sort: ";
        print_vector(strData);

        string targetStr = "banana";
        BinarySearch<string> binarySearchStr(targetStr);
        binarySearchStr.execute(strData);

    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
