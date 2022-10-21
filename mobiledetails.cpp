#include <iostream>
using namespace std;

class Mobile {
  private:
    int mobileSIM;
    string mobileName;
    string mobileProvider;
    string userName;
    string mobileStatus;
  public:
    int getSIM() {
      return mobileSIM;
    }

    string getPhoneName() {
      return mobileName;
    }

    string getProvider() {
      return mobileProvider;
    }

    string getUserName() {
      return userName;
    }

    string getStatus() {
      return mobileStatus;
    }

    void setSIM(int id) {
      mobileSIM = id;
    }

    void setPhoneName(string phoneName) {
      mobileName = phoneName;
    }

    void setProvider(string provider) {
      mobileProvider = provider;
    }

    void setUserName(string user) {
      userName = user;
    }

    void setStatus(string status) {
      mobileStatus = status;
    }

    void determineStatus(string serviceID) {
      if(serviceID == "LTE" || serviceID == "3G" || serviceID == "2G" || serviceID == "1G") {
        setStatus("Online");
      } else {
        setStatus("Offline");
      }
    }
};

int main() {
  int sim;
  string phoneName;
  string provider;
  string user;
  string serviceIdentifier;

  cout << "Enter SIM: ";
  cin >> sim;
  cout << "Enter Phone Name: ";
  cin >> phoneName;
  cout << "Enter Provider: ";
  cin >> provider;
  cout << "Enter User Name: ";
  cin >> user;
  cout << "Enter Service Identifier: ";
  cin >> serviceIdentifier;

  Mobile m1;
  m1.setSIM(sim);
  m1.setPhoneName(phoneName);
  m1.setProvider(provider);
  m1.setUserName(user);
  m1.determineStatus(serviceIdentifier);

  cout << m1.getUserName() << "'s " << m1.getPhoneName() << " phone is " << m1.getStatus() << ".\n";

  return 0;
}
