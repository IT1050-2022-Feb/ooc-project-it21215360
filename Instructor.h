class Instructor : public Credentials{
    protected:
        int InstructorId;
        School * schl;
    
    public:
        Instructor();
        Instructor(const string iname, const string ischool, int IID);
        Instructor(const string iname, int instID, School *schl);
        void setID(int id);
        void displayTimetable();
        void displayInstructSchoolDetails();
        void displayInstructorDetails();
        ~Instructor();
};



