// Author      : Saliha Babar
// Assignment  : A2
// Due Date    : 01/21/2025
// Purpose     : C-Style Arrays

#include <iostream>
#include <cstddef>

using namespace std;

const int numBooks = 17;           // Books available is 17 units
const int maxChars = 80;

// Function to calculate string length safely
size_t stringLength (const char characters [], size_t maxChars);

int main(){
  char bookTitle[numBooks][maxChars] = {"Return of the Jedi (Star Wars)", "Heir to the Empire (Star Wars: The Thrawn Trilogy, Vol. 1)",
                                      "Dark Force Rising (Star Wars: The Thrawn Trilogy, Vol. 2", "The Last Command (Star Wars: The Thrawn Trilogy)",
                                      "Specter of the Past (Star Wars: The Hand of Thrawn #1)", "Vision of the Future (Star Wars: The Hand of Thrawn, Book 2)",
                                      "Battlestar Galactica", "New Battlestar Galactica Volume 1 (Battlestar Galactica (Dynamite)) (v. 1)",
                                      "New Battlestar Galactica Volume II Hardcover (Battlestar Galactica (Dynamite)", "The Hobbit", 
                                      "The Lord of the Rings: 50th Anniversary, One Vol. Edition", "The Two Towers", "The Return of the King",
                                      "The Fellowship of the Ring", "C++ Programming: From Problem Analysis to Program Design 7th Edition",
                                      "Digital Computer Electronics", "Assembly Language for x86 Processors (7th Edition)"};
  size_t longestIndex;                     // Index of the longest index
  size_t longestString;                    // Longest string found
  size_t currentLength;                    // Length of the current string through looping

  
  longestIndex = 0;
  longestString = stringLength (bookTitle[0], maxChars);

  for (int i = 1; i < numBooks ; i++)
    {
      currentLength = stringLength (bookTitle[i], maxChars );
        if (currentLength > longestString )
      {
        longestIndex = i;
        longestString = currentLength;
      }
    }

cout << "Here is the book with longest string\n";
cout << "Element [" << longestIndex +1 << "] has the longest title which is: ";
cout << bookTitle[longestIndex] << endl;
  
return 0;
}

size_t stringLength (const char characters [], size_t maxChars)
{
  size_t length = 0;
  while (length < maxChars && characters[length] != '\0' )
    {
    length ++;
    }
return length;
}
