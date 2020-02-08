/*
practice iterator and find algorithm
ex 1.
2, 7, 11, 15 t: 9
[0, 1]
ex 2.
5, 7, 9, 20 t: 16
[1, 2]
ex 3.
3, 2, 4 t: 6
[1, 2]

test odd / even number
t - a[0] = x
find x in array
c++ vector use iterator to implement find
no need to error check, must have one solution
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        vector<int>::iterator it, it_find;
        for (it = nums.begin(); it != nums.end(); it++) {
            int another_num = (target - *it);
            it_find = find(it + 1, nums.end(), another_num); // start from the next
            
            if (it_find != nums.end()) {
                res.push_back(it - nums.begin());
                res.push_back(it_find - nums.begin());
                break;
            }
        }
        return res;
    }
};
