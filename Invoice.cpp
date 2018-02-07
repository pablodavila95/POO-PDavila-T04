//
// Created by Pablo on 29/01/2018.
//

#include "Invoice.h"

std::string &Invoice::getId() {
    return id;
}

Customer &Invoice::getCustomer() {
    return customer;
}

double Invoice::getAmount() {
    return amount;
}

Invoice::Invoice(std::string id, int customerID, std::string name, double discount) {
    this->id=id;
}
Invoice::Invoice() {
    this->id="";
    this->customer;
    this->amount=0;
    this->items= [];
}

void Invoice::setCustomer(Customer &customer) {
    Invoice::customer = customer;
}

Invoice::Invoice(std::string id, Customer customer) {
    this->id=id;
    this->customer=customer;
}

bool Invoice::findItem() {
    return false;
}

void Invoice::recalculateAmount() {
    getAmount();
}

double Invoice::getAmountAfterDiscount() {
    return 0;
}

std::string Invoice::getCustomerName() {
    return std::__cxx11::string();
}

bool Invoice::addItem(std::string id, std::string description, int quantity, double unitPrice) {
    this->id=id;
    this->description=description;
    this->quantity=quantity;
    recalculateAmount();
    return true;
}

bool Invoice::addItem(InvoiceItems item) {
    this->item=false;
}

bool Invoice::removeItem(std::string id) {
    this->item=false;
}

bool Invoice::removeItem(InvoiceItems item) {
    this->item=false;
}

void Invoice::updateItem(std::string id, std::string description) {
    recalculateAmount();
}

bool Invoice::updateItem(std::string id, int quantity) {
    recalculateAmount();
    return true;
}

bool Invoice::updateItem(std::string id, double unitPrice) {
    recalculateAmount();
    return true;
}

bool Invoice::updateItem(InvoiceItems item) {
    recalculateAmount();
    return true;
}

std::string Invoice::toString() {
    return std::__cxx11::string();
}
