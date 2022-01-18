 #include <iostream>

 using namespace std;

void operacao (int tamanho, int *v1, int *v2){
    int soma=0;
         for (int i = 0; i<tamanho;i++){
            soma = soma + v1[i] + v2[i];
         }   
     cout << " O produto interno de ambos os vetores eh: " << soma << endl;    
  }


 int main(){
       int size,*vetor1,*vetor2,valor1,valor2;
         cout << " Qual tamanho do vetor? " << endl;
        cin >> size;
            if ( size <= 3){
                    cout << " Favor inserir tamanho maior que 3" << endl;
                    return main();
            }
            
        vetor1 = (int *)malloc(size * sizeof(int));
        vetor2 = (int *)malloc(size * sizeof(int));
        
        for (int i = 0; i < size; i ++){
                cout << " Digite o valor do vetor 1 da posicao " << i+1 << endl;
                cin >> valor1;
                vetor1[i] = valor1;
        } cout << "\n\n"; 

         for (int i = 0; i < size; i ++){
                cout << " Digite o valor do vetor 2 da posicao " << i+1 << endl;
                cin >> valor1;
                vetor2[i] = valor1;
        } cout << "\n\n"; 
        operacao(size,vetor1,vetor2);
 }