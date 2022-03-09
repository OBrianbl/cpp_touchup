/**Goal is to practice writing and reading files. 
**Read the contents of input.txt then write to it.
*/
#include "main.hpp"
#include <fstream>
#include <string> 

int main(){
    /// store line read in from file as a string
    string line;

    /**
     * Create an output stream to write to the file
     * append the new lines to the end of the file
     */
     fstream myfileI ("input.txt", ios::app);
     if (myfileI.is_open())
     {
         myfileI << "\nI am adding a line.\n";
         myfileI << "I am adding another line.";
         myfileI.close();
     }else cout << "Unable to open file for writing";

     ///creat an input stream to write to the file
     fstream myfileO ("input.txt");
     if (myfileO.is_open())
     {
         while( getline (myfileO, line))
         {
             cout << line << '\n';
         }
         myfileO.close();
     }else cout << "unable to write to file";
    return 0;
}