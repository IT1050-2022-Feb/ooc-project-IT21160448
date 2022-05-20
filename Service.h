/*
	IT Number: IT21160516 and IT21161742
*/

#pragma once
#include "Payment.h"
#include "Registered_User.h"
#include "Examination.h"

#define SIZE3 2

class Driving_School;
class Payment;
class Registered_User;
class Examination;

class Service{
	private:
		int serviceID;
		char serviceType[50];
		float serviceFee;	
		Payment *payment;
		Registered_User *registered_user[SIZE3];
		Examination *exam;
	public:
		Service();
		Service(int sServiceID,const char sServiceType[], float sServiceFee );
		void setServiceID(int sServiceID);
		void setServiceType(const char sServiceType[]);
		void setServiceFee(float sServiceFee);
		int getServiceID();
		char *getServiceType();
		void displayServiceDetails();
		float getServiceFee();
		void setRegisteredUser(Registered_User *registeredUser1, Registered_User *registeredUser2);
		void displayRegisteredUser();
		void setExamination(Examination *exam1);
		void viewExamDetails();
		~Service();	
};