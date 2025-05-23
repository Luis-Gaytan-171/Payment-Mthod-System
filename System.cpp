#include "System.h"

System::System() {

}

string System::getInfo() const {
    string info = "Payment by Cash:\n";
    for (const Cash& cash : paymentsCash) {
        info += cash.getInfo("") + "\n";  // Asumiendo que getInfo recibe string
    }

    info += "Payments by Card:\n";
    for (const Card& card : paymentsCard) {
        info += card.getInfo() + "\n";
    }

    return info;
}

void System::addCardPayment(const Card& cardPayment) {
    paymentsCard.push_back(cardPayment);
}

void System::addCashPayment(const Cash& cashPayment) {
    paymentsCash.push_back(cashPayment);
}
