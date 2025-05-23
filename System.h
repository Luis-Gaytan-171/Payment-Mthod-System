#ifndef SYSTEM_H
#define SYSTEM_H
#include <vector>
#include <string>
#include "Card.h"
#include "Cash.h"


class System {
private:
    vector<Cash> paymentCash;
    vector<Card> paymentCard;
public:
    System();

    string getInfo() const;
    void addCardPayment(const Card& cardPayemnt);
    void addCashPayment(const Cash& cashPayemnt);
};

#endif //SYSTEM_H
