 #include <iostream>
 #include <vector>
 using namespace std;

 int main(){
     int linha,coluna;
     
     cout << " Insira tamanho da linha " << endl;
     cin >> linha;
     cout << " Insira tamanho da coluna " << endl;
     cin >> coluna;

     int matrix[linha][coluna],maior=0,indice=0;
     int soma[coluna];
        for ( int i = 0;i < linha;i++){
            for(int j =0;j <coluna;j++){
                cout << " Insira valor da linha " << i+1 << " da coluna " << j+1<< endl;
                cin >> matrix[i][j];
            }
        }
         for (int i = 0; i < linha; i++){
          for (int j = 0; j < coluna; j++ ){ 
              cout << matrix[i][j] << " ";
            }
            cout << "\n";
          }
    for (int i = 0; i < linha; i++){
          for (int j = 0; j < coluna; j++ ){ 
              soma[j] = 0;
            }
        }
        for (int i = 0; i < linha; i++){
          for (int j = 0; j < coluna; j++ ){ 
              soma[j] = soma[j] + matrix[i][j];
            }
        }
    for (int i = 0;i <coluna;i++){
            if (i == 0) {
                soma[i] = maior;
            }
            if (soma[i] > maior) {
                maior = soma[i];
                indice  = i;
            }
    }
        cout <<" O maior numero somado nas colunas foi " <<maior << " e fica na coluna " << indice+1 << endl;
 }