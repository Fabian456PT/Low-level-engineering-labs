#include <stdio.h>

void print_command(unsigned char digit, char *buffer){
    unsigned char mask = 1;

    if ((digit & 4) == 4) {
        buffer[0] = 'r';
    }
    else {
        buffer[0] = '-';        
    }

    if ((digit & 2) == 2) {
        buffer[1] = 'w';
    }
    else {
        buffer[1] = '-';
    }

    if ((digit & 1) == 1) {
        buffer[2] = 'x';    
    }
    else {
        buffer[2] = '-';        
    }
}

int main(){

    unsigned char user = 0, group = 0, others = 0;

    int number;
    char buffer[10] = "\0";

    printf("Choose a number with 3 digits (0-7): ");
    scanf("%o", &number);

    //defining the user digit
    user = number >> 6;
    if (user > 7) {
        printf("Number out of range\n");
        return 0;
    }

    //defining the group digit
    group = (number >> 3) & 7;
    if (group > 7) {
        printf("Number out of range\n");
        return 0;
    }

    //defining the others digit
    others = number & 7;
    if (others > 7) {
        printf("Number out of range\n");
        return 0;
    }

    print_command(user, &buffer[0]);
    print_command(group, &buffer[3]);
    print_command(others, &buffer[6]);

    printf("%s\n", buffer);

    return 0;
}