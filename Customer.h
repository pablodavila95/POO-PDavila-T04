//
// Created by Pablo on 29/01/2018.
//
#include <iostream>

#ifndef POO_PDAVILA_A04_CUSTOMER_H
#define POO_PDAVILA_A04_CUSTOMER_H


class Customer {
private:
    int id;
    std::string name;
    double discount;
public:
    //Getters
    int getId();
    std::string getName();
    double getDiscount();

    //Setters
    void setDiscount(double discount);

    //Others
    Customer(int id, std::string name, double discount);
    Customer();


    std::string toString(std::string name, int id);
};


#endif //POO_PDAVILAA-A04_CUSTOMER_H
