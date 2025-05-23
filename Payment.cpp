#include "Payment.h"
#include <sstream>

Payment::Payment() : amount(0), date(""), productPrice(0) {}

Payment::Payment(float amount, const string& date, float productPrice)
    : amount(amount), date(date), productPrice(productPrice) {}

string Payment::getInfo() const {
    stringstream ss;
    ss << "Amount: " << amount << "\nDate: " << date << "\nProduct Price: " << productPrice;
    return ss.str();
}

void Payment::setPrice(float price) {
    productPrice = price;
}

string Payment::getDate() const {
    return date;
}

string Payment::getDate(bool formatted) const {
    if (formatted) {
        // Aquí podrías formatear la fecha, por ejemplo a dd/mm/yyyy
        // Por simplicidad, regresamos la misma fecha
        return date;
    }
    return date;
}
