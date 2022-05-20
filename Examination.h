/*
	IT Number: IT21161742
*/
#pragma once
class Examination{
  private:
	int examID;
    char examType[20];
    char examDate[20];
    int examDuration;

public:
	Examination(int sExamID, const char sExamType[], const char sExamDate[], int sExamDuration);
    void setExamID(int sExamID);
    void setExamType(const char sExamType[]);
    void setExamDate(const char sExamDate[]);
    void setExamDuration(int sExamDuration);
    int getExamID();
    char *getExamType();
    char *getExamDate();
    int getExamDuration();
    void viewExamSchedule();
    void postponedExam();
    ~Examination();

};