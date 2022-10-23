#include <iostream>
#include <clocale>
#include <chrono>
#include <thread>

using namespace std;



int main() {
   string x;
   string cmd;

   int firstnumber;
   int secondnumber;
   int summary;

   std::this_thread::sleep_for(std::chrono::milliseconds(2000));

   cout << "Welcome to the CLI Calculator developed by:" << endl << "SeargeantOfArmy" << endl << endl;
   std::this_thread::sleep_for(std::chrono::milliseconds(1000));
   cout << "Use CMD for the list of available commands." << endl;
   std::this_thread::sleep_for(std::chrono::milliseconds(1500));
   cout << "And by the way, please enter your username." << endl << "user.username >>  ";
   cin >> x;

   std::this_thread::sleep_for(std::chrono::milliseconds(2000));
   cout << endl << "Welcome, " << x << endl;
   
   cout << "user." << x << " >> ";
   cin >> cmd;
    while (true)
    {
          if (cmd == "CMD") {
          cout << endl << "Here's the full list of available commands:" << endl << endl << "ADD" << endl << "Mathematical Addition between 2 numbers." << endl << endl;
          cout << "SUB" << endl << "Mathematical Substraction between 2 numbers." << endl << endl;
          cout << "MUL" << endl << "Mathematical Multiplication between 2 numbers." << endl << endl;
          cout << "DIV" << endl << "Mathematical Division between 2 numbers." << endl << endl;
          cout << "user." << x << " >> ";
          cin >> cmd;
     } else if (cmd == "ADD") {
          cout << endl << "addition.number1 >> ";
          cin >> firstnumber;
          cout << endl << "addition.number2 >> ";
          cin >> secondnumber;
          cout << endl << "addition.result >> " << firstnumber + secondnumber << endl;
          cout << "user." << x << " >> ";
          cin >> cmd;
     } else if (cmd == "SUB") {
          cout << endl << "substraction.number1 >> ";
          cin >> firstnumber;
          cout << endl << "substraction.number2 >> ";
          cin >> secondnumber;
          cout << endl << "substraction.result >> " << firstnumber - secondnumber << endl;
          cout << "user." << x << " >> ";
          cin >> cmd;
     } else if (cmd == "MUL") {
          cout << endl << "multiplication.number1 >> ";
          cin >> firstnumber;
          cout << endl << "multiplication.number2 >> ";
          cin >> secondnumber;
          cout << endl << "multiplication.result >> " << firstnumber * secondnumber << endl;
          cout << "user." << x << " >> ";
          cin >> cmd;
     } else if (cmd == "DIV") {
          cout << endl << "division.number1 >> ";
          cin >> firstnumber;
          cout << endl << "division.number2 >> ";
          cin >> secondnumber;
          cout << endl << "division.result >> " << firstnumber / secondnumber << endl;
          cout << "user." << x << " >> ";
          cin >> cmd;
     } else {
        cout << endl << "There's no such a command." << endl;
        cout << "user." << x << " >> ";
        cin >> cmd;
     }
         }
    


}