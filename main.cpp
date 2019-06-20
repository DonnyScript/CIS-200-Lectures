/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Example program
#include <iostream>
#include <string>
using namespace std;


class NumberGame
{
public:
  NumberGame (int MagicNumber)
  {
    this->MagicNumber = MagicNumber;
    guesscall = 0;


  }
  string Guess (int number)
  {
   
    string guess;
    while (number != this->MagicNumber)
      {
	if (number > this->MagicNumber)
	  {
	    guesscall++;
	    cout << "Too High" << endl;
	    cout << "retry: ";
	    cin >> number;
	    
	  }
	if (number < this->MagicNumber)
	  {
	    guesscall++;
	    cout << "Too low" << endl;
	    cout << "retry: ";
	    cin >> number;
	  }
      }
      if (number == this->MagicNumber)
      {
          cout << this->guesscall <<endl;
	string guessCall = to_string (guesscall);
	return "You got it in " + guessCall + " Guesses";
      }

    return "you Already guessed the magic number";
  }

private:
  int guesscall;
  int MagicNumber;

};

int
main ()
{
  NumberGame Game (5);
  cout << Game.Guess (4);

  return 0;
}
