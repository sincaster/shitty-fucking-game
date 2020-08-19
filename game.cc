#include <iostream> // lol
#include <chrono> // for time stuff
#include <thread> // for std::this_thread
#include <cstring> // for strlen
#include <stdlib.h> // for colored text and EXIT_FAILURE

// constants
#define WAIT std::this_thread::sleep_for(std::chrono::milliseconds(0100));

int typewriter_func(char *text, int sleepVal){
  int maxchars = strlen(text);
  for(int cLoc; cLoc < maxchars; ++cLoc)
    {
      std::this_thread::sleep_for(std::chrono::milliseconds(sleepVal)); // with a tiny delay,
      std::cout << text[cLoc]; // print out each letter from the variable text
      std::fflush(stdout); // and flush standard output (output in the terminal)
    }
}
		    		    
int main()
{

  typewriter_func("Welcome to the kekma rogue-like!\n", 0100);
 
  WAIT;
  
  std::cout << "Begin game (a)" << std::endl;
  //  std::cin >> option;

  int option = getchar();
  option != EOF;

  switch(option)
    {
    case 'a':
      //      std::cout << "Welcome to the game!" << std::endl;
      typewriter_func("Welcome to the game!\n", 0050);
      break;
    case 'o':
      std::cout << "Options menu" << std::endl;
      break;
    case 'q':
      std::cout << "Goodbye..." << std::endl;
      exit(0);
    }
       
  return 0;
  
}
