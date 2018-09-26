#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
  std::cout << "please enter three intergers" <<std::endl;
  int a;
  int b;
  int c;
  std::cin >> a >> b >> c;




  // Multiply the three integers
int d=a*b*c;




  // Output the result of the multiplication
  std::cout << "The product of the three integers is " << d;


  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html
  std::string s1;
  std::string s2;
  std::string s3;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "please write a five syllable sentence. \n";
  getline (std::cin, s1);
  std::cout << "please enter a seven syllable sentence. \n";
  getline (std::cin, s2) ;
  std::cout << "please enter a five syllable sentence. \n";
  getline (std::cin, s3) ; 
  std::cout << "Thank you, here is your haiku.\n";
  std::cout << s1 << std::endl;
  std::cout << s2 << std::endl;
  std::cout << s3 << std::endl;



  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = ("1234"); // Convert this string to an integer 
  int myint;
  std::stringstream(myNumber) >> myint;
  
  std::cout << myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}