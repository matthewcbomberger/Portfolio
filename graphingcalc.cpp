#include <iostream>
#include <cmath>

using namespace std;

void print_linear() {
  double slope;
  double y_intercept;

  cout << "Enter the slope in floating point: ";
  cin >> slope;
  cout << "Enter the y-intercept in floating point: ";
  cin >> y_intercept;

  cout << "The equation is: y = " << slope << " * x + " << y_intercept << endl;
  cout << "The data for graphing this function in a spreadsheet is as follows:" << endl << endl;

  for(int x = 0; x <= 10; x++) {
    cout << "(" << x << ", " << slope * x + y_intercept << ")" << endl;
  }

  cout << endl << "END OF PROGRAM" << endl;
}

void print_quadratic() {
  double a_value;
  double b_value;
  double c_value;

  cout << "Recall that the quadratic equation has the form: y = a*x^2 + b*x + c" << endl;
  cout << "Enter the value for a in floating point: ";
  cin >> a_value;
  cout << "Enter the value for b in floating point: ";
  cin >> b_value;
  cout << "Enter the value for c in floating point: ";
  cin >> c_value;

  cout << "The equation is: y = " << a_value << " * x^2 + " << b_value << " * x + " << c_value << endl;
  cout << "The data for graphing this function in a spreadsheet is as follows:" << endl << endl;

  for(int x = 0; x <= 10; x++) {
    cout << "(" << x << ", " << a_value * pow(x, 2) + b_value * x + c_value << ")" << endl;
  }

  cout << endl << "END OF PROGRAM" << endl;
}

void print_logrithmic() {
  double a_value;
  double b_value;

  cout << "Recall that the logrithmic equation has the form: y = a*log(b*x)" << endl;
  cout << "Enter the value for a in floating point: ";
  cin >> a_value;
  cout << "Enter the value for b in floating point: ";
  cin >> b_value;

  cout << "The equation is: y = " << a_value << " * log(" << b_value << " * x)" << endl;
  cout << "The data for graphing this function in a spreadsheet is as follows:" << endl << endl;;

  for(int x = 0; x <= 10; x++) {
    cout << "(" << x << ", " << a_value * log(b_value * x) << ")" << endl;
  }

  cout << endl << "END OF PROGRAM" << endl;
}

void print_exponential() {
  double a_value;
  double b_value;

  cout << "Recall that the exponential equation has the form: y = a*exp(b*x)" << endl;
  cout << "Enter the value for a in floating point: ";
  cin >> a_value;
  cout << "Enter the value for b in floating point: ";
  cin >> b_value;

  cout << "The equation is: y = " << a_value << " * exp(" << b_value << " * x)" << endl;
  cout << "The data for graphing this function in a spreadsheet is as follows:" << endl << endl;

  for(int x = 0; x <= 10; x++) {
    cout << "(" << x << ", " << a_value * exp(b_value * x) << ")" << endl;
  }

  cout << endl << "END OF PROGRAM" << endl;
}

void main_menu() {
  int choice;

  cout << endl << "-- Graphing Calculator Program --" << endl << "A program that generates data for plotting functions." << endl;
  cout << endl << "Enter function type:" << endl << "1. Linear Equation; 2. Quadratic Equation" << endl << "3. Logarithmic Equation; 4. Exponential Equation" << endl;
  cin >> choice;

  switch(choice) {
    case (1): {
      print_linear();
    } break;
    case (2): {
      print_quadratic();
    } break;
    case (3): {
      print_logrithmic();
    } break;
    case (4): {
      print_exponential();
    } break;
    default: {
      cout << "ERROR, restart program." << endl;
    }
  }
}

int main() {
  main_menu();

  return 0;
}
