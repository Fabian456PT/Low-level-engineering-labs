#include <stdio.h> 

int main(){
    unsigned char dados = 0, mascara = 1, bit = 0;
    
    printf("Olá ziqui,\nDiz um número: ");
    scanf("%hhu", &dados);

    for (unsigned char i = 0; i <= 8; i++) {
        if ((mascara & dados) == 1) {
            printf("o bit %d está ligado", bit);
        }
        
        
    }




    printf("O número: %d\n", dados);
    printf("O número: %x\n", dados);


    return 0;

}
