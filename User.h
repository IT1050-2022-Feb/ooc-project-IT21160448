/*
	IT Number: IT21160448
*/
#pragma once
class User {
	protected :
		char userName[30];
		char NIC[20];
		char DOB[20];
		char address[100];
		long int contactNo;
		char email[30]; 
	public :
		User();
		User(const char sUserName[], const char sNIC[], const char sDOB[], const char sAddress[], long int sContactNo, const char sEmail[]);
		void setName(const char sUserName[]);
		void setEmail(const char sEmail[]);
		void setContactNo(long int sContactNo);
		void setAddress(const char sAddress[]);
		void setDOB(const char sDOB[]);
		char *getEmail(); 
		long int getContactNo();
		char *getAddress();
		char *getDOB();
		void getDetails();
		void updateDetails();
		~User();
};