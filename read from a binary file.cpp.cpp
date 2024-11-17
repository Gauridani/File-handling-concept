#include <iostream> 
#include <fstream> 
using  namespace  std ; 
struct  Data  { 
int  id; 
char  name[ 50 ]; 
}; 
int  main () { 
Data d2; 
ifstream  inFile ( "data.bin" , ios::binary);  // Open  binary file for 
 if  (inFile.is_open()) { 
inFile.read( reinterpret_cast < char *>(&d2),  sizeof (d2));  // Read 
inFile.close(); 
cout  <<  "Data read from binary file: ID =  "  << d2.id <<  ", Name = " 
<< d2.name <<  endl ; 
}else{ 
cout  <<  "Error: Could not open file."  <<  endl ; 
} 
return  0 ; 
} 
