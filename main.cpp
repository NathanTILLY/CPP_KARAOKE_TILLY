#include "player.h"
#include "player.cpp"
#include "karaoke.h"
#include "karaoke.cpp"
#include <string>
#include <iostream>
#include <vector>

int main (){
    player test1("0",56,71,98,54,62);
    player test2("1",91,73,56,65,98);
    player test3("2",74,52,64,75,91);
    player test4("3",64,63,99,75,96);
    player test5("4",83,78,88,64,69);

    cout<< "0 :" << endl;
    test1.moyenne();
    test1.scoreTotal();
    test1.meilleurChanson();
    test1.pireChanson();

    cout<< "1 :" << endl;
    test2.moyenne();
    test2.scoreTotal();
    test2.meilleurChanson();
    test2.pireChanson();

    cout<< "2 :" << endl;
    test3.moyenne();
    test3.scoreTotal();
    test3.meilleurChanson();
    test3.pireChanson();

    cout<< "3 :" << endl;
    test4.moyenne();
    test4.scoreTotal();
    test4.meilleurChanson();
    test4.pireChanson();

    cout<< "4 :" << endl;
    test5.moyenne();
    test5.scoreTotal();
    test5.meilleurChanson();
    test5.pireChanson();


    return 1;

}