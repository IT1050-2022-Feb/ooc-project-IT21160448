/*
	IT Number: IT21160448
*/
#include <iostream>
#include <cstring>
#include "User.h"
using namespace std;

User::User(){

}

User::User(const char sUserName[], const char sNIC[], const char sDOB[], const char sAddress[], long int sContactNo, const char sEmail[]){
	strcpy(userName, sUserName);
	strcpy(NIC, sNIC);
	strcpy(DOB, sDOB);
	strcpy(address, sAddress);
	contactNo = sContactNo;
	strcpy(email, sEmail);
}

void User::setName(const char sUserName[]){
	strcpy(userName, sUserName);
}

void User::setEmail(const char sEmail[]){
	strcpy(email, sEmail);
}

void User::setContactNo(long int sContactNo){
	contactNo = sContactNo;
}

void User::setAddress(const char sAddress[]){
	strcpy(address, sAddress);
}

void User::setDOB(const char sDOB[]){
	strcpy(DOB, sDOB);
}

char *User::getEmail(){
	return email;
}

long int User::getContactNo(){
	return contactNo;
}

char *User::getAddress(){
	return address;
}

char *User::getDOB(){
	return DOB;
}

void User::getDetails(){
	cout << "Username: " << userName << endl;
	cout << "NIC: " << NIC << endl;
	cout << "DOB: " << DOB << endl;
	cout << "Address: " << address << endl;
	cout << "Contact Number: " << contactNo << endl;
	cout << "Email: " << email << endl;
}

void User::updateDetails(){
	
}

User::~User(){
	cout << "User is deleted!" << endl;
}