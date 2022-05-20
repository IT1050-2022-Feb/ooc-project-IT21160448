/*
	IT Number: IT21160202
*/
#include <iostream>
#include <cstring>
#include "Driving_School.h"
#include "Driving_School_Advertiser.h"
#define SIZE 2

using namespace std;

Driving_School::Driving_School(int sSchoolID, const char sSchoolName[], const char sSchoolAddress[], long int sContactNo, const char sEmail[]){
	schoolID = sSchoolID;
	strcpy(schoolName, sSchoolName);
	strcpy(schoolAddress, sSchoolAddress);
	schoolContactNo = sContactNo;
	strcpy(schoolEmail, sEmail);
}

void Driving_School::setSchoolID(int sSchoolID){
	schoolID = sSchoolID;
}

void Driving_School::setSchoolName(const char sSchoolName[]){
	strcpy(schoolName, sSchoolName);
}

void Driving_School::setSchoolAddress(const char sSchoolAddress[]){
	strcpy(schoolAddress, sSchoolAddress);
}

void Driving_School::setSchoolContactNo(long int sContactNo){
	schoolContactNo = sContactNo;
}

void Driving_School::setSchoolEmail(const char sEmail[]){
	strcpy(schoolEmail, sEmail);
}

int Driving_School::getSchoolID(){
	return schoolID;
}

char *Driving_School::getSchoolName(){
	return schoolName;
}

char *Driving_School::getSchoolAddress(){
	return schoolAddress;
}

int Driving_School::getSchoolContactNo(){
	return schoolContactNo;
}

char *Driving_School::getSchoolEmail(){
	return schoolEmail;
}

void Driving_School::viewProfile(){
	cout << "School ID: " << schoolID << endl;
	cout << "School Name: " << schoolName << endl;
	cout << "School Address: " << schoolAddress << endl;
	cout << "School Contact Number: " << schoolContactNo << endl;
	cout << "School Email: " << schoolEmail << endl;
}

void Driving_School::deleteDetails(){
	
}

void Driving_School::setAgent(Driving_School_Advertiser *advertiser1, Driving_School_Advertiser *advertiser2){
	advertiser[0] = advertiser1;
	advertiser[1] = advertiser2;
}

void Driving_School::viewAgent(){
	for(int i = 0; i < SIZE; i++){
		advertiser[i]->viewAdvertiser();
	}
}

void Driving_School::deleteAgent(){
	for(int i = 0; i < SIZE; i++){
		advertiser[i]->~Driving_School_Advertiser();
	}
}

void Driving_School::addService(Service *service1){
	service = service1;
}

void Driving_School::displayService(){
	service->displayServiceDetails();
}

Driving_School::~Driving_School(){
	cout << "Driving school deleted!" << endl;
}