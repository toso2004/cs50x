#include <stdio.h>

/* int main(void){

    int n;
    printf("n: ");
    scanf("%i", &n);// scan user input(read input from user) --> scan an integer and put it in the address of n
    printf("n: %i\n", n);
} */

// This program doesn't know how much memory the string may need
// DO NOT USE!!
int main(void){

    char *s;
    printf("s: ");
    scanf("%s", s);// read a string from user and put in s(no need for & because s is already an address of a string)
    printf("s: %s\n", s);
}
