//
//  Motorcycle.cpp
//  INFO450MyFavoriteThing
//
//  Created by Agni Earasi on 11/10/19.
//  Copyright © 2019 Agni Earasi. All rights reserved.
//

#include "Motorcycle.h"
#include <string>
#include <iostream>
using namespace std;

Motorcycle :: Motorcycle()
{
    brand= "";
    category= "";
    model= "";
    cc= 0;
    cost= 0;
}

Motorcycle::Motorcycle(string b, string c, string m, int cc2, double co)
{
    brand= b;
    category= c;
    model= m;
    cc= cc2;
    cost= co;
}

void Motorcycle :: getMotorcycleInput()
{
    cout<< "What is the brand?"<<endl;
    getline(cin,brand);
    cout<< "What is the category?"<<endl;
    getline(cin,category);
    cout<< "What is the model"<<endl;
    getline(cin,model);
    cout<<"What is the cc"<<endl;
    cin>>cc;
    cin.ignore();
    cout<< "What is the cost"<<endl;
    cin>>cost;
    cin.ignore();
    
    
}

void Motorcycle::showMotorcycle()
{
    cout<< "brand: "<<brand<<endl;
    cout<< "category: "<<category<<endl;
    cout<< "model: "<<model<<endl;
    cout<< "cc: "<<cc<<endl;
    cout<< "cost: "<<cost<<endl;
}

void Motorcycle::setBrand(string b)
{
    brand = b;
}
void Motorcycle::setCategory(string c)
{
    category = c;
}
void Motorcycle::setModel(string m)
{
    model= m;
}
void Motorcycle::setCC(int cc2)
{
    cc=cc2;
}
void Motorcycle::setCost(double co)
{
    cost=co;
}
string Motorcycle::getBrand()
{
    return brand;
}
string Motorcycle::getModel()
{
    return model;
}
string Motorcycle::getCategory()
{
    return category;
}
int Motorcycle::getCC()
{
    return cc;
}
double Motorcycle::getCost()
{
    return cost;
}

ostream& operator<<(ostream& os, const Motorcycle& m)
{
    
    os<< "brand: "<<m.brand<<endl;
    os<< "category: "<<m.category<<endl;
    os<< "model: "<<m.model<<endl;
    os<< "cc: "<<m.cc<<endl;
    os<< "cost: "<<m.cost;
    
    return os;
}
