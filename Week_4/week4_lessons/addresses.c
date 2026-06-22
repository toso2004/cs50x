#include <stdio.h>

/* int main(void){

    int n = 50;// n is an int and takes up 4 bytes in memory

    int *p = &n; // asking whats the address of n and storing it in the pointer p. the int declaration says the pointer points to an integer variable, n.
    printf("%p\n", p) // gives the address
    printf("%i\n", *p); // dereferencing => goes to that address. Output is 50

   // printf("%p\n", &n);
} */

// ---------------------------
int main(void){
    //string s = "HI!"; // same as char *s = "HI!"
    char *s = "HI!";

    printf("%c\n", *s); //Go to the first characater of s => s[0]
    printf("%c\n", *(s + 1)); // s[1]
    printf("%c\n", *(s + 2));// s[2]

    /* printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]); */

    /* printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]); */
}
