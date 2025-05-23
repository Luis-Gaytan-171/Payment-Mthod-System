#ifndef CASH_H
#define CASH_h
#include <string>
using namespace std;

class Cash{
    private: 
        float change; 

    public: 
        Cash();
        Cash(float, string, float)
        string getInfo(); 
        
};

#endif
