/*
	IT Number: IT21161742
*/

#include "Examination.h"
#include <iostream>
#include <cstring>

using namespace std;

Examination::Examination(int sExamID, const char sExamType[], const char sExamDate[], int sExamDuration){
	examID = sExamID;
	strcpy(examType, sExamType);
	strcpy(examDate,sExamDate);
	examDuration = sExamDuration;
}

void Examination::setExamID(int sExamID){
  	examID = sExamID;
}

void Examination::setExamType(const char sExamType[]){
	strcpy(examType,sExamType);
}

void Examination::setExamDate(const char sExamDate[]){
	strcpy(examDate,sExamDate);
}

void Examination::setExamDuration(int sExamDuration){
	examDuration = sExamDuration;
}

int Examination::getExamID(){
	return examID;
}

char *Examination::getExamType(){
	return examType;
}

char *Examination::getExamDate(){
	return examDate;
}

int Examination::getExamDuration(){
	return examDuration;
}

void Examination::viewExamSchedule(){
	cout << "Exam ID : " << examID << endl;
	cout << "Exam Type : " << examType << endl;
	cout << "Exam Date : " << examDate << endl;
	cout << "Exam Duration : " << examDuration << endl;
}

void Examination::postponedExam(){

}

Examination::~Examination()
{
 	cout << "Delete Examination ID " << examID << endl;
}