#include <stdio.h>
#include <string.h>
int main(){
    char matriz[3][1000];
    char string[3000];
    int espacos = 0;
    int largura;
    char aux[20][20];
    int contador = 0;
    for(int i = 0; i<3;i++){
    fgets(matriz[i], 1000, stdin);
    }
  
    //lê a matriz de char
    //agora a gente vai criar uma única string a partir disso
    for(int i=0;i<3;i++){
    strcat(string, matriz[i]);
    }
    largura = strlen(string);
    for(int i = 0; i < largura; i++){
        if(string[i] == '\n'){
            string[i] = 32;
        }
    }
    largura = strlen(string);
     printf("%s",string);
    for(int i = 0;string[i] != '\0';i++){
        if(string[i] == 32){
            espacos++;
        }
    }
int k = 0;
int l = 0;
for(int i = 0; string[i] != '\0';i++){
l = 0;
while(string[i] != 32){
aux[k][l] = string[i];
l++;
}
k++;
}
for(int n = 0; n < k; n++){
    for(int m = n+1; m < k;m++){
if(strcmp(aux[n],aux[m])!= 0){contador += 1;}
    }
}

printf("%d\n",contador);
    return 0;
}
