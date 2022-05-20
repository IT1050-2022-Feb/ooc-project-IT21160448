/*
	IT Number: IT21160202
*/

#include <iostream>
#include <cstring>
#include "Course.h"

using namespace std;

Course::Course(int sCourseID, const char sCourseName[], float sCoursePrice){
	courseID = sCourseID;
	strcpy(courseName, sCourseName);
	coursePrice = sCoursePrice;
}

void Course::setCourseID(int sCourseID){
	courseID = sCourseID;
}

void Course::setCourseName(const char sCourseName[]){
	strcpy(courseName, sCourseName);
}

void Course::setCoursePrice(float sCoursePrice){
	coursePrice = sCoursePrice;
}

int Course::getCourseID(){
	return courseID;
}

char *Course::getCourseName(){
	return courseName;
}

float Course::getCoursePrice(){
	return coursePrice;
}

void Course::viewCourseDetails(){
	cout << "Course ID: " << courseID << endl;
	cout << "Course Name: " << courseName << endl;
	cout << "Course Price: " << coursePrice << endl;
}

Course::~Course(){
	cout << "Course is deleted!" << endl;
}