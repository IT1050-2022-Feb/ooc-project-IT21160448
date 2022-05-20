/*
	IT Number: IT21162978
*/

#pragma once

#define SIZE1 2
	
	class Feedback;
	
	class Agent
	{
		private:
			int agentID;
			char agentName[50];
			char agentNIC[20];
			Feedback *FB[SIZE1];
			
		public:
			Agent(int sAgentID, const char sName[],const char sNIC[]);
			void setAgentID(int sAgentID);
			void setAgentName(const char sName[]);
			void setAgentNIC(const char sNIC[]);
			int getAgentID();
      void checkFeedback(Feedback *FB);
			char *getAgentName();
			char *getAgentNIC();
			void displayAgentDetails();
			void viewFeedback();
			~Agent();
	};