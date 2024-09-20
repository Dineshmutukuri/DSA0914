#include <iostream>

/**
 * Computes the average of elements in an array.
 *
 * @param arr The array.
 * @param size The size of the array.
 * @return The average of elements in the array.
 */
double average(int arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

/**
 * Main function.
 */
int main() {
    // Read in the size of the array from the user
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Read in the elements of the array from the user
    int arr[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Calculate and print the average of the array elements
    double avg = average(arr, size);
    std::cout << "The average of the array elements is: " << avg << std::endl;

    return 0;
}
