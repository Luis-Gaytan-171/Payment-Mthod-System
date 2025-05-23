#include "cash.h"

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

string Cash::getInfo(){

    return getInfo()+ "Cash payment of "+ amount + "Change: "+ change;
}
