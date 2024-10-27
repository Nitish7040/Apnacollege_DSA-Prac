#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1; // Return -1 if the element is not found
}

int main()
{
    int arr[] = {1, 2, 4, 5, 9, 6};
    int size = 6;
    int target = 15;

    int result = linearsearch(arr, size, target); // Add semicolon
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}