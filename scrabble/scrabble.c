#include <ctype.h>
#include <stdio.h>
#include <string.h>

// to calculate the score of a given word
int calculateScore(char word[])
{
    int scores[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score = 0;
    int len = strlen(word);

    for (int i = 0; i < len; i++)
    {
        char c = toupper(word[i]);
        if (c >= 'A' && c <= 'Z')
        {
            score += scores[c - 'A'];
        }
    }

    return score;
}

int main()
{
    char word1[50], word2[50];

    printf("Player 1, enter your word: ");
    scanf("%s", word1);

    printf("Player 2, enter your word: ");
    scanf("%s", word2);

    // to calcualte scores for both players
    int score1 = calculateScore(word1);
    int score2 = calculateScore(word2);

    // to determine the winner
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
