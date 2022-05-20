/*
	IT Number: IT21160516
*/

#include <iostream>
#include <cstring>
#include "Payment.h"

using namespace std;

Payment::Payment(int sPaymentID, const char sPaymentType[], const char sHolderName[], long int sCardNumber, int sCVV, const char sCardExpiredDate[]){
	paymentID = sPaymentID;
	strcpy(paymenType, sPaymentType);
	strcpy(holderName, sHolderName);
	cardNumber = sCardNumber;
	CVV = sCVV;
	strcpy(CardExpiredDate, sCardExpiredDate);
}

void Payment::setPaymentID(int sPaymentID){
	paymentID = sPaymentID;
}

void Payment::setPaymentType(const char sPaymentType[]){
	strcpy(paymenType, sPaymentType);
}

void Payment::setHoldersName(const char sHolderName[]){
	strcpy(holderName, sHolderName);
}

void Payment::setCardDetails(const char sHolderName[],long int sCardNumber, int sCVV){
	strcpy(holderName, sHolderName);
	cardNumber = sCardNumber;
	CVV = sCVV;
}

void Payment::displayUserDetails(){
	cout << "Payment ID: " << paymentID << endl; 
	cout << "Payment Type: " << paymenType << endl;
	cout << "Holder Name: " << holderName << endl;
}

void Payment::displayCardDetails(){
	cout << "Card Holder Name: " << holderName << endl;
	cout << "Card Number: " << cardNumber;
	cout << "CVV: " << CVV;
}

int Payment::getCardNum(){
	return cardNumber;
}

int Payment::getCVV(){
	return CVV;
}

float Payment::calcDiscount(){
	
}

void Payment::viewPaymentDetails(){
	cout << "Payment ID: " << paymentID << endl; 
	cout << "Payment Type: " << paymenType << endl;
}

Payment::~Payment(){
	cout << "Payment is deleted!" << endl;
}