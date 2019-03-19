#include <stdio.h>
#include <iostream>
#include <deque>  
#include <string>
#include <ctime>  

#include "cards.h"

using namespace std;

const char* SuitMass [4] = {"\"spade\"", "\"cross\"", "\"diamonds\"", "\"hearts\""};
const char* ValueMass [] = {"\"7\"", "\"8\"", "\"9\"","\"10\"","\"jack\"","\"lady\"","\"king\"","\"ace\""};

Card::Card(CardValue card_value, CardSuit card_suit)
{
    value = card_value;
    suit = card_suit;
} 

void Card::Dump()
{
    cout << "    { \"value\": " << ValueMass [value]  << ", \"suit\": " << SuitMass [suit]  << " }";
}

string Card::getAsString()
{
    char strCardBuffer[1024];
    sprintf(strCardBuffer, "    { \"value\": %s, \"suit\": %s }", ValueMass [value], SuitMass [suit]);
    return strCardBuffer;
}

ostream &operator<<(ostream &os, Card const &card) 
{ 
    return os << "{ \"value\": " << ValueMass [card.value]  << ", \"suit\": " << SuitMass [card.suit]  << " }";
   //   {"value": "card.value", "suit": "card.suit"} 
}
