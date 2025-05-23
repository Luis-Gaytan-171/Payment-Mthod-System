#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Payment {
protected:
    float amount;
    string date;
    float productPrice;

public:
    Payment();
    Payment(float amount, const string& date, float productPrice);

    virtual string getInfo() const;
    void setPrice(float price);
    string getDate() const;
    string getDate(bool) const;

    virtual ~Payment()= default;


};
#endif //PAYMENT_H
