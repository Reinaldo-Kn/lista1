#include <iostream>

using namespace std;
void resultadoA (int matA[4][4]);
int main(){

    int matrizA[4][4] = {{1,4,2,3}, {6,5,1,9}, {3,4,3,7}, {8,4,5,3}};
    int matrizB[4][4] = {{5,6,8,2}, {5,9,6,4}, {2,5,8,7}, {2,4,8,6}};
    int matrizC[4][4],linha,coluna,somaA=0,somaB=0;
    cout << " Matriz cruzada: " << endl;
    for (linha = 0; linha < 4; linha++){
        for (coluna = 0; coluna < 4; coluna++){
            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
            cout << matrizC[linha][coluna] << " ";
        }
        cout << "\n";
    }
cout << "\n\n\n";
    for ( linha = 0; linha < 4; linha++){
        for ( coluna = 0; coluna < 4; coluna++){
            if ( matrizC[linha][coluna] % 2 == 0){
                matrizA[linha][coluna] = matrizC[linha][coluna];
                
            }
            else{
                matrizB[linha][coluna] = matrizC[linha][coluna];
            }
            if ( matrizA[linha][coluna] %2 !=0){
                    matrizA[linha][coluna]=0;
                }
            if ( matrizB[linha][coluna] %2 ==0){
                    matrizB[linha][coluna]=0;
                }  
        }
    }

    cout << " Matriz A apos cruzar: " << endl;
    for (linha = 0; linha < 4; linha++){
        for ( coluna = 0; coluna < 4; coluna++){
            cout << matrizA[linha][coluna] << " ";
            somaA = somaA + matrizA[linha][coluna];
        }
        cout <<"\n";
    }
    cout << "\n\n\n";

    cout << " Matriz B apos cruzar: " << endl;
        for (linha = 0; linha < 4; linha++){
            for ( coluna = 0; coluna < 4; coluna++){
                cout << matrizB[linha][coluna] << " ";
                somaB = somaB + matrizB[linha][coluna];
            }
            cout <<"\n";
        }
        cout << "\n\n\n";
    cout << " Soma dos valores da Matriz A eh de: " << somaA << endl;
     cout << " Soma dos valores da Matriz B eh de: " << somaB << endl;
} 
    

