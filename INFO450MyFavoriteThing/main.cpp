//
//  main.cpp
//  INFO450MyFavoriteThing
//
//  Created by Agni Earasi on 11/2/19.
//  Copyright © 2019 Agni Earasi. All rights reserved.
//

#include <iostream>
#include <string>
#include "Motorcycle.h"
#include "MotorcycleList.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    
    cout<<"Welcome to the motorcycle favorite list."<<endl;
    MotorcycleList list;
    
    string input;

    
    while(true){
        cout<<endl;
        cout<<"What would you like to do (Add),(Delete),(Show),(Exit)?"<<endl;
        getline(cin,input);
        cout<<endl;
        if(input=="Add" || input =="add")
        {
            Motorcycle m;
            m.getMotorcycleInput();
            bool success =list.addMotorcycle(m);
            cout<<endl;
            if (success){
                cout<<"You've added: "<< endl;
                cout<<m<<endl;
            }
            else{
                cout<<"Thit motorcycle already exists."<<endl;
            }
        }
        
        else if(input=="Delete" || input =="delete")
        {
            string brand, model;
            cout<<"What is the brand?"<<endl;
            getline(cin,brand);
            cout<<"What is the model?"<<endl;
            getline(cin,model);
            
            Motorcycle m=list.deleteMotorcycle(brand, model);
            if (m.getBrand()=="")
            {
                cout<<"Motorcycle doesn't exist!"<<endl;
            }
            cout<<"You've deleted: "<< endl;
            cout<<m<<endl;
        }
        else if(input=="Show" || input =="show")
        {
            list.showMotorcycles();
        }
        else if(input=="Exit" || input =="exit")
        {
            return 0;
        }
        
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}
