#include <iostream>
#include <assert>
using namespace std;

class Student {

    private:
        string fname;
        string lname;

        int studentId;


        static set<int> existingIDs; 
        static int createNewID() {
            int newID;
            do {
                newID = rand() % 1000000;;
            } 
            while (existingIDs.find(newID) != existingIDs.end());
            existingIDs.insert(newID);
            return newID;
        }


    public:
        int credits;

        Student(string first, string last) : fname(first), lname(last), credits(0) {
            studentId = createNewID();
        }

        string get_fname() const {return fname;}
        string get_lname() const {return lname;}

        int get_studentId() const {return studentId;}

        int get_credits() const {return credits;}

        void set_fname(string first) {fname = first;}
        void set_lname(string last) {lname = last;}

        void add_credits(int number) {credits = credits + number;}
        void clear_credits() {credits = 0;}
};

set<int> Student::existingIDs;



int main() {
    Student student = Student("Dominik", "Makas");
    
    return 0;
}
