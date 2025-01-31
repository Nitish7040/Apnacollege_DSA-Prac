#include <iostream>
#include <vector>
using namespace std;

// Function to find the unique number
int findUnique(vector<int> arr) {
    int ans = 0;
    for (size_t i = 0; i < arr.size(); i++) { // Changed int to size_t
        ans = ans ^ arr[i]; // XOR operation
    }
    return ans;
}

int main() {
    // Unique number question
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:" << endl;

    for (size_t i = 0; i < arr.size(); i++) { // Changed int to size_t
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "The unique element is: " << uniqueElement << endl;

    return 0;
}
