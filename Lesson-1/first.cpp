/** #include <iostream> // The io in iostream stands for Input/Output and this header file allows us to use the cout instruction to output messages to the screen.
using namespace std;
int main( )
{
cout << "Hello world";
return 0;
} */

/** All the names defined in it belong to a namespace called std.
 * If you don’t use using namespace std; in your program, then you should prefix
 * every name that belongs to the std namespace with std::.
 */

 /** This is the header for the main function of the program. In fact, the main function includes the two curly
 * brackets and all the statements in between. This line on its own is called the header of the main function.
 * Every C++ program must have a main function.
 */

 /**
  * The instruction cout actually stands for console output. It tells the computer to output (i.e. display) what
  * follows the << operator on the console (i.e. on the screen). Note: we pronounce cout as ”see-out”.
  */

/** #include <iostream>
int main( )
{
std::cout << "Hello world";
return 0;
} */

/**
 * The word endl stands for end line, and is also defined in the iostream header file. When used with
cout, it makes the output continue on the next line. It is particularly useful if you want to display more
than one message (each with a separate cout statement) and you want each message to appear on a
new line.
 */

/** //Displays Hello world on the screen
#include <iostream>
using namespace std;
int main( )
{
cout << "Hello" << endl;
cout << "world";
return 0;
} */

//Displays chatty messages on the screen
#include <iostream>
using namespace std;
int main( )
{
cout << "Hello, everybody!" << endl;
cout << "My name is YourName." << endl;
cout << "Goodbye." << endl;
return 0;
}