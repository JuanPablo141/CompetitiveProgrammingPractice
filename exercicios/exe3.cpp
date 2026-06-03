// https://neps.academy/br/exercise/236

#include <iostream>
using namespace std;

int main () {
    bool magico = true;
    int diagonal1 = 0;
    int diagonal2 = 0;
    int N;
    int resultado = 0;
    cin >> N;
    int matriz[N][N];
    
    //Insere dados na matriz
    for (int l = 0; l < N; l++){
        for (int c = 0; c < N; c++){
            cin >> matriz[l][c];
        }
    }

    //Verifica a primeira linha
    int verificador = 0;
    for (int i = 0; i < N; i++){
        verificador = verificador + matriz[0][i];
    }

    //Verificar linhas
    for (int l = 0; l < N; l++){
        resultado = 0;
        for (int c = 0; c < N; c++){
            resultado += matriz[l][c];
        }
        if (resultado != verificador){
            magico = false;
        }
    }

    // Verificar colunas
    for (int l = 0; l < N; l++){
        resultado = 0;
        for (int c = 0; c < N; c++){
            resultado += matriz[c][l];
        }
        if (resultado != verificador){
            magico = false;
        }
    }

    //Verificar primeira diagonal
    for(int l = 0; l < N; l++){
        for(int c = 0; c < N; c++){
            if (l == c){
                diagonal1 += matriz[l][c];
            }
        }
    }  
    if(diagonal1 != verificador){
        magico = false;
    }

    //Verificar segunda diagonal
    for(int i = 0; i < N; i++){
        diagonal2 += matriz[i][N-i-1];
    }
    if(diagonal2 != verificador){
        magico = false;
    }

   // Verificação final
   if (magico == true){
    cout << verificador <<"\n";
   } else {
    cout << -1 << "\n";
   }
} 