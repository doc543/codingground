#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    string input;
    int guess;
    int randNum = time(0) % 100;
    string::size_type sz;   // alias of size_t
    
    cout << "Cheat " << randNum << endl;
    
    while (guess != randNum)
    {
        cout << "Guess a number between 1 and 10" << endl;
        cin >> input;
        guess = atoi(input.c_str());
    
        if (guess > randNum)
            cout << "UP" << endl;
        else if (guess < randNum)
            cout << "DOWN" << endl;
        else
            cout << "YAH BOI" << endl; 
    }
   return 0;
}

