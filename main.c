/*
    Wordle
    Array of 5 letter words
    Player has 6 tries
    Pick a random word form the array
    Print the word on the screen
    Ask to enter a word
    Check entered word to see if it contains any of the same letters in the random word
    If the letter is in the correct spot it turns green or is marked in some way
    If the lerrer is in the random word but in the wrong spot it turns yellow or is marked in some way
    Game ends when the player guesses the word correctly or after 6 tries
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tries = 6;
    char words [2] [6] = {"water", "space"}; 
    char userWord[6] = "";
    srand(time(0));
    int randomNum = rand() % 2;

    printf("Word is: ");
    printf("%s\n", words[randomNum]);

    printf("Enter a word: \n");
    scanf("%s", userWord);
    checkWord(words[randomNum], userWord);
    return 0;
}

void checkWord(char word[], char userWord[]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (word[i] == userWord[j]) {
                printf("match: ");
                printf("%c\n", userWord[j]);
            }
        }
    }
}