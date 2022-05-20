/*
	IT Number: IT21160516
*/

#pragma once
#include "Driving_School.h"
#include "Service.h"

class Driving_School;
class Service;

class Payment{
	private :
		int paymentID;
		char paymenType[10];
		char holderName[50];
		long int cardNumber; 
		int CVV;
		char CardExpiredDate[20];
		Driving_School *driving_school;
		Service *service;
	public :
		Payment(int sPaymentID, const char sPaymentType[], const char sHolderName[], long int sCardNumber, int sCVV, const char sCardExpiredDate[]);
		void setPaymentID(int sPaymentID);
		void setPaymentType(const char sPaymentType[]);
		void setHoldersName(const char sHolderName[]);
		void setCardDetails(const char sHolderName[],long int sCardNumber, int sCVV);
		void displayUserDetails();
		void displayCardDetails();
		int getCardNum();
		int getCVV();
		float calcDiscount();
		void viewPaymentDetails();
		~Payment();	
};