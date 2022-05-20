/*
	IT Number: IT21162978
*/

#include <iostream>
#include <cstring>
#include "Feedback.h"
#include "User.h"

using namespace std;

Feedback::Feedback(int sFBN){
	feedbackID=sFBN;
}

void Feedback::setFeedID(int sFeedback){
	feedbackID=sFeedback;
	
}

void Feedback::setFeedbackDesc(const char sDesc[], User *user1){
	user1->getDetails();
	strcpy(feedbackDescription,sDesc);
}

int Feedback::getFeedbackID(){
	return feedbackID;
} 

void markAgent(Agent *Ag[SIZE2]){
  
}

char *Feedback::getFeedbackDesc(){
	return feedbackDescription;
}

void Feedback::displayFeedback(){
	cout<<"Feedback ID: "<<feedbackID<<endl;
	cout<<"Feedback Description: "<<feedbackDescription<<endl;
}

Feedback::~Feedback(){
	cout << "Deleted Feedback ID " <<feedbackID <<endl;
}
