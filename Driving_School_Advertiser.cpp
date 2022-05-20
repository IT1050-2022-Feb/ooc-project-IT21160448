/*
	IT Number: IT21160448
*/

#include <iostream>
#include <cstring>
#include "Driving_School_Advertiser.h"
#include "User.h"

using namespace std;

Driving_School_Advertiser::Driving_School_Advertiser (const char sUserName[], const char sNIC[], const char sDOB[], const char sAddress[], long int sContactNo, const char sEmail[], int sAdvertiserID, const char sAdversiterName[], const char sPassword[]):User(sUserName, sNIC, sDOB, sAddress, sContactNo, sEmail){
	advertiserID = sAdvertiserID;
	strcpy(advertiserName, sAdversiterName);
	strcpy(password, sPassword);
}

void Driving_School_Advertiser::setSchoolID(int sAdvertiserID){
	advertiserID = sAdvertiserID;
}

void Driving_School_Advertiser::setSchoolName(const char sAdversiterName[]){
	strcpy(advertiserName, sAdversiterName);
}

void Driving_School_Advertiser::setPassword(const char sPassword[]){
	strcpy(password, sPassword);
}

int Driving_School_Advertiser::getSchoolID(){
	return advertiserID;
}

char *Driving_School_Advertiser::getUserName(){
	return userName;
}

char *Driving_School_Advertiser::getPassword(){
	return password;
}

void Driving_School_Advertiser::checkCredentials(){
	
}

void Driving_School_Advertiser::viewAdvertiser(){
	cout << "Advertiser ID: " <<  advertiserID << endl;
	cout << "Advertiser Name: " << advertiserName << endl;
	cout << "Advertiser Passowrd: " << password << endl << endl;
}

Driving_School_Advertiser::~Driving_School_Advertiser(){
	cout << "Driving school advertiser is deleted!" << endl;
}