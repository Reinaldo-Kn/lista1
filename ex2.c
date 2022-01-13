#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n,valor,i,maior=0,menor;
    int *v;
    printf("Digite tamanho do vetor: ");
    scanf("%d", &n);
    v = (int *)malloc(n * sizeof(int));
    for (i = 1; i < n+1; ++i) {
        printf("Digite o valor da posicao %d \n",i);
        scanf("%d",&valor);
            if (valor == -1){
                printf ("Operacao encerrada \n");
                break;
            }
         v[i] = valor;
    }
    for (i = 1; i < n+1; ++i) {
        printf("%d ", v[i]);
    }
    for ( i = 1; i < n+1; i ++){
            if (v[i] > maior)
            {
                maior = v[i];
            }
    }
     for ( i = 1; i < n+1; i ++){
            if (v[i] < menor)
            {
                menor = v[i];
            }
    }
    printf("\n\n O maior numero do vetor eh: %d",maior);
    printf("\n\n O menor numero do vetor eh: %d",menor);
    printf("\n");
    free(v);
    return 0;
}
