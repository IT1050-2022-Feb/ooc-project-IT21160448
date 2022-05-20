/*
	IT Number: IT21160202
*/

#pragma once
#include "Driving_School.h"

class Driving_School;

class Course{
private:
	int courseID;
	char courseName[30];
	float coursePrice;
	Driving_School *driving_school;
public:
	Course(int sCourseID, const char sCourseName[], float sCoursePrice);
	void setCourseID(int sCourseID);
	void setCourseName(const char sCourseName[]);
	void setCoursePrice(float sCoursePrice);
	int getCourseID();
	char *getCourseName();
	float getCoursePrice(); 
	void viewCourseDetails();
	~Course();
};