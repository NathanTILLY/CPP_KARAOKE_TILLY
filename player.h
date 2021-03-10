#include <string>
#include <iostream>
#include <vector>
#include<fstream>

class player
{
    public:
    player();
    player(std::string nom, int scoreun, int scoredeux, int scoretois, int scorequatre,int scorecinq);
    int moyenne();
    int scoreTotal();
    void meilleurChanson ();
    void pireChanson ();

    private:

    int score1;
    int score2;
    int score3;
    int score4;
    int score5;
    std::string pseudo;
    int meilleursScores[5];
    int score;
    int numChanson;

    
};