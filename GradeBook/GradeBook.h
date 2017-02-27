//
//  GradeBook.h
//  GradeBook class definition that presents GradeBook's public interface
//  without revealing the implementations of GradeBook's member functions,
//  which are defined in GradeBook.cpp
//
//  Created by Melinda Fernandes on 26/02/2017.
//  Copyright © 2017 Melinda Fernandes. All rights reserved.
//

#include <string>       // program uses C++ standard string class
using std::string;

//  GradeBook class definition
class GradeBook {
public:
    GradeBook(string) ;  //  constructor initialises courseName with string supplied as argument
    void setCourseName(string name);    //  function that sets the course name
    string getCourseName(); //  function that gets the course name
    void displayMessage();  // function that displays a welcome message to the GradeBook user
    
private:
    string courseName;  //  data member that is the course name for this GradeBook
    
};  // end class GradeBook

