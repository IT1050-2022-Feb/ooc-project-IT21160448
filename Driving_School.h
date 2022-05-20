/*
	IT Number: IT21160202
*/
#pragma once
#include "Course.h"
#include "Payment.h"
#include "Driving_School_Advertiser.h"
#include "Service.h"

#define SIZE 2
class Course;
class Payment;
class Service;

class Driving_School{
private:
	int schoolID;
	char schoolName[20];
	char schoolAddress[30];
	long int schoolContactNo;
	char schoolEmail[20];
	Course *course;
	Payment *payment;
	Driving_School_Advertiser *advertiser[SIZE];
	Service *service;
public:
	Driving_School(int sSchoolID, const char sSchoolName[], const char sSchoolAddress[], long int 	sContactNo, const char sEmail[]);
	void setSchoolID(int sSchoolID); 
	void setSchoolName(const char sSchoolName[]);
	void setSchoolAddress(const char sSchoolAddress[]);
	void setSchoolContactNo(long int sContactNo);
	void setSchoolEmail(const char sEmail[]);
	void setAgent(Driving_School_Advertiser *advertiser1, Driving_School_Advertiser *advertiser2);
	int getSchoolID();
	char *getSchoolName();
	char *getSchoolAddress();
	int getSchoolContactNo();
	char *getSchoolEmail();
	void viewProfile();
	void deleteDetails();
	void viewAgent();
	void deleteAgent();
	void addService(Service *service1);
	void displayService();
	~Driving_School();
};