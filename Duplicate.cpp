#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Handle edge case for empty input
    if (n == 0) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Index tracking where the next unique element should go
    int unique_index = 0;

    for (int i = 1; i < n; i++) {
        // If we find a new unique element
        if (arr[i] != arr[unique_index]) {
            unique_index++;
            arr[unique_index] = arr[i]; // Move it forward
        }
    }

    // Print the unique elements up to unique_index
    for (int i = 0; i <= unique_index; i++) {
        cout << arr[i] << (i == unique_index ? "" : " ");
    }
    cout << endl;

    return 0;
}