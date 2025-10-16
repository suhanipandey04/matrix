#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& nums, int low, int high) {
    if (low < high) {
        int pivot = nums[high];
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (nums[j] < pivot) {
                i++;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[high]);
        int pi = i + 1;

        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    quickSort(nums, 0, n - 1);

    cout << "Sorted array:\n";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}