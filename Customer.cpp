//
// Created by Pablo on 29/01/2018.
//

#include "Customer.h"
#include <iostream>

int Customer::getId()  {
    return id;
}

std::string Customer::getName()  {
    return name;
}

double Customer::getDiscount()  {
    return discount;
}

void Customer::setDiscount(double discount) {
    this->discount=discount;
}

void Customer::Customer(int id, std::string name, double discount) {
    Customer::id = id;
    Customer::name = name;
    Customer::discount = discount;
}

std::string Customer::toString(std::string name, int id) {
    // Here we will output a string with name (ID)

    //getName();
    //getId();
    //std::string nameString = name + " (" + id + ")";
    //return nameString;
    return this->name + "("+std::to_string (id)+")");
}

Customer::Customer() {
    this->id=id;
    this->name="";
    this->discount=0.0;
}
