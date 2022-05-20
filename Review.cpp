/*
	IT Number: IT21162978
*/

#include <iostream>
#include "Review.h"
#include "Service.h"
#include <cstring>

using namespace std;

Review::Review(int sReviewID, const char sSubject[], const char sDescription[]){
	reviewID = sReviewID;
	strcpy(subject,sSubject);
	strcpy(description,sDescription);
  }
void Review::setReviewID(int sReviewID){
	reviewID=sReviewID;
}

void Review::setSubject(const char sSubject[]){
  strcpy(subject, sSubject);
}

void Review::setDescription(const char sDescription[],Service *service1){
  service1->displayServiceDetails();
	strcpy(description,sDescription);
}

int Review::getReviewID(){
	return reviewID;
}

char *Review::getSubject(){
	return subject;
}

char *Review::getDescription(){
	return description;	
}

void Review::viewReview(){
	cout <<"Review : " <<description <<endl;
}

Review::~Review(){
	cout <<"Deleted Review ID " << reviewID <<endl;
}