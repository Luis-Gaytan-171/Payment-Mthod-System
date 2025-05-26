#ifndef CARD_H
#define CARD_H
#include <string>
#include "payment.h"
using namespace std;

class Card: public Payment{
    private: 
        string bank; 
        string cardNumber; 
    public: 
        Card();
        Card(float, string, float, string, string);
        string getInfo() const; 
        

};


#endif
