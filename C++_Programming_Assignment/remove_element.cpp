#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[c] = nums[i];
                c++;
            }
        }
        return c;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int val;
    cout << "Enter value to remove: ";
    cin >> val;
    int newLength = sol.removeElement(nums, val);
    cout << "New Length: " << newLength << endl;
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}