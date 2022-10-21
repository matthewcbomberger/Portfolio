#include <iostream>

using namespace std;

char places_on_board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

void win_state() {
  if(places_on_board[1] == places_on_board[2] && places_on_board[1] == places_on_board[3]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[4] == places_on_board[5] && places_on_board[4] == places_on_board[6]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[7] == places_on_board[8] && places_on_board[7] == places_on_board[9]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[1] == places_on_board[4] && places_on_board[1] == places_on_board[7]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[2] == places_on_board[5] && places_on_board[2] == places_on_board[8]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[3] == places_on_board[6] && places_on_board[3] == places_on_board[9]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[1] == places_on_board[5] && places_on_board[1] == places_on_board[9]) {
    cout << "We have a winner!\n";
  } else if(places_on_board[3] == places_on_board[5] && places_on_board[3] == places_on_board[7]) {
    cout << "We have a winner!\n";
  } else {
    cout << "No winner yet.\n";
  }
}

void second_player() {
  int move;

  cout << "Second player move: ";
  cin >> move;

  places_on_board[move] = 'X';
}

void first_player() {
  int move;

  cout << "First player move: ";
  cin >> move;

  places_on_board[move] = 'O';
}

void draw_board() {
  cout << places_on_board[1] << " | " << places_on_board[2] << " | " << places_on_board[3] << endl;
  cout << "---------\n";
  cout << places_on_board[4] << " | " << places_on_board[5] << " | " << places_on_board[6] << endl;
  cout << "---------\n";
  cout << places_on_board[7] << " | " << places_on_board[8] << " | " << places_on_board[9] << endl;
}

void main_menu() {
  cout << "--------------------\n";
  cout << "| Tic Tac Toe Game |\n";
  cout << "--------------------\n";
  cout << "Welcome to Tic Tac Toe! Player one is 'O', player two is 'X'.\n\n";
}

int main() {
  char choice = 'Y';

  main_menu();
  while(choice == 'Y') {
    draw_board();
    first_player();
    draw_board();
    second_player();
    draw_board();
    win_state();

    cout << "Continue? 'Y' for yes: ";
    cin >> choice;
  }

  return 0;
}
