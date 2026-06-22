#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* int main(void){

    char *s = get_string("s: ");

    //char *t = s;

    // t stores the address of the chunk of memory
    char *t = malloc(strlen(s) + 1);// +1 to account for the null character in memory
    if(t == NULL){
        return 1;
    }

    for(int i = 0, n =strlen(s); i <= n; i++) // i <= n to copy the null character as well
    {

        t[i] = s[i];
    }

    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}
 */

 int main(void){

    char *s = get_string("s: ");

    //char *t = s;

    // t stores the address of the chunk of memory
    char *t = malloc(strlen(s) + 1);// +1 to account for the null character in memory
    if(t == NULL){
        return 1;
    }

    strcpy(t, s);

    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); // free up memory so that it can be reused
}
