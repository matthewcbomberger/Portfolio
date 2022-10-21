#include <iostream>

using namespace std;

double input_number() {
  double number;

  cout << "Enter a number: ";
  cin >> number;

  return number;
}

void addition() {
  double number1;
  double number2;

  number1 = input_number();
  number2 = input_number();

  cout << "The addition of " << number1 << " and " << number2 << " is " << number1 + number2 << "." << endl;
}

void subtraction() {
  double number1;
  double number2;

  number1 = input_number();
  number2 = input_number();

  cout << "The subtraction of " << number1 << " and " << number2 << " is " << number1 - number2 << "." << endl;
}

void multiplication() {
  double number1;
  double number2;

  number1 = input_number();
  number2 = input_number();

  cout << "The multiplication of " << number1 << " and " << number2 << " is " << number1 * number2 << "." << endl;
}

void division() {
  double number1;
  double number2;

  number1 = input_number();
  number2 = input_number();

  cout << "The division of " << number1 << " and " << number2 << " is " << number1 / number2 << "." << endl;
}

void main_menu() {
  int choice;
  char repeat = 'Y';

  cout << endl << "-- Simple Calculator --" << endl << "Perform basic calculations." << endl;

  while(repeat == 'Y') {
    cout << "Select calculation type:" << endl << "1. Addition; 2. Subtraction" << endl << "3. Multiplication; 4. Division" << endl;
    cin >> choice;

    switch(choice) {
      case (1): {
        addition();
      } break;
      case (2): {
        subtraction();
      } break;
      case (3): {
        multiplication();
      } break;
      case (4): {
        division();
      } break;
      default: {
        cout << "ERROR: Invalid selection." << endl;
      }
    }

    cout << "Another calculation? Y for yes: ";
    cin >> repeat;
  }
}

int main() {
  main_menu();

  return 0;
}
