//
//  MotorcycleList.h
//  INFO450MyFavoriteThing
//
//  Created by Agni Earasi on 11/10/19.
//  Copyright © 2019 Agni Earasi. All rights reserved.
//

#ifndef MotorcycleList_h
#define MotorcycleList_h
#include <string>
#include <vector>
#include "Motorcycle.h"

using namespace std;

class MotorcycleList
{
private:
    vector<Motorcycle> list;
public:
    MotorcycleList();
    bool addMotorcycle(Motorcycle m);
    void showMotorcycles();
    Motorcycle deleteMotorcycle(string b, string m);
    int getMotorcycleIndex(string b, string m);
    
};


#endif /* MotorcycleList_h */
