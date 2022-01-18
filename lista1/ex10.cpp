 #include <iostream>

 using namespace std;
  int main(){
      int size,produto1=1,produto2=1;
       cout << " Insira tamanho da matriz ( sera uma matriz quadratica) " << endl;
       cin >> size;
      int matrix[size][size]; 

      for (int linha = 0; linha < size; linha++){
          for (int coluna = 0; coluna < size; coluna++ ){
              cout << " Insira o valor da linha " << linha+1 << " da coluna " << coluna+1 << endl;
              cin >> matrix [linha][coluna];
          }
      }
        for (int linha = 0; linha < size; linha++){
          for (int coluna = 0; coluna < size; coluna++ ){ 
              cout << matrix [linha][coluna] << " ";
            }
            cout << "\n";
          }
           
          for(int i =0;i < size;i++){
               produto1 = produto1 * matrix[i][i];
          }

          for (int i=0;i < size;i++){
              for ( int j = size; j <=0; j--){
                  produto2 = produto2 * matrix[i][j];
              }
          }
          cout << " Produto da diagonal principal: "<<  produto1 << endl; 
          cout << " Produto da diagonal secundaria: "<<  produto2 << endl; 
          
  }