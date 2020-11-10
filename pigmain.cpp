/*
Problem 4
Andrew Thompson
act0152
AndrewThompson3 @my.unt.edu
*/

#include <iostream>
#include <vector>
#include "pig.h"

using namespace std;

int main()
{
  vector<Pig> pigs;
  for (int i = 0; i < 3; i++)
  {
    cout << "\nENTERING DATA FOR PIG " << i + 1 << endl;
    cout << "Weight: " << endl;
    float wt;
    cin >> wt;

    cout << "Name: " << endl;
    string name;
    cin.ignore();
    getline(cin, name);

    cout << "Breed: " << endl;
    string breed;
    getline(cin, breed);

    cout << "Gender (m or f): " << endl;
    char gender;
    cin >> gender;

    cout << "Spayed/Neutered (true or false): " << endl;
    string s;
    bool spayed;
    cin.ignore();
    getline(cin, s);

    if (s == "true")
    {
      spayed = true;
    }
    else if (s == "false")
    {
      spayed = false;
    }

    cout << "Registration ID: " << endl;
    string regID;
    cin.ignore();
    getline(cin, regID);

    cout << "Color description: " << endl;
    string color;
    getline(cin, color);

    cout << "Comment: " << endl;
    string comment;
    getline(cin, comment);

    Pig pig = Pig(wt, name, gender, color, breed, spayed, regID, comment);
    pigs.push_back(pig);
  }

  for (Pig pig : pigs)
  {
    pig.print();
  }

  pigs.clear();

  return 0;
}