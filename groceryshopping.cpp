#include <iostream>
using namespace std;

int globalNum = 0;

class Groceries {
  private:
    int numberOfItems;
    string nameOfItem;
    double costOfItems;
  public:
    int getNumberOfItems() {
      return numberOfItems;
    }

    string getNameOfItem() {
      return nameOfItem;
    }

    double getCostOfItems() {
      return costOfItems;
    }

    void setNumberOfItems(int number) {
      globalNum += number;
      numberOfItems = globalNum;
    }

    void setNameOfItem(string name) {
      nameOfItem = name;
    }

    void setCostOfItems(double cost) {
      costOfItems += cost;
    }

    void calculateCost(int number, double singleCost) {
      setCostOfItems(singleCost * number);
    }
};

int main() {
  char choice = 'Y';
  int num;
  string name;
  double singCost;

  while(choice == 'Y') {
    cout << "Enter name of grocery item: ";
    cin >> name;
    cout << "Enter number of " << name << ": ";
    cin >> num;
    cout << "Enter cost of one " << name << ": ";
    cin >> singCost;

    Groceries g1;
    g1.setNumberOfItems(num);
    g1.setNameOfItem(name);
    g1.calculateCost(num, singCost);

    cout << "Total number of groceries: " << g1.getNumberOfItems() << endl;
    cout << "Total cost of groceries: $" << g1.getCostOfItems() << endl;
    cout << "Continue shopping? 'Y' for yes: ";
    cin >> choice;
  }

  return 0;
}
