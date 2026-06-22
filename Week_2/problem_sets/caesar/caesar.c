#include <cs50.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int only_digits( string text);
char rotate(char c, int key);

int main(int argc, string argv[]){

    if(argc != 2){
        printf("Usage: ./caesar key");
        return 1;
    }

    if(!only_digits(argv[1])){
        printf("Usage: ./caesar key");
        return 1;
    }

    int key = atoi(argv[1]);
    string plaintext = get_string("Text: ");

    int len = strlen(plaintext);
    char ciphertext[len];


    for(int i = 0; i < len; i++){
        ciphertext[i] = rotate(plaintext[i], key);
    }

    printf("Ciphertext: %s\n", ciphertext);

    return 0;

}

int only_digits( string text){

    for(int i = 0, len = strlen(text); i++){
        if(!isdigit(text)){
            return false;
        }
    }
    return true;
}

char rotate(char c, int key){

    if(isalpha(c)){
        if(isupper(c)){
            c = ((c - 'A') + key) % 26 + 'A';
        }else if(islower(c)){
            c = ((c - 'a') + key) % 26 + 'a';
        }
    }
}