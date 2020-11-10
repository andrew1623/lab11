/*
Problem 4
Andrew Thompson
act0152
AndrewThompson3 @my.unt.edu
*/

#include "animal.h"
using namespace std;

Animal::~Animal(){};
Animal::Animal()
{
  weight = 0.0;
  name = "";
  gender = ' ';
  colorDescription = "";
}

Animal::Animal(float w, string n, char g, string cd)
{
  weight = w;
  name = n;
  gender = g;
  colorDescription = cd;
}

void Animal::setWeight(float w)
{
  weight = w;
}
float Animal::getWeight()
{
  return weight;
}
void Animal::setName(string n)
{
  name = n;
}
string Animal::getName()
{
  return name;
}
void Animal::setGender(char g)
{
  gender = g;
}

char Animal::getGender()
{
  return gender;
}

void Animal::setColorDescription(string cd)
{
  colorDescription = cd;
}

string Animal::getColorDescription()
{
  return colorDescription;
}

void Animal::print(){};