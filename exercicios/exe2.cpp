/*https://neps.academy/br/exercise/110*/

#include <iostream>
using namespace std;

int main () {
    int N, Num, Num2;
    int cont = 1;
    int max = 1;
    cin >> N;
    cin >> Num;
    for (int i = 1; i < N; i++){
        cin >> Num2;
        if (Num == Num2){
            cont++;
        } else {
            cont = 1;
        }
        
        if (cont > max){
            max = cont;
            }
        
        Num = Num2;
    }
    cout << max << "\n";
}