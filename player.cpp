#include "player.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

player::player()
{
    pseudo = "test";

    meilleursScores[0] = 50;  //Remplissage de la première case
    meilleursScores[1] = 78;  //Remplissage de la deuxième case
    meilleursScores[2] = 85;   //Remplissage de la troisième case
    meilleursScores[3] = 75;   //Remplissage de la quatrième case
    meilleursScores[4] = 78;   //Remplissage de la cinquième case
}
int player::moyenne()
    {
        int moyenne = 0;
        moyenne = meilleursScores[0] + meilleursScores[1] + meilleursScores[2] + meilleursScores[3] + meilleursScores[4];
        moyenne = moyenne / 5;
        cout << "Votre moyenne est :" << moyenne << " /100" << endl;
        return moyenne;
    }
int player::scoreTotal()
    {
        int scoreTotal = 0;
        scoreTotal = meilleursScores[0] + meilleursScores[1] + meilleursScores[2] + meilleursScores[3] + meilleursScores[4];
        cout << "Votre score total est :" << scoreTotal << " /100" << endl;
        return scoreTotal;
    }
void player::meilleurChanson()
    {
        if (meilleursScores[0] >= meilleursScores[1] && meilleursScores[0] >= meilleursScores[2] && meilleursScores[0] >= meilleursScores[3] && meilleursScores[0] >= meilleursScores[4])
        {
            numChanson = 1;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[0] << " /100" << endl;
        }
        else if (meilleursScores[1] >= meilleursScores[0] && meilleursScores[1] >= meilleursScores[2] && meilleursScores[1] >= meilleursScores[3] && meilleursScores[1] >= meilleursScores[4])
        {
            numChanson = 2;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[1] << " /100" << endl;
        }
        else if (meilleursScores[2] >= meilleursScores[0] && meilleursScores[2] >= meilleursScores[1] && meilleursScores[2] >= meilleursScores[3] && meilleursScores[2] >= meilleursScores[4])
        {
            numChanson = 3;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[2] << " /100" << endl;
        }
        else if (meilleursScores[3] >= meilleursScores[0] && meilleursScores[3] >= meilleursScores[2] && meilleursScores[3] >= meilleursScores[1] && meilleursScores[3] >= meilleursScores[4])
        {
            numChanson = 4;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[3] << " /100" << endl;
        }
        else if (meilleursScores[4] >= meilleursScores[0] && meilleursScores[4] >= meilleursScores[2] && meilleursScores[4] >= meilleursScores[3] && meilleursScores[4] >= meilleursScores[1])
        {
            numChanson = 2;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[4] << " /100" << endl;
        }
        else
        {
            cout << "Vous n'avez pas jouer asser de parties" << endl;
        }
    }
void player::pireChanson ()
    {
        if (meilleursScores[0] <= meilleursScores[1] && meilleursScores[0] <= meilleursScores[2] && meilleursScores[0] <= meilleursScores[3] && meilleursScores[0] <= meilleursScores[4])
        {
            numChanson = 1;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[0] << " /100" << endl;
        }
        else if (meilleursScores[1] <= meilleursScores[0] && meilleursScores[1] <= meilleursScores[2] && meilleursScores[1] <= meilleursScores[3] && meilleursScores[1] <= meilleursScores[4])
        {
            numChanson = 2;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[1] << " /100" << endl;
        }
        else if (meilleursScores[2] <= meilleursScores[0] && meilleursScores[2] <= meilleursScores[1] && meilleursScores[2] <= meilleursScores[3] && meilleursScores[2] <= meilleursScores[4])
        {
            numChanson = 3;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[2] << " /100" << endl;
        }
        else if (meilleursScores[3] <= meilleursScores[0] && meilleursScores[3] <= meilleursScores[2] && meilleursScores[3] <= meilleursScores[1] && meilleursScores[3] <= meilleursScores[4])
        {
            numChanson = 4;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[3] << " /100" << endl;
        }
        else if (meilleursScores[4] <= meilleursScores[0] && meilleursScores[4] <= meilleursScores[2] && meilleursScores[4] <= meilleursScores[3] && meilleursScores[4] <= meilleursScores[1])
        {
            numChanson = 2;
            cout << "Votre meilleur chanson est la " << numChanson << " ère avec un score de" << meilleursScores[4] << " /100" << endl;
        }
        else
        {
            cout << "Vous n'avez pas jouer asser de parties" << endl;
        }
    }


