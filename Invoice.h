//
// Created by Pablo on 29/01/2018.
//
#include <iostream>
#include "Customer.h"
#include "InvoiceItems.h"


#ifndef POO_PDAVILA_A04_INVOICE_H
#define POO_PDAVILA_A04_INVOICE_H


class Invoice {
public:

    Invoice();
    Invoice(std::string id, int customerID, std::string name, double discount);
    Invoice(std::string id, Customer customer);

    Customer customer;

    void setCustomer(Customer &customer);

    std::string &getId();
    Customer &getCustomer();

    double getAmount();
    double getAmountAfterDiscount();

    std::string getCustomerName();

    bool addItem(std::string id, std::string description, int quantity, double unitPrice);
    bool addItem(InvoiceItems item);

    bool removeItem(std::string id);
    bool removeItem(InvoiceItems item);

    void updateItem(std::string id, std::string description);
    bool updateItem(std::string id, int quantity);
    bool updateItem(std::string id, double unitPrice);
    bool updateItem(InvoiceItems item);

    std::string toString();

private:
    std::string id;
    Customer customer;
    double amount = 0;
    InvoiceItems items[9];

    bool findItem();
    void recalculateAmount();



};


#endif //POO_PDAVILA_A04_INVOICE_H
