#include <fstream>  // Include the file stream library 
#include <iostream> // For standard input/output 
using  namespace  std ; 
int  main () { 
ifstream  inputFile ( "example.txt" );  // Opens a file for reading 
ofstream  outputFile ( "example.txt" );  // Opens a file for writing 
fstream  file ( "example.txt" , ios::in | ios::out);   
 
return  0 ; 
} 
