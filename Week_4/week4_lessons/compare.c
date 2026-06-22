#include <cs50.h>
#include <stdio.h>
#include <string.h>

/* int main(void){

    int i = get_int("i: ");
    int j = get_int("j: ");

    if(i== j){
        printf("Same\n");
    }else{
        printf("Different\n");
    }

} */

int main(void){

   char *s = get_string("s: ");
    char *t = get_string("t: ");
    
    /* if(s == t)==> this is wrong as s and t are at different addresses*/

    if(strcmp(s,t)==0){
        printf("Same\n");
    }else{
        printf("Different\n");
    }

}
