#include <iostream> 
#include <fstream> 
using  namespace  std ; 
// Define a structure to hold employee data 
struct  Employee  { 
int  id; 
char  name[ 50 ]; 
}; 
int  main () { 
ifstream  inFile ( "employees.bin" , ios::binary); 
if  (!inFile) { 
cerr  <<  "Error: Could not open file for reading."  <<  endl ; 
return  1 ; 
} 
Employee emp; 
// Read employee data from the binary file 
while  (inFile.read( reinterpret_cast < char *>(&emp), 
sizeof (emp))) { 
cout  <<  "ID: "  << emp.id <<  ", Name: "  <<  emp.name << 
endl ; 
} 
inFile.close(); 
return  0 ; 
} 
