#ifndef CARD_H
#define CARD_H
#include <string>
using namespace std;

class Card{
    private: 
        string bank; 
        string cardNumber; 
    public: 
        Card();
        Card(float, string, float, string, string);
        string getInfo(); 
        

};


#endif
