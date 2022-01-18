  #include <iostream>

  using namespace std;


  void operacao (int tamanho, int *v){
        int x;
           cout << " Qual valor deseja comparar ao vetor? " << endl;
            cin >> x;
         for (int i = 0; i<tamanho;i++){
             if ( x == v[i]){
                 cout <<" o valor comparado pertence ao vetor na posicao "  << i+2 << endl;
             }
             else{
                 cout <<" 0 " << endl;
             }
         }   
  }

  int main(){
    int size,*vetor,valor;
         cout << " Qual tamanho do vetor? " << endl;
        cin >> size;
            if ( size < 10){
                    cout << " Favor inserir tamanho maior ou igual a 10" << endl;
                    return main();
            }
            
        vetor = (int *)malloc(size * sizeof(int));
 
        for (int i = 0; i < size; i ++){
                cout << " Digite o valor da posicao " << i+1 << endl;
                cin >> valor;
                vetor[i] = valor;
        } cout << "\n\n"; 
    operacao( size,vetor);
  }