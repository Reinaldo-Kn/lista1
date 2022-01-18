#include <iostream>
 using namespace std;

 int main(){
     int vetor,lido,soma=0;
     cout << "Digite o tamanho do vetor:" << endl;
     cin >> vetor;
                        if (vetor < 10){
                            cout << "O tamanho precisa ser maior que 10" << endl;
                            return main();
                        }
    for (int i = 1; i < vetor+1; i++){
        cout << "Digite o numera da posicao "<< i <<endl;
        cin >> lido;
        soma = lido + soma;
    } 
    cout << "Soma dos " << vetor << " numeros eh de: " << soma << endl;                   
 }