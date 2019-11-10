//
//  MotorcycleList.cpp
//  INFO450MyFavoriteThing
//
//  Created by Agni Earasi on 11/10/19.
//  Copyright © 2019 Agni Earasi. All rights reserved.
//

#include <string>
#include <iostream>
#include "MotorcycleList.h"
#include "Motorcycle.h"


using namespace std;


MotorcycleList::MotorcycleList()
{
    list = vector<Motorcycle>();
}

bool MotorcycleList::addMotorcycle(Motorcycle m)
{
    int index = getMotorcycleIndex(m.getBrand(),m.getModel());
    if (index == -1){
        list.push_back(m);
        return true;
    }
    return false;
}

Motorcycle MotorcycleList::deleteMotorcycle(string b, string m)
{
    int index = getMotorcycleIndex(b,m);
    if (index != -1)
    {
        Motorcycle deletedMotorcycle = list.at(index);
        list.erase(list.begin()+index);
        return deletedMotorcycle;
    }
    return Motorcycle();
}

void MotorcycleList::showMotorcycles()
{
    cout<<"Your favorite Motorcycles are: "<<endl;
    for (auto i = list.begin(); i != list.end(); ++i)
    {
        cout<<endl;
        cout<<(*i)<<endl;

    }
}

int MotorcycleList::getMotorcycleIndex(string b, string m)
{
    for (int i=0; i<list.size(); i++)
    {
        if (list[i].getBrand() == b && list[i].getModel() == m)
        {
            return i;
        }
    }
    return -1;
}
