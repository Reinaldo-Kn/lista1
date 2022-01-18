#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string nome1,nome2,dis[3];
    int linha,coluna,i=0,k=0;
    float m1[4][3],m2[4][3];
    float mediaTurma[3],mediaInd1=0,mediaInd2=0;
        cout << "Insira o primeiro aluno" << endl;
         getline(cin,nome1);

         cout << "Insira o segundo aluno" << endl;
         getline(cin,nome2);

while(i < 2){
    for (coluna = 0; coluna < 3; coluna++){
         cout << "Insira a disciplina da coluna " << coluna +1 << " do aluno "<< nome1 << endl;
            cin >> dis[coluna];
        for (linha = 0; linha < 4; linha++){
            cout << "Insira a nota " << linha+1 << " da disciplina " << dis[coluna] << " do aluno "<< nome1 << endl;
            cin >> m1[linha][coluna];
        }
        
    }
    
    for (coluna = 0; coluna < 3; coluna++){
        for (linha = 0; linha < 4; linha++){
            cout << "Insira a nota " << linha+1 << " da disciplina " << dis[coluna] << " do aluno "<< nome2 << endl;
            cin >> m2[linha][coluna];
        }
        
    }
    i=3;
 }   

 while (k <2 ){
    for (coluna = 0; coluna < 3; coluna++){
        for(linha = 0; linha < 4; linha++ ){
            cout << m1[linha][coluna] << " na prova " << linha+1 << " de " << dis[coluna] << " do aluno " << nome1 << endl;
            mediaInd1 = mediaInd1 + m1[linha][coluna];
        }
        cout << "\n";
    }
      for (coluna = 0; coluna < 3; coluna++){
        for(linha = 0; linha < 4; linha++ ){
            cout << m2[linha][coluna] << " na prova " << linha+1 << " de " << dis[coluna] << " do aluno " << nome2 << endl;
            mediaInd2 = mediaInd2 + m2[linha][coluna];
        }
        cout << "\n";
    }
    k=2;
 }   
    for (linha = 0; linha < 4; linha ++){
        for(coluna = 0; coluna < 3;coluna++){
        mediaTurma[coluna] = mediaTurma[coluna] + m1[linha][coluna]+m2[linha][coluna];
       } 

    }
    cout.precision(2);
    cout <<"Media geral do aluno "<< nome1 <<" foi de " << mediaInd1/12 << endl;
    cout <<"Media geral do aluno "<< nome2 <<" foi de " << mediaInd2/12 << endl;
    
    for (int j = 0; j <3; j++){
        cout << "Media da turma para a materia "<< dis[j] << " foi de "<< mediaTurma[j]/8 << endl;
    }
    cout <<"Media geral da turma foi de " << ((mediaInd1/12)+(mediaInd2/12))/2 << endl;
}
