/*
	IT Number: IT21160448, IT21162978, IT21160516, IT21161742, IT21160202
*/

#include <iostream>
#include "User.h"
#include "Report.h"
#include "Course.h"
#include "Driving_School.h"
#include "Driving_School_Advertiser.h"
#include "Service.h"
#include "Payment.h"
#include "Agent.h"
#include "Feedback.h"
#include "Review.h"
#include "Registered_User.h"
#include "Examination.h"

using namespace std;

int main() {
	// User
	cout << "----------------User----------------" << endl << endl;
	User *user1 = new User("bentennyson", "24343", "02/11/2000", "Colombo, Sri Lanka", 1111111111, "ben@gmail.com");
	user1->getDetails();

	cout << endl << endl << endl << endl;
	
  	// report
	cout << "----------------Report----------------" << endl << endl;
	Report *report1 =  new Report(123, "New License: Rs. 25,000"); 
	report1->displayReport();

	cout << endl << endl << endl << endl;
	
	// course
	cout << "----------------Course----------------" << endl << endl;
	Course *course1 = new Course(12, "Light Weight Vehicle", 25000.00);
	course1->viewCourseDetails();

	cout << endl << endl << endl << endl;

	// driving school
	cout << "------------Driving School-------------" << endl << endl;
	Driving_School *driving_school1 = new Driving_School(587, "Rathna Learners", "Colombo, Sri Lanka", 0111365145, "rathna@gmail.com");
	driving_school1->viewProfile();

	cout << endl << endl << endl << endl;

	// driving school advertiser
	cout << "-------Driving School Advertiser-------" << endl << endl;
	Driving_School_Advertiser *advertiser1 = new Driving_School_Advertiser("rathnaadvertiser1", "789254", "12/08/1999", "Malabe, Sri Lanka", 1111111111, "rathnaadver@gmail.com", 324, "Julia Ann", "pass123");
	advertiser1->getDetails();
	cout << endl;
	cout << "view advertiser" << endl;
	advertiser1->viewAdvertiser();
	Driving_School_Advertiser *advertiser2 = new Driving_School_Advertiser("Ameesha Akalanka", "829654", "25/02/1994", "Kandy, Sri Lanka", 22222222, "rathnaadver2@gmail.com", 325, "rathnaadvertiser2", "aka123");	

	cout << endl << endl << endl << endl;
	
	// add advertiser to the driving school
	driving_school1->setAgent(advertiser1, advertiser2);
	driving_school1->viewAgent();

	cout << endl << endl << endl << endl;

	// registered user
	cout << "------------Registered User-------------" << endl << endl;
	Registered_User *registered_user1 = new Registered_User("Anna Perera", "890254", "08/02/1990", "Kandy, Sri Lanka", 2222222222, "anna@gmail.com", 8792, "annap", "cat123", "Renew License");
	registered_user1->showRegisteredUser();
	Registered_User *registered_user2 = new Registered_User("Jason Perera", "454354", "23/12/19807", "Gamapaha, Sri Lanka", 3333333333, "jason@gmail.com", 23432, "jasonp", "jason123", "New License");
		registered_user1->showRegisteredUser();
	cout << endl << endl << endl << endl;
	
	// services
	cout << "----------------Services----------------" << endl << endl;
	Service *service1 = new Service(120, "New License", 25000);
	Service *service2 = new Service(122, "License Renewal", 25000);
	service1->displayServiceDetails();
	service2->displayServiceDetails();

	// add registered user to service
	service1->setRegisteredUser(registered_user1, registered_user2);
	service1->displayRegisteredUser();

	cout << endl << endl << endl << endl;

	// add service to driving school
	cout << "------Add Service to Driving School------" << endl;
	driving_school1->addService(service1);
	driving_school1->displayService();

	cout << endl << endl << endl << endl;
	
	// payment
	cout << "----------------Payment----------------" << endl << endl;
	Payment *payment1 = new Payment(789, "VISA", "Ervil Lewis", 384238432, 890, "21/12/2021");
	payment1->viewPaymentDetails();

	cout << endl << endl << endl << endl;
	
	// set examination
	cout << "----------------Examination----------------" << endl << endl;
	Examination *exam1 = new Examination(3423, "Practical", "21/12/2021", 30);
	exam1->viewExamSchedule();
		
	cout << endl << endl << endl << endl;

	// add examination to services
	cout << "----------Add Examination to service--------" << endl << endl;
	service1->setExamination(exam1);
	service1->viewExamDetails();

	cout << endl << endl << endl << endl;
	
	//agent
	cout << "----------------Agent----------------" << endl << endl;
	Agent *agent1 = new Agent(908, "Kevin Levin", "732874");
	cout<<"Agent ID: "<<agent1->getAgentID()<<endl;
	agent1->displayAgentDetails();
	Agent *agent2 = new Agent(909, "Peter Parker", "939622");
	cout<<"Agent ID: "<<agent1->getAgentID()<<endl;
	agent2->displayAgentDetails();

	cout << endl << endl << endl << endl;
	
	//feedback
  	cout << "----------------Feedback----------------" << endl << endl;
	Feedback *FB1 = new Feedback(12345);
	FB1->setFeedbackDesc("Good", user1);
	FB1->displayFeedback();

	cout << endl << endl << endl << endl;
	
  	//review
	cout << "----------------Review----------------" << endl << endl;
	Review *review1 = new Review(550,"License","This is a good service");
	review1->setDescription("This is a good service", service1);
	cout << "Review ID: " <<review1->getReviewID() <<endl;
	review1-> viewReview();
	cout<<endl;
	Review *review2 = new Review(551,"Service","Exellent service");
	review1->setDescription("Exellent service", service2);
	cout << "Review ID: " <<review2->getReviewID() <<endl;
	review2-> viewReview();
	
	cout << endl << endl << endl << endl;


	cout << "----------------Remove Objects----------------" << endl << endl;
	// remove examination
	delete exam1;
	// remove payment 
	delete payment1;
	// remove services
	delete service1;
	delete service2;
	// remove report
	delete report1;
	// remove course
	delete course1;
	// remove driving school advertiser
	delete advertiser1;
	// remove driving school
	delete driving_school1;
	// remove registered user
	delete registered_user1;
	delete registered_user2;
	// remove agent
	delete agent1;
	delete agent2;
	// remove user
	delete user1;
	//remove feedback
	delete FB1;
	//remove review
	delete review1;
	delete review2;
}