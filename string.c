#include <stdio.h>
#include <string.h>
int main(){
    char matriz[3][1000];
    char string[3000];
    int tamanho[3];
    char palavras[20][20];
    int largura;
    int num_diff;
    for(int i = 0; i<3;i++){
    fgets(matriz[i], 1000, stdin);
    }
    for(int i=0;i<3;i++){
        tamanho[i] = strlen(matriz[i]);
    }
    //lê a matriz de char
    //agora a gente vai criar uma única string a partir disso
    for(int i=0;i<3;i++){
    strncat(string, matriz[i],tamanho[i]);
    }
    largura = strlen(string);



    printf("%s\n%d",string,largura);
    return 0;
}