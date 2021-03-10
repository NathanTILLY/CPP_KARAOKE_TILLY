#include <string>
#include <iostream>
#include <vector>
#include<fstream>

class player
{
    public:
    player();
    
    int moyenne();
    int scoreTotal();
    void meilleurChanson ();
    void pireChanson ();

    private:

    std::string pseudo;
    int meilleursScores[5];
    int score;
    int numChanson;

    
};