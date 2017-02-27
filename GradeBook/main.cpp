//
//  main.cpp
//  GradeBook
//
//  Created by Melinda Fernandes on 25/02/2017.
//  Copyright © 2017 Melinda Fernandes. All rights reserved.
//
//  Instantiating mulptiple objects of the GradeBook class and using the GradeBook constructor to specify
//  the course name when each GradeBook object is created.

#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" //include definition of class GradeBook

//  function main begins program execution
int main(){
    
    //  create two GradeBook objects
    GradeBook gradeBook1("CS101 Intro to C++ Programming");
    GradeBook gradeBook2("CS102 C++ Data Structures");
    
    //  display initial value of the courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << endl;
    cout << "gradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

    return 0;   //indicate successful termination
}// end main
