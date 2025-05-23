#include "card.h"
#include "cash.h"
#include "Payment.h"
#include "System.h"
#include <iostream>
using namespace std;

int main(){

    cout<<"Welcome to our payment system!"<<endl;

    float prodPrice; 
    cout<<"Enter the product of your price: ";

    cin>>prodPrice; 

    float amountPaid;

    cout<<"Enter the amount you paid for it: ";

    cin>>amountPaid;

    cout<<"Are you paying with cash or card?";

    string cashOrCard; 

    getline (cin, cashOrCard);

    return 0;
}
