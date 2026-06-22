#include <cs50.h>
#include <ctype.h>
#include<math.h>
#include <string.h>
#include <stdio.h>

int letterCount(string letter);
int sentenceCount(string sentence);
int wordCount(string words);

int main(void){
    string sentence = get_string("Enter a sentence: ");

    int letters = letterCount(sentence);
    int sentences = sentenceCount(sentence);
    int words = wordCount(sentence);
 

    float L = ((float) letters / words) * 100.0;
    float S = ((float) sentences / words) * 100.0;

    // Formula to calculate reading level
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if(index < 1){
        printf("Before Grade 1\n");
    }else if(index >= 16){
        printf("Grade 16+\n");
    }else{
        // Convert the answer from index into an integer, round it off and display the reading level
        printf("Grade %i\n", (int) round(index));
    }
}

int letterCount(string letter){

    int count = 0;

    for(int i = 0, len = strlen(letter) ; i < len; i++){
        if(isalpha(letter[i])){
            count++;
        }
    }
    return count;
}

int sentenceCount(string sentence){

    int count = 0;

    for(int i = 0, len = strlen(sentence); i < len; i++){
        if(sentence[i] == '.' || sentence[i] == '!' ||sentence[i] == '?'){
            count++;
        }
    }
    return count;
}

int wordCount(string words){

    int count = 0;

    for(int i = 0, len = strlen(words); i < len; i++){
        // Condition to check if current character is an alphabetical character AND (i == 0) it is the first letter OR the previous character was not an alphabetical character
        if(isalpha(words[i]) && (i == 0 || !isalpha(words[i - 1]))){
            count++;
        }
    }
    return count;
}


/*
 - We use words[ i - 1] to check the previous character. It allows for us to be able to be able to go backwards
*/