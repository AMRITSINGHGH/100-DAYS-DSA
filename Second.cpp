#include<iostream> // Header file for input/output stream
#include<climits> // Header file for limits of integral types
using namespace std; // Using the standard namespace

void second_largest(int nums[], int arr_size) // Function definition to find the second largest element in the array
{
    int i, first_element, second_element; // Declaration of integer variables

    /* There should be atleast two elements */
    if (arr_size < 2) // Checking if the array has less than 2 elements
    {
        cout << " Invalid Input "; // Output message for invalid input
        return; // Return from the function
    }

    first_element = second_element = INT_MIN; // Initializing first and second elements as minimum integer value
    for (i = 0; i < arr_size; i ++) // Loop to find the second largest element in the array
    {
        if (nums[i] > first_element) // Checking if current element is larger than the first largest element
        {
            second_element = first_element; // Updating second largest element
            first_element = nums[i]; // Updating first largest element
        }
        else if (nums[i] > second_element && nums[i] != first_element) // Checking if current element is larger than the second largest element and not equal to first largest element
        {
            second_element = nums[i]; // Updating second largest element
        }
    }

    if (second_element == INT_MIN) // Checking if second largest element is still initialized as minimum integer value
    {
        cout << "No second largest element"; // Output message when there is no second largest element
    }
    else
    {
        cout << "\nThe second largest element is: " << second_element; // Output the second largest element
    }
}

int main() // Main function where the program execution starts
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70}; // Declaration and initialization of an integer array
    int n = sizeof(nums)/sizeof(nums[0]); // Determining the number of elements in the array

    cout << "Original array: "; // Output message indicating the original array is being displayed
    for (int i=0; i < n; i++) 
        cout << nums[i] <<" "; // Output each element of the array

    second_largest(nums, n); // Calling function to find the second largest element in the array
    return 0; // Return statement indicating successful execution and program termination
}
