// https://leetcode.com/problems/palindrome-number/description/

#include <iostream>
using namespace std;

class Solution{
    public:
        bool isPalindrome(int x){
            int copia = x, digito = 0;
            long long invertido = 0;
            if(x < 0){
                return false;
            }
            while(copia > 0){
                digito = copia % 10;
                invertido = invertido * 10 + digito;
                copia = copia/10;
            }
            return (invertido == x);
        }
};

// Validação
int main(){
    int y = 121;
    Solution sol;
    cout << sol.isPalindrome(y);
};