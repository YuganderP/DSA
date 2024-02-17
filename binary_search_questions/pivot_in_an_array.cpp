#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(const vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid + 1]) {
            return mid + 1;
        } else if (nums[mid] >= nums[left]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    cout<<left<<right<<endl;
    }

    return left; // Pivot is at index 'left'
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5}; // Example sorted array

    int pivotIndex = findPivotIndex(nums);

    cout << "Pivot index is: " << pivotIndex << endl;

    return 0;
}
