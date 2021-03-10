#include <string>
#include <iostream>
#include <vector>
#include<fstream>

class karaoke
{
    public:
    karaoke();
    
    void addPlayer();
    void supprPlayer();
    void meilleurScoreChanson();
    void meilleurTotalChanson(); 
    void meilleurMoyenne();
    

    private:

    std::string chansons[5];

    
};