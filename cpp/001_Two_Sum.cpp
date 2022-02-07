#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int> &nums, int target) {
        std::unordered_map<int, int> record;
        for (int i = 0; i != nums.size(); ++i) {
            auto found = record.find(nums[i]);
            if (found != record.end())
                return {found->second, i};
            record.emplace(target - nums[i], i);
        }
        return {-1, -1};
    }
};

int main() {

//    Solution s;

    vector<int> v1{2, 11, 7, 15};
    vector<int> res = Solution::twoSum(v1, 9);
    for (int i = 0; i < 2; i++) {
        cout << res[i] << ":" << v1[res[i]] << endl;
    }
    return 0;
}