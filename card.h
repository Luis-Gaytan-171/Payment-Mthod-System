#ifndef CASH_H
#define CASH_H
#include <string>
#include "Payment.h"
using namespace std;

class Cash: public Payment{
    private: 
        float change; 

    public: 
        Cash();
        Cash(float, string, float);
        string getInfo() const; 
        
};

#endif
