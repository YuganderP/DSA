#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Merge the two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left subarray to temp
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right subarray to temp
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements from temp back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeS(vector<int>& arr, int low, int high) {
    // Base case: If there's only one element or no element in the subarray
    if (low == high) {
        return;
    }
    int mid = (low + high) / 2;
    // Recursively sort left and right halves
    mergeS(arr, low, mid);
    mergeS(arr, mid + 1, high);
    // Merge the sorted halves
    merge(arr, low, mid, high);
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    // Call mergeSort with correct upper bound index (4 instead of 5)
    mergeS(arr, 0, 4);
    // Output the sorted array
    for (auto it : arr) {
        cout << it;
    }
    return 0;
}
