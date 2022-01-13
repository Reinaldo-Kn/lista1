#include <iostream>

using namespace std;

int main(){
    int n,valor,i;
    int *v;
    cout <<"Digite tamanho do vetor: " << endl;
    cin >> n;
            if ( n < 4 ){
                cout << " Por favor digite valor acima de 4" << endl;
                return main();
            }
    v = (int *)malloc(n * sizeof(int));

     for (i = 1; i < n+1; i++) {
        cout << "Digite o valor da posicao " << i << endl;
        cin >> valor;
         v[i] = valor;
    }
    mudar (n,*v);
}

void mudar(int tamanho, int *vetor){
    cout << "tamanho eh"<< tamanho << "vetor é" << vetor << endl;
}