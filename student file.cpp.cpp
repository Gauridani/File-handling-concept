#include <iostream> 
using  namespace  std ; 
// Define a structure named 'Student' 
struct  Student  { 
string  name; 
int  rollNumber; 
float  marks; 
}; 
int  main () { 
// Declare a Student variable 
Student s1; 
// Assign values to members 
s1.name =  "sushant" ; 
s1.rollNumber =  53 ; 
s1.marks =  89.3; 
// Output the details 
cout  <<  "Name: "  << s1.name <<  endl ; 
cout  <<  "Roll Number: "  << s1.rollNumber <<  endl ; 
cout  <<  "Marks: "  << s1.marks <<  endl ;
return 0;
} 
