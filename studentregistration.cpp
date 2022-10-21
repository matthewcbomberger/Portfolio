#include <iostream>
using namespace std;

int counter = 0;

class Registrar {
  private:
    string studentName;
    int studentID;
    string className;
    int numberOfClasses;
    double currentGPA;
    string academicStanding; // Good, Fair, or Poor for instance
  public:
    string getStudentName() {
      return studentName;
    }

    int getStudentID() {
      return studentID;
    }

    string getClassName() {
      return className;
    }

    int getNumberOfClasses() {
      return numberOfClasses;
    }

    double getCurrentGPA() {
      return currentGPA;
    }

    string getAcademicStanding() {
      return academicStanding;
    }

    void setStudentName(string name) {
      studentName = name;
    }

    void setStudentID(int id) {
      studentID = id;
    }

    void setClassName(string classname) {
      className = classname;
    }

    void setNumberOfClasses(int num) {
      counter += num;
      numberOfClasses = counter;
    }

    void setCurrentGPA(double gpa) {
      currentGPA = gpa;
    }

    void setAcademicStanding(string standing) {
      academicStanding = standing;
    }

    int canRegister(double gpa) {
      if(gpa >= 3.0) {
        setAcademicStanding("Good");
        return 1;
      } else if(gpa >= 2.0) {
        setAcademicStanding("Fair");
        return 1;
      } else {
        setAcademicStanding("Poor");
        return 0;
      }
    }
};

int main() {
  string name;
  int id;
  double gpa;
  int registration;
  char continueChar = 'Y';
  string classname;
  int number = 1;
  char enter;

  cout << "Welcome to the Registrar!\nEnter your name: ";
  cin >> name;
  cout << "Enter your ID: ";
  cin >> id;
  cout << "Enter your GPA: ";
  cin >> gpa;

  Registrar r1;
  r1.setStudentName(name);
  r1.setStudentID(id);
  registration = r1.canRegister(gpa);
  cout << "Your academic standing is " << r1.getAcademicStanding() << ".\n";

  if(registration == 1) {
    cout << "You may register!\n";

    while(continueChar == 'Y') {
      cout << "Enter your class name: ";
      cin >> classname;

      r1.setClassName(classname);
      r1.setNumberOfClasses(number);

      cout << "Loading.....";
      cin >> enter;
      cout << "Successfully registered for " << r1.getClassName() << "!\nRegistered for " << r1.getNumberOfClasses() << " class(es)\nRegister for another class? 'Y' for yes: ";
      cin >> continueChar;
    }
  } else {
    cout << "You cannot register at this time. Speak with your advisor.\n";
  }

  return 0;
}
