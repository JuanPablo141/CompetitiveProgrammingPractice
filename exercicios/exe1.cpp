/*https://neps.academy/br/exercise/52*/

#include <iostream>

using namespace std;
int main () {
    int N, I;
    int A = 0;
    int B = 0;
    cin >> N;

    for (int i = 1; i <= N; i++){
        cin >> I;
        if (I == 1){
            A = 1 - A;
        }
        if (I == 2){
            A = 1 - A;
            B = 1 - B;
        }
    }
    cout << A << "\n";
    cout << B << "\n";

    return 0;
}