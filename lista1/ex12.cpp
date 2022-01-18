 #include <iostream>

 using namespace std;

 int main(){
     int linhaN,colunaM,linhaM,colunaK;
     
     cout << " Insira tamanho da linha da matriz A " << endl;
     cin >> linhaN;
     cout << " Insira tamanho da coluna da matriz A" << endl;
     cin >> colunaM;
     linhaM = colunaM;
     cout << " Insira tamanho da coluna da matriz B" << endl;
     cin >> colunaK;

     int matrizA[linhaN][colunaM], matrizB[linhaM][colunaK],matrizC[linhaN][colunaK];

    cout << " Matriz A: "<< endl;
        for ( int i = 0;i < linhaN;i++){
            for(int j =0;j <colunaM;j++){
                cout << " Matriz A valor da linha " << i+1 << " da coluna " << j+1<< endl;
                cin >> matrizA[i][j];
            }
        }

    cout << " Matriz B: "<< endl;
        for ( int i = 0;i < linhaM;i++){
            for(int j =0;j <colunaK;j++){
                cout << " Matriz B valor da linha " << i+1 << " da coluna " << j+1<< endl;
                cin >> matrizB[i][j];
            }
        }



    for(int i = 0; i < linhaN; ++i){
        for(int j = 0; j < colunaK; ++j){
            matrizC[i][j]=0;
        }
    } 
           for (int i = 0; i < linhaN; i++) {
                for (int j = 0; j < colunaK; j++) {
                    for (int k = 0; k < colunaM; k++) {
                        matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            cout << matrizC[i][j] << "  ";
        }
        cout << "\n";
    }
 }