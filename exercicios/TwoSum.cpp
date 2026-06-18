// https://leetcode.com/problems/two-sum/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            int complemento = 0;
            unordered_map<int, int> vistos;
            for(int i = 0; i < nums.size(); i++){
                complemento = target - nums[i];
                if(vistos.find(complemento) != vistos.end()){
                    return vector<int> {vistos[complemento], i};
                } else {
                    vistos[nums[i]] = i;
                }
            }
            return{};

            
        }
};

// Validação
int main(){
    vector<int> nums = {3, 3};
    int target = 6;
    Solution sol;
    vector<int> resultado = sol.twoSum(nums, target);
    for (int i = 0; i < resultado.size(); i++){
        cout << resultado[i];
    }


};