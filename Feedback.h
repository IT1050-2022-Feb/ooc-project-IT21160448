/*
	IT Number: IT21162978
*/

#pragma once
#define SIZE2 5

class Agent;
class User;

class Feedback
{
	private:
		int feedbackID;
		char feedbackDescription[200];
		Agent *Ag[SIZE2];
		
	public:
		Feedback(int sFBN);
		void setFeedID(int sFeedback);
		void setFeedbackDesc(const char sDesc[], User *user);
		int getFeedbackID ();
    void markAgent(Agent *Ag[SIZE2]);
		char *getFeedbackDesc();
		void displayFeedback();
		~Feedback();
};