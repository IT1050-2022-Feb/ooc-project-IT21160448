/*
	IT Number: IT21160516 and IT21161742
*/

#include <iostream>
#include <cstring>
#include "Service.h"

using namespace std;

Service::Service(){
	
}

Service::Service(int sServiceID,const char sServiceType[], float sServiceFee){
	serviceID = sServiceID;
	strcpy(serviceType,sServiceType);
	serviceFee=sServiceFee;
}

void Service::setServiceID(int sServiceID){
	serviceID = sServiceID;
}

void Service::setServiceType(const char sServiceType[]){
	strcpy(serviceType,sServiceType);
}

void Service::setServiceFee(float sServiceFee){
	serviceFee=sServiceFee;
}

int Service::getServiceID(){
	return serviceID;
}

char *Service::getServiceType(){
	return serviceType;
}

void Service::displayServiceDetails(){
	cout<<"Service ID : " << serviceID<<endl;
	cout<<"Service Type : " << serviceType<<endl;
	cout<<"Service Fee : " << serviceFee<<endl;
}

float Service::getServiceFee(){
	return serviceFee;
}

void Service::setRegisteredUser(Registered_User *registeredUser1, Registered_User *registeredUser2){
	registered_user[0] = registeredUser1;
	registered_user[1] = registeredUser2;
}

void Service::displayRegisteredUser(){
	for(int i = 0; i < SIZE; i++){
		registered_user[i]->showRegisteredUser();
	}
}

void Service::setExamination(Examination *exam1){
	exam = exam1;
}

void Service::viewExamDetails(){
	exam->viewExamSchedule();
}

Service::~Service(){
	cout<<"Delete Service ID " << serviceID << endl;
}