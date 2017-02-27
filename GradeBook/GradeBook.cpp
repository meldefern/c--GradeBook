//
//  GradeBook.cpp
//  GradeBook member function definitions, that contains implementations
//  of the member functions prototyped in GradeBook.h
//
//  Created by Melinda Fernandes on 26/02/2017.
//  Copyright © 2017 Melinda Fernandes. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"

//  constructor initialises courseName with string supplied as argument
GradeBook::GradeBook(string name){
    setCourseName(name);    //  call set function to initialise courseName
}   // end GradeBook constructor

//  function that sets the course name
void GradeBook::setCourseName(string name){
    if (name.length() <= 25)    // if name has 25 or fewer characters
        courseName = name;  // store the course name in the object
    
    if (name.length() > 25){    // if name has more than 25 characters
        courseName = name.substr(0,25);     // start at 0 to length of 25
        
        cout << "Name \"" << name << "\" exceeds maximum length (25). \n Limiting course name to first 25 characters. \n" << endl;
    }   // end if
}   // end function setCourseName

//  function that gets the course name
string GradeBook::getCourseName(){
    return courseName;  // return the object's course name
}   // end function getCourseName

// function that displays a welcome message to the GradeBook user
void GradeBook::displayMessage(){
    //  calls getCourseName to get the name of the course this GradeBook represents
    cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}   // end function displayMessage
