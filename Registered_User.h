/*
	IT Number: IT21160448
*/
#pragma once
#include "User.h"

class Registered_User: public User {
private:
	int userID;
	char name[50];
	char userPassword[20];
	char services[30];
public:
	Registered_User();
	Registered_User(const char sUserName[], const char sNIC[], const char sDOB[], const char sAddress[], long int sContactNo, const char sEmail[], int sUserID, const char sName[], const char sUserPassword[], const char sServices[]);
	void setUserID(int sUserID);
	void setUserName(const char sUserName[]);
	void setPassword(const char sPassword[]);
	void setServices(const char sServices[]);
	int getUserID();
	char *getUserName();
	char *getPassword();
	char *getServices();
	void showRegisteredUser();
	~Registered_User();
};