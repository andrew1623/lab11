/*
Problem 4
Andrew Thompson
act0152
AndrewThompson3 @my.unt.edu
*/
#include <iostream>
#include "pig.h"

using namespace std;

Pig::Pig()
{
  breed = "";
  spayOrNeut = false;
  regID = "";
  comment = "";
}

Pig::~Pig(){};

Pig::Pig(float w, string n, char g, string cd, string b, bool s, string id, string c) : Animal(w, n, g, cd)
{
  breed = b;
  spayOrNeut = s;
  regID = id;
  comment = c;
}
void Pig::setBreed(string b)
{
  breed = b;
}
string Pig::getBreed()
{
  return breed;
}
void Pig::setSpay(bool s)
{
  spayOrNeut = s;
}
bool Pig::getSpay()
{
  return spayOrNeut;
}
void Pig::setID(string id)
{
  regID = id;
}
string Pig::getID()
{
  return regID;
}
void Pig::setComment(string c)
{
  comment = c;
}
string Pig::getComment()
{
  return comment;
}
void Pig::print()
{
  string spayed;
  if (getSpay())
  {
    spayed = "true";
  }
  else
  {
    spayed = "false";
  }
  cout << "\nPRINTING PIG\nRegistered ID:" << getID() << endl
       << "Name: " << getName() << endl
       << "Breed: " << getBreed() << endl
       << "Weight: " << getWeight() << endl
       << "Gender: " << getGender() << endl
       << "Spayed/Neutered: " << spayed << endl
       << "Color description: " << getColorDescription() << endl
       << "Comment: " << getComment() << endl;
}