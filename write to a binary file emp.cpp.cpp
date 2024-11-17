#include <iostream> 
#include <fstream> 
using  namespace  std ; 
// Define a structure to hold employee data 
struct  Employee  { 
int  id; 
char  name[ 50 ]; 
}; 
int  main () { 
ofstream  outFile ( "employees.bin" , ios::binary); 
if  (!outFile) { 
cerr  <<  "Error: Could not open file for writing."  <<  endl ; 
return  1 ; 
} 
Employee emp1 = { 101 ,  "gauri" }; 
Employee emp2 = { 102 ,  "janvhi" }; 
Employee emp3 = { 103 ,  "nilesh" }; 
// Write employee data to the binary file 
outFile.write( reinterpret_cast < char *>(&emp1),  sizeof (emp1)); 
outFile.write( reinterpret_cast < char *>(&emp2),  sizeof (emp2)); 
outFile.write( reinterpret_cast < char *>(&emp3),  sizeof (emp3)); 
outFile.close(); 
cout  <<  "Employee records written to binary file successfully."  <<  endl ; 
return  0 ; 
} 