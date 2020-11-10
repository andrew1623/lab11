/*
Problem 4
Andrew Thompson
act0152
AndrewThompson3 @my.unt.edu
*/
#include <string>

using namespace std;

class Animal
{
private:
  float weight;
  string name;
  char gender;
  string colorDescription;

public:
  Animal();
  ~Animal();
  Animal(float w, string n, char g, string cd);
  void setWeight(float w);
  float getWeight();
  void setName(string n);
  string getName();
  void setGender(char g);
  char getGender();
  void setColorDescription(string cd);
  string getColorDescription();
  virtual void print();
};