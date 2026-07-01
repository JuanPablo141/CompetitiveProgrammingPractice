// https://leetcode.com/problems/sqrtx/description/

using namespace std;

class Solution{
    public:
        int mySqrt(int x){
            int alto = x;
            int baixo = 0, resposta = 0;
            if(x < 2){
                return x;
            } else {
                while(baixo <= alto){
                    int meio = baixo + (alto - baixo)/2;
                    if(meio <= x / meio){
                        resposta = meio;
                        baixo = meio + 1;
                    } else {
                        alto = meio - 1;
                    }
                }
            }
            return resposta;
        }
};

// Validação
#include <iostream>
int main(){
    int teste = 9;
    Solution sol;
    cout << sol.mySqrt(teste) << "\n";
}