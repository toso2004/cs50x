#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int getScore(string word);
int main(void){

     // Prompt the user for two words
     string answer1 = get_string("Player1 word: ");
     string answer2 = get_string("Player2 word: ");

    // Compute the score of each word
    int score1 = getScore(answer1);
    int score2 = getScore(answer2);

    // Print the winner
    if(score1 > score2){
        printf("Player1 wins!\n");
    }
    else if(score1 < score2){
        printf("Player2 wins!");
    }else{
        printf("Its a tie\n");
    }
}

int getScore(string word){

    int score = 0;

    for(int i = 0, len = strlen(word); i < len; i++){

        if(isupper(word[i])){
            score += POINTS[word[i]- 'A'];
        }

        else if(islower(word[i])){
            score += POINTS[word[i]- 'a'];
        }
    }

    return score;
}

/*
NOTES

- The get score function here is used to calculate the score
- How Does It Work??
    - We have an array of POINTs, which basically describe the score for each letter
    - Using ASCII knowledge we are able to relate each point in the array to its corresponding letter
    - This achieved by calculating the position of the word => POINTS[word[i] - 'A']=> what this does is that it will give us the position of entered letter in the POINTS array
    - e.g if the word was We, we would have POINTS['W' - 'A'] which is the same as POINTS[87 - 65] = POINTS[22]. POINTS[22] = 4. the same thing is done for the letter 'e' except this time we use lowercase 'a'
        POINTS['e' - 'a'] = POINTS[101 - 97] = POINTS[4] = 1
    - NOTE: arrays are zero indexed in this case we have 26 letters but we start the count from 0 thats why the letter 'e' is at position 4 and not 5
*/


