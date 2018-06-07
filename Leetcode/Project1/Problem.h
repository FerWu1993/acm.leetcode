#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> _map;
        vector<int> _result;
        for (int index = 0; index < nums.size();index++)
        {
            if (_map.find(nums[index]) != _map.end())
            {
                _result.push_back(_map[nums[index]]);
                _result.push_back(index);
                break;
            }
            _map[target - nums[index]] = index;
        }
        return _result;
    }
};