#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void evaluation(float weightedSum) {
  float thresholdVal = 0.5;

  cout << "Is the weighted sum greater than or equal to the threshold?\n";
  if (weightedSum >= thresholdVal) {
    cout << "Yes\n";
  }
  else {
    cout << "No\n";
  }
}

float perceptron(float input[5], float weights[5]) {
  float weightedSumVal = 0.0;

  for (int i = 0; i < 5; i++) {
    weightedSumVal += input[i] * weights[i];
    cout << weightedSumVal << endl;
  }

  return weightedSumVal;
}

int main() {
  const int inWSize = 5;
  float inputArray[inWSize];
  float weightArray[inWSize];
  bool loopVal = true;
  string continueString;

  while (loopVal == true) {
    cout << "Welcome to the simple perceptron program!\nThere are five inputs and weights, each between 0.0 and 1.0.\nEnter these numbers... now!\n\n";
    for (int i = 0; i < 5; i++) {
      cout << "Enter the number " << i + 1 << " input value and weight, seperated by a space: ";
      cin >> inputArray[i] >> weightArray[i];
    }

    evaluation(perceptron(inputArray, weightArray));

    cout << "Continue? ";
    cin >> continueString;
    if (continueString == "Yes") {
      cout << "Okay!\n\n";
    }
    else {
      cout << "Okay, bye\n";
      loopVal = false;
    }
  }

  return 0;
}
