#include <cs50.h>
#include <stdio.h>

/* int main(void){

    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");

    for(int i = 0; i < 7; i++){

        if(numbers[i] == n){
            printf("Found\n";);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
} */

int main(void){

    string strings[] = {"battleship", "boot", " cannon", " iron", "thimble", " top hat"};

    string s = get_string{"String: "};

    for(int i =0; i < 6; i++){
        if(strcmp(strings[i], s) == 0){
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}

int main(void){

    string names[] = {"Yulia", "David", "John"};
    string numbers[] = {"1234", "5432", "0987"};

    string name = get_string("Name: ");

    for(int i = 0; i < 3; i++){
        if(strcmp(names[i], name) == 0){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}

// ===================Better version of above code ==========================

//Inventing our own typen
typedef struct{
    string name;
    string number;
}person;

int main(void){

    person people[3];

    people[0].name = "David";
    people[0].number = "5432";

    people[1].name = "Yulia";
    people[1].number = "1234";

    people[2].name = "John";
    people[2].number = "0987";

    string name = get_string("Name: ");

    for(int i = 0; i < 3; i++){
        if(strcmp(people[i].name, name) == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
    
}