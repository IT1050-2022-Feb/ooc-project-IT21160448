/*
	IT Number: IT21162978
*/

#include<iostream>
#include<cstring>
#include "Agent.h"
#include "Feedback.h"

using namespace std;

Agent::Agent(int sAgentID, const char sName[],const char sNIC[]){
	agentID=sAgentID;
	strcpy(agentName,sName);
	strcpy(agentNIC,sNIC);
}

void Agent::setAgentID(int sAgentID){
	agentID=sAgentID;
}

int Agent::getAgentID(){
	return agentID;
}

void checkFeedback(Feedback *FB){
  
}

char *Agent::getAgentName(){
	return agentName;
}

char *Agent::getAgentNIC(){
	return agentNIC;
}

void Agent::displayAgentDetails(){
	cout << "Agent Name : " << agentName <<endl;
	cout << "Agent NIC : " <<agentNIC << endl;

}

void Agent::viewFeedback(){
}

Agent::~Agent(){
	cout << "Deleting Agent ID " <<agentID <<endl;
}
