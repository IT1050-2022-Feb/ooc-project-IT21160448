/*
	IT Number: IT21160202
*/
class Report{
private:
	int reportID;
	char reportDescription[30];

public:
	Report(int sReportID, const char sReportDescription[]);
	void setReportID(int sReportID);
	void setDescription(const char sReportDescription[]);
	int getReportID();
	char *getDescription();
	void displayReport();
	~Report();
};