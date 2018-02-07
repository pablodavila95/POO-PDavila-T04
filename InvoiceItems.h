//
// Created by Pablo on 29/01/2018.
//
#include <iostream>

#ifndef POO_PDAVILA_A04_INVOICEITEMS_H
#define POO_PDAVILA_A04_INVOICEITEMS_H


class InvoiceItems {
private:
    InvoiceItems();

    std::string id, description;
    int quantity;
    double unitPrice;
    double total=unitPrice*quantity;

public:

    InvoiceItems(std::string id, std::string description, int quantity, double unitPrice);
    double getTotal();
    std::string toString ();
    std::string getId();
    std::string getDescription();
    void setDescription(std::string descritpion);
    int getQuantity();
    double setUnitPrice(int quantity);
    double setUnitPrice(double unitPrice);



};



#endif //POO_PDAVILA_A04_INVOICEITEMS_H
