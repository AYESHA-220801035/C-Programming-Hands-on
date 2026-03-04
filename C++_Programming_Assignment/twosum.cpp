#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int,int>> arr;
    for(int i = 0; i < nums.size(); i++) {
        arr.push_back({nums[i], i});
    }
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    while(left < right) {
        int sum = arr[left].first + arr[right].first;
        if(sum == target) {
            return {arr[left].second, arr[right].second};
        }
        else if(sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return {};
}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cout << "Enter target: ";
    cin >> target;
    vector<int> result = twoSum(nums, target);
    if(result.size() == 0) {
        cout << "No pair found";
    }
    else {
        cout  << result[0] << " " << result[1];
    }
    return 0;
}