#include <iostream>
#include <vector>
#include "Participants.h"

using namespace std;
extern int currentParticipantIndex;
extern vector <vector <CommanderProfile>> allCommanders;

//Constructors
Participants::Participants()
{
    //Initialize commanderIdentifiersList to be generalCommanderIdentifiers
    capitalCoordinates[0] = 0;
    capitalCoordinates[1] = 0;
}
//Accessors
int Participants::getCapitalCoordinate(int whichCoordinate)
{
    return capitalCoordinates[whichCoordinate];//whichCoordinate = 0 for x coordinate, 1 for y
}
int Participants::findProvinceIndexWithCoordinates(int provinceXCoordinate, int provinceYCoordinate)
{
    for (int x = 0; x < listOfProvincesX.size(); x++)
    {
        if (listOfProvincesX[x] == provinceXCoordinate && listOfProvincesY[x] == provinceYCoordinate)
        {
            return x;
        }
    }
    return -1;//If something wrong happens
}

int Participants::howManyProvinces()
{
    return (int)listOfProvincesX.size();
}
int Participants::howManyCommanders()
{
    return allCommanders[currentParticipantIndex].size();
}
int Participants::findCommanderIndex(string commanderName)
{
    for (int x = 0; x < howManyCommanders(); x++) /*find index of chosen commander unit*/
    {
        if (commanderName == allCommanders[currentParticipantIndex][x].getUnitName())
        {
            return x;
        }
    }
    return -1;//if something goes wrong
}


//Mutators
void Participants::updateCapitalCoordinates(int whichCoordinate, int value)
{
    capitalCoordinates[whichCoordinate] = value;
}

void Participants::addProvince(int xCoordinate, int yCoordinate)
{
    listOfProvincesX.push_back(xCoordinate);
    listOfProvincesY.push_back(yCoordinate);
}



