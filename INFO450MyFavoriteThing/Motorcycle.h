//
//  fave.h
//  INFO450MyFavoriteThing
//
//  Created by Agni Earasi on 11/6/19.
//  Copyright © 2019 Agni Earasi. All rights reserved.
//

#ifndef Motorcycle_h
#define Motorcycle_h
#include <string>
using namespace std;

class Motorcycle{
private:
    string brand;
    string category;
    string model;
    int cc;
    double cost;
    friend class MotorcycleList;

public:
    Motorcycle();
    Motorcycle(string b, string c, string m, int cc2, double co);
    void getMotorcycleInput();
    void showMotorcycle();
    void setBrand(string brand);
    void setCategory(string category);
    void setModel(string model);
    void setCC(int cc);
    void setCost(double cost);
    string getBrand();
    string getCategory();
    string getModel();
    int getCC();
    double getCost();
    friend ostream& operator<<(ostream& os, const Motorcycle& m);
};



#endif /* Motorcycle_h */
