// https://leetcode.com/problems/missing-number/description/

#include <vector>
using namespace std;

class Solution{
    public:
        int missingNumber(vector<int>& nums){
            int n = nums.size();
            int falta = n;
            for (int i = 0; i < n ; i++){
                falta ^= i ^ nums[i];
            }
            return falta;
        }
};

// Validação
#include <iostream>
int main(){
    vector<int> teste = {9,6,4,2,3,5,7,0,1};
    Solution sol;
    cout << sol.missingNumber(teste);
    
}