  #include <iostream>

  using namespace std;

  void ordena(int *v,int tamanho){
        for(int i=0;i<tamanho-1;i++){
            int min=i;
            for(int j=i;j<tamanho-1;j++){
                if(v[j]<v[min]){
                    min=j;
            }
            }
            swap(v[i],v[min]);

        }
          for(int i=0;i<tamanho;i++){
            cout<<v[i]<<endl;
        }
}

  int main(){
      int size,*vetor,valor;
        cout << " Qual tamanho do vetor? " << endl;
        cin >> size;
        vetor = (int *)malloc(size * sizeof(int));
 
        for (int i = 0; i < size; i ++){
            cout << " Digite o valor da posicao " << i+1 << endl;
            cin >> valor;
            vetor[i] = valor;
        } cout << "\n\n"; 
         ordena( vetor,size);
         
        
         return 0;
  }

  