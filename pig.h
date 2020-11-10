/*
Problem 4
Andrew Thompson
act0152
AndrewThompson3 @my.unt.edu
*/
#include <string>
#include "animal.h"

using namespace std;

class Pig : public Animal
{
private:
  string breed;
  bool spayOrNeut;
  string regID;
  string comment;

public:
  Pig();
  virtual ~Pig();
  Pig(float w, string n, char g, string cd, string b, bool s, string id, string c);
  void setBreed(string b);
  string getBreed();
  void setSpay(bool s);
  bool getSpay();
  void setID(string id);
  string getID();
  void setComment(string c);
  string getComment();
  void print();
};