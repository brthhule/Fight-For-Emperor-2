#ifndef PARTICIPANTS_H
#define PARTICIPANTS_H

#include <iostream>
#include <vector>

#include "CommanderProfile.h"
#include "Provinces.h"

using namespace std;

class Participants
{
public:
                    //constructors
    Participants();
    Participants(int pIndex);

    //Capital stuff
        //Accessors
    int getCapitalCoordinate(int whichCoordinate);
        //Mutators
    void updateCapitalCoordinates(int whichCoordinate, int value);

    //Commander stuff
        //Accessors
    int howManyCommanders();
    int findCommanderIndex(string commanderName);
    void addNewCommander();
        //Mutators
        
    //Province stuff
        //Accessors
    int howManyProvinces();
    int findProvinceIndexWithCoordinates(int provinceXCoordinate, int provinceYCoordinate);
        //Mutators
    void addProvince(int xCoordinate, int yCoordinate);

    //Public variables
    int* participantCapitalX = &capitalCoordinates[0];
    int* participantCapitalY = &capitalCoordinates[1];
    int capitalCoordinates[2];
    //std::vector <CommanderProfile> listOfCommanders;
    vector <int> listOfProvincesX;//Includes the capital province in this
    vector <int> listOfProvincesY;

    int playerTroopsLost[5] = { 0,0,0,0,0 };
    int totalPlayerUnits[5] = { 0,0,0,0,0 }; /*0) Militia, 1) Guards, 2) Cavalry, 3) Knights, 4) Paladins*/


private:
    int participantIndex;
};
#endif