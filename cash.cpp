#include "cash.h"
using namespace std; 

Cash::Cash(){

    amount= 0;
    date= "";
    productPrice=0;
    change=0;
}

Cash::Cash(float amount_, string date_, float productPrice_){


    amount= amount_;
    date= date_;
    productPrice=productPrice_;
    change=amount_-productPrice_;

}

string Cash::getInfo() const{

    return Payment::getInfo()+ " Cash payment of "+ to_string(amount) + " Change: "+ to_string(change);
}
