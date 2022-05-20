/*
	IT Number: IT21160202
*/

#include <iostream>
#include <cstring>
#include "Report.h"

using namespace std;

Report::Report(int sReportID, const char sReportDescription[]){
	reportID = sReportID;
	strcpy(reportDescription, sReportDescription);
}

void Report::setReportID(int sReportID){
	reportID = sReportID;
}

void Report::setDescription(const char sReportDescription[]){
	strcpy(reportDescription, sReportDescription);
}

int Report::getReportID(){
	return reportID;
}

char *Report::getDescription(){
	return reportDescription;
}

void Report::displayReport(){
	cout << "Report ID: " << reportID << endl;
	cout << "Report Description: " << reportDescription << endl;
}

Report::~Report(){{
	cout << "Report is deleted!" << endl;
}}