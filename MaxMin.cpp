#include <iostream>

// Recursive function to find the maximum
int findMax(int arr[], int start, int end) {
    // Base case
    if (start == end)
        return arr[start];

    // Recursive step
    int mid = (start + end) / 2;
    int max1 = findMax(arr, start, mid); // correctly goes to mid
    int max2 = findMax(arr, mid + 1, end);

    return (max1 > max2) ? max1 : max2;
}

// Recursive function to find the minimum
int findMin(int arr[], int start, int end) {
    // Base case
    if (start == end)
        return arr[start];

    // Recursive step
    int mid = (start + end) / 2;
    int min1 = findMin(arr, start, mid);
    int min2 = findMin(arr, mid + 1, end);

    return (min1 < min2) ? min1 : min2;
}

int main() {
    // Updated to match the array in your comment exactly
    int arr[] = {9, 2, 4, 0, 2, 2, 3, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements:\n";
    for(int element : arr) {
        std::cout << element << " ";
    }
    std::cout << "\n";

    // Call the respective functions
    int max = findMax(arr, 0, size - 1);
    int min = findMin(arr, 0, size - 1);

    std::cout << "Maximum element: " << max << "\n";
    std::cout << "Minimum element: " << min << "\n";

    return 0;
}