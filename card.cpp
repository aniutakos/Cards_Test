#include <stdio.h>
#include <iostream>
#include <deque>  
#include <string>
#include <ctime>  

#include "cards.h"

using namespace std;

string SuitMass [4] = {"\"spade\"", "\"cross\"", "\"diamonds\"", "\"hearts\""};
string ValueMass [] = {"\"7\"", "\"8\"", "\"9\"","\"10\"","\"jack\"","\"lady\"","\"king\"","\"ace\""};

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
    string  strCard;
    strCard += "    { \"value\": " + ValueMass [value]  + ", \"suit\": " + SuitMass [suit]  + " }";
    return strCard;
}

ostream &operator<<(ostream &os, Card const &card) 
{ 
    return os << "{ \"value\": " << ValueMass [card.value]  << ", \"suit\": " << SuitMass [card.suit]  << " }";
   //   {"value": "card.value", "suit": "card.suit"} 
}
