#include <iostream>
#include <climits>

int secondLargest(int arr[], int size) {
    if (size < 2) {
        return INT_MIN;
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondMax = secondLargest(arr, size);
    if (secondMax != INT_MIN) {
        std::cout << "The second largest element is: " << secondMax << std::endl;
    } else {
        std::cout << "No second largest element found." << std::endl;
    }

    return 0;
}
