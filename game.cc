#include <iostream> // lol
#include <chrono> // for time stuff
#include <thread> // for std::this_thread
#include <cstring> // for strlen
#include <cstdlib> // for colored text and EXIT_FAILURE
#include <random> // for random numbers n sheeit
#include <regex> // expression matching and stuff
#include <set>
//#include "gamedata.hh"

#define WAIT std::this_thread::sleep_for(std::chrono::milliseconds(0200));
// ^^^ so I don't have to type this friggin mess too much

// typewriter typing effect; takes string and integer that says how much to sleep after each letter from the string is displayed
int typewriter_func(char *text, int sleepVal)
{
  int maxchars = std::strlen(text); // the maximum amount of characters is the number of characters in the string :)
  for(int cLoc; cLoc < maxchars; ++cLoc) // cLoc = curor location; if cLoc is smaller than maxchars, then add 1 to cLoc (aka put the cursor forwards one character) 
    {
      std::this_thread::sleep_for(std::chrono::milliseconds(sleepVal)); // with a tiny delay,
      std::cout << text[cLoc]; // print out each letter from the variable text
      std::fflush(stdout); // and flush standard output (output in the terminal)
    }
}

// we live in a society; this function generates a world and puts the player somewhere
int genworld()
{
  /*
  // choose a random number between 2 and 1
  double x = rand()/static_cast<double>(RAND_MAX+1);
  int choose = 1 + static_cast<int>(x*(2-1));

  int t, p, q;
  t = 20;
  */
  
  char playerSymbol = '@';
  
  for(int i = 0; i <= 21; ++i)
    std::printf("...................\n");

  std::printf(".......%c...........\n", playerSymbol);
}

// TODO: * player struct with x, y, symbol, etc.
//       * random map "generation"

int main()
{

  // create the illusion that something is loading
  WAIT;

  // main menu
  std::cout << "Begin game (a)" << std::endl << "Options menu (o)" << std::endl << "Quit (q)" << std::endl << std::endl;

  int option = getchar();
  option != EOF;

  switch(option)
    {
    case 'a':
      //      std::cout << "Welcome to the game!" << std::endl;
      typewriter_func("\n\033[1;36mWelcome to the game!\033[0m\n", 0050);
      break;
    case 'o':
      typewriter_func("\nOptions menu\n", 0045);
      break;
    case 'q':
      typewriter_func("\nGoodbye...\n", 0035);
      exit(0);
      break;
    default:
      std::cout << "You need to pick something valid!!" << std::endl;
      exit(0);
      // this should be pretty self explanatory
    }
  /*  
  std::mt19937 gen(1729); // some seed or something
  std::default_random_engine generator; // thing that generates random stuff
  std::uniform_int_distribution<int> distribution(0,1); // random number; 0 or 1
  */

  genworld();

  bool isGameRunning = true;
  bool isAlive = true;

  // command mode
  // string version
  while(isAlive == true)
    {
      std::string s;
      std::getline(std::cin, s);
  
      if(!std::cin.good() || s == "q" || s == "exit" || s == "quit" || s == ":q") break;
      if(s.empty()) continue;

      //      std::smatch
    }
  
  /* 
  // command mode
  // getchar version
  while(isAlive == true)
  {
  int c;
  (c = getchar()) != EOF;
  if(c == 'q') break;
  }
  */
  
  return 0;
  
}

