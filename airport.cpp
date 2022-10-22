#include <iostream>
using namespace std;

class Plane {
  private:
    string callName;
    double takeoffTime;
  public:
    string getCallName() {
      return callName;
    }

    void setCallName(string name) {
      callName = name;
    }

    double getTakeoffTime() {
      return takeoffTime;
    }

    void setTakeoffTime(double timeSet) {
      takeoffTime = timeSet;
    }
};

int main() {
  string callnm1;
  string callnm2;
  double tkoffTm1;
  double tkoffTm2;
  char continueChar = 'Y';

  cout << "Welcome to the Airport Simulator!\n";
  cout << "Enter information for two Boeing 737 airplanes and determine which to okay for takeoff.\n";
  while(continueChar == 'Y') {
    cout << "Enter call name for plane 1: ";
    cin >> callnm1;
    cout << "Enter call name for plane 2: ";
    cin >> callnm2;
    cout << "Enter takeoff time for plane 1: (in hours) ";
    cin >> tkoffTm1;
    cout << "Enter takeoff time for plane 2: (in hours) ";
    cin >> tkoffTm2;

    Plane p1;
    p1.setCallName(callnm1);
    p1.setTakeoffTime(tkoffTm1);

    Plane p2;
    p2.setCallName(callnm2);
    p2.setTakeoffTime(tkoffTm2);

    if(p1.getTakeoffTime() < p2.getTakeoffTime()) {
      cout << p1.getCallName() << " takes off first.\n";
    } else if (p1.getTakeoffTime() > p2.getTakeoffTime()) {
      cout << p2.getCallName() << " takes off first.\n";
    } else {
      cout << "Both planes are tied!\n";
    }

    cout << "Run another simulation? ";
    cin >> continueChar;
  }
}
