#include "card.h"
using namespace std; 

Card::Card(){
    amount=0;
    date= "";
    productPrice= 0;
    bank= "";
    cardNumber= "";
}

Card::Card(float amount_, string date_, float productPrice_, string bank_, string cardNumber_){
    amount= amount_;
    date=date_;
    productPrice=productPrice_; 
    bank= bank_;
    cardNumber= cardNumber_;
}

string Card::getInfo(){

    return getInfo() + "Payment of $"+ amount + "processed via "+ bank + "with credit card number "+ cardNumber + "\n";
}
