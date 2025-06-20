#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int size = high - low + 1;
    int temp[size];  // temporary array

    int left = low;
    int right = mid + 1;
    int i = 0;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[i++] = arr[left++];
        } else {
            temp[i++] = arr[right++];
        }
    }

    // Copy remaining elements from left side
    while (left <= mid) {
        temp[i++] = arr[left++];
    }

    // Copy remaining elements from right side
    while (right <= high) {
        temp[i++] = arr[right++];
    }

    // Copy sorted elements back to original array
    for (int j = low; j <= high; j++) {
        arr[j] = temp[j-low];
    }
}

void mergesort(int arr[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int arr[] = {2, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
