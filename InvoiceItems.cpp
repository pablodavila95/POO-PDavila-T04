//
// Created by Pablo on 29/01/2018.
//

#include "InvoiceItems.h"
InvoiceItems::InvoiceItems() {
    this->id="";
    this->description="";
    this->quantity=0.0;
    this->unitPrice=0.0;
}

InvoiceItems::InvoiceItems(std::string id, std::string description, int quantity, double unitPrice) {
    this->id=id;
    this->description=description;
    this->quantity=quantity;
    this->unitPrice=unitPrice;
}

double InvoiceItems::getTotal() {
    return this->total;
}

std::string InvoiceItems::toString() {
    return this->id+description+std::to_string(quantity)+ unitPrice;
}

void InvoiceItems::setDescription(std::string descritpion) {
    this->description==descritpion;
}

int InvoiceItems::getQuantity() {
    return this->quantity;
}

double InvoiceItems::setUnitPrice(int quantity) {
    return this->quantity=quantity;
}

double InvoiceItems::setUnitPrice(double unitPrice) {
    return this->unitPrice=unitPrice;
}

std::string InvoiceItems::getId() {
    return this->id;
}

std::string InvoiceItems::getDescription() {
    return this->description;
}
