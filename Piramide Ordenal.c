#include <stdio.h>
#include <stdlib.h>

void main(){
    int linhas, i, j;
    printf("Digite a quantidade de linhas que deseja em sua pirâmide: ");
    scanf("%d", &linhas);

    for(i = 1; i <= linhas; i++){
        for(j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
}
}