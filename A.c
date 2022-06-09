#include <stdio.h>
#include <string.h>
int main(){
    char matriz[3][1000];
    char string[3000];
    int tamanho[3];
    int espacos = 0;
    int largura;
    int endereco[100];
    char palavra[20][20];
    int k = 0;
    int n = 0;
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

    for(int i = 0; i <largura; k++){
        while(string[i] != 32){
            palavra[k][i] = string[i];
            i++;
        }
        i++;
    }
    for(int i = 0;i<largura;i++){
        if(string[i] == 32){
            espacos++;
        }
    }
    n = espacos + 6;
    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n;j++){
        if(strcmp(palavra[i],palavra[j]) == 0){n--;};
        }
    }
printf("%d\n",n);
    return 0;
}