/*
	IT Number: IT21162978
*/

#pragma once
class Service;

class Review{
	private:
		int reviewID;
		char subject[100];
		char description[200];
		
	public:
		Review(int sReviewID, const char sSubject[], const char sDescription[]);
		void setReviewID(int sReviewID);
		void setSubject(const char sSubject[]);
		void setDescription(const char sDescription[],Service *service1);
		int getReviewID();
		char *getSubject();
		char *getDescription();
		void viewReview();
		~Review();
};