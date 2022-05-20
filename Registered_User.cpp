/*
	IT Number: IT21160448
*/

#include <iostream>
#include <cstring>
#include "User.h"
#include "Registered_User.h"

using namespace std;

Registered_User::Registered_User(){
	
}

Registered_User::Registered_User(const char sUserName[], const char sNIC[], const char sDOB[], const char sAddress[], long int sContactNo, const char sEmail[], int sUserID, const char sName[], const char sUserPassword[], const char sServices[]):User(sUserName, sNIC, sDOB, sAddress, sContactNo, sEmail){
	userID = sUserID;
	strcpy(name, sName);
	strcpy(userPassword, sUserPassword);
	strcpy(services, sServices);
}

void Registered_User::setUserID(int sUserID){
	userID = sUserID;
}

void Registered_User::setUserName(const char sName[]){
	strcpy(name, sName);
}

void Registered_User::setPassword(const char sUserPassword[]){
	strcpy(userPassword, sUserPassword);
}

void Registered_User::setServices(const char sServices[]){
	strcpy(services, sServices);
}

int Registered_User::getUserID(){
	return userID;
}

char *Registered_User::getUserName(){
	return userName;
}

char *Registered_User::getPassword(){
	return userPassword;
}

char *Registered_User::getServices(){
	return services;
}

void Registered_User::showRegisteredUser(){
	cout << "User ID: " << userID << endl;
	cout << "Name: " << userName << endl;
	cout << "Services: " << services << endl;
}

Registered_User::~Registered_User(){
	cout << "Registered user is deleted" << endl;
}