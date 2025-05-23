#include "card.h"
#include "cash.h"
#include "Payment.h"
#include "System.h"
#include <iostream>
using namespace std;

int main(){

    string date= "22/05/2025";

    cout<<"Welcome to our payment system!"<<endl;

    float prodPrice; 
    cout<<"Enter the price of your product: ";

    cin>>prodPrice; 

    float amountPaid;

    cout<<"Enter the amount you paid for it: ";

    cin>>amountPaid;

    cout<<"Are you paying with cash or card? ";

    string cashOrCard; 

    getline (cin >> std::ws, cashOrCard);
 

    if (cashOrCard=="card" || cashOrCard=="Card"|| cashOrCard =="CARD"){

        cout<<"Enter the name of your bank: "<<endl;
        string bankName;
        getline (cin>> ws, bankName);
        cout<<bankName<<endl; 
        cout << "Enter your card number: ";
        string cardNum;
        getline (cin>>ws, cardNum);
        Card card(amountPaid,date,prodPrice, bankName, cardNum);
        System system;
        system.addCardPayment(card);

        cout<<card.getInfo()<<endl;
   

    }

    else if (cashOrCard=="cash" || cashOrCard=="Cash"|| cashOrCard =="CASH"){

        Cash cash(amountPaid, date, prodPrice);
        System system; 
        system.addCashPayment(cash);

        cout<<cash.getInfo()<<endl; 

    }

    


    return 0;
}
