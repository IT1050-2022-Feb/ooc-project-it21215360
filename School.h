	class School{
    private:
        Course *NamesOC[2];
        User *users[2];
        Instructor *instructor[2];
        int NoOfInstructors;
    
    public:
        School();
        School("Accounts","Stats","Management");
        void countInstructors();
        void addUser(User *user1, User *user2, User *user3);
        void displayCourseName();
        void displaySchool();
        ~School();
