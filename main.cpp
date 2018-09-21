#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> results;
        for (int i = 0, j = 0; i < nums1.size() && j < nums2.size();) {
            if (nums1[i] < nums2[j]) {
                i++;
                continue;
            } else if (nums1[i] > nums2[j]) {
                j++;
                continue;
            }
            results.push_back(nums1[i]);
            i++;
            j++;
        }

        return results;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> nums1 = {1, 2, 2, 3, 4, 5}, nums2 = {2, 2, 2};
    Solution s;
    vector<int> result = s.intersect(nums1, nums2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << ",";
    }
    cout << endl;
    return 0;
}