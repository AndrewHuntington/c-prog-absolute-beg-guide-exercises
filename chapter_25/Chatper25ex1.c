#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    int ctr = 0;
    char ans;

    char *movies[9] = {
        "Amour",
        "Beasts of the Southern Wild",
        "Django Unchained",
        "Life of Pi",
        "Lincoln",
        "Silver Linings Playbook",
        "Zero Dark Thirty",
        "Argo",
        "Les Miserables"};

    int movieratings[9];

    char *tempmovie = "This will be used to sort rated movies";
    int outer, inner, didSwap, temprating;

    printf("\n\nTime to rate the movies!\n\n");
    for (i = 0; i < 9; i++)
    {
        printf("\nDid you see %s? (Y/N): ", movies[i]);
        scanf(" %c", &ans);

        if ((toupper(ans)) == 'Y')
        {
            printf("\nWhat was your rating on a scale of 1-10: ");
            scanf(" %d", &movieratings[i]);
            ctr++;
            continue;
        }
        else
        {
            movieratings[i] = -1;
        }
    }

    for (outer = 0; outer < 8; outer++)
    {
        didSwap = 0;
        for (inner = outer; inner < 9; inner++)
        {
            if (movieratings[inner] > movieratings[outer])
            {
                tempmovie = movies[inner];
                temprating = movieratings[inner];
                movies[inner] = movies[outer];
                movieratings[inner] = movieratings[outer];
                movies[outer] = tempmovie;
                movieratings[outer] = temprating;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }

    printf("\n\n** Your Movie Ratings for the 2012 Oscar Contenders **\n");
    for (i = 0; i < ctr; i++)
    {
        printf("%s rated a %d!\n", movies[i], movieratings[i]);
    }

    return 0;
}