// https://leetcode.com/problems/search-insert-position/description/
#include <vector>
#include <algorithm>
using namespace std;


class Solution{
    public:
        int searchInsert(vector<int>& nums, int target){
            auto r = lower_bound(nums.begin(), nums.end(), target);
            int idx = r - nums.begin();
            return idx;
        }
};

// Teste
#include <iostream>
int main(){
    vector<int> teste = {1, 3, 5, 6, 7};
    int val = 4;
    Solution sol;
    cout << sol.searchInsert(teste, val) << "\n";
};