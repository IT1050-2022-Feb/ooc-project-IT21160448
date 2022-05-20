/*
	IT Number: IT21160448
*/

#pragma once
#include "User.h"

class Driving_School_Advertiser :public User {
private:
	int advertiserID; 
	char advertiserName[20];
	char password[20];
public:
	Driving_School_Advertiser (const char sUserName[], const char sNIC[], const char sDOB[], const char sAddress[], long int sContactNo, const char sEmail[], int sAdvertiserID, const char sAdversiterName[], const char sPassword[]);
	void setSchoolID(int sAdvertiserID);
	void setSchoolName(const char sAdversiterName[]);
	void setPassword(const char sPassword[]);
	int getSchoolID();
	char *getUserName();
	char *getPassword();
	void checkCredentials();
	void viewAdvertiser();
	~Driving_School_Advertiser();
};