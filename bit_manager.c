#include <stdio.h> 

int main(){
    unsigned char dados = 0, mascara = 1, bit = 0;
    
    printf("Olá ziqui,\nDiz um número: ");
    scanf("%hhu", &dados);

    printf("Qual é o bit que queres ver?: ");
    scanf("%hhu", &bit);


    mascara = mascara<<(bit-1);
    
    dados = mascara&dados;

    if ((mascara & dados) == mascara) {
        printf("o bit %dº está ligado", bit);
        return 0;
    } 
    else {
        printf("o bit %dº está desligado", bit);      
        return 0;  
    }
    

    return 0;

}
