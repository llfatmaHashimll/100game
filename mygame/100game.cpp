#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    cout << "welcome to the 100 game!" << endl;
    cout << "the sum is 0, whoever reaches 100 first wins!" << endl;

    while (sum <= 100) {
        int move;
        cout << "Player1, add a number from 1 to 10: ";
        cin >> move;
        while (move > 10) {
            cout << "The number must be from 1 to 10!" << endl;
            cout << "Player1, add a number from 1 to 10: ";
            cin >> move;
        }
        sum += move;
        cout << "Now we have " << sum << " points." << endl;
        while (sum > 100) {
            sum -= move;
            cout << "the sum must not be higher than 100, please enter a valid number" << endl;
            cout << "Now are back to " << sum << " points." << endl;
            cout << "Player1, add a number from 1 to 10: ";
            cin >> move;
            while (move > 10) {
                cout << "The number must be from 1 to 10!" << endl;
                cout << "Player1, add a number from 1 to 10: ";
                cin >> move;
            }
            sum += move;
            cout << "Now we have " << sum << " points." << endl;
        }
        if (sum == 100) {
            cout << "Player1 is the winner!" << endl;
            break;
        }

        cout << "Player2, add a number from 1 to 10: ";
        cin >> move;
        while (move > 10) {
            cout << "The number must be from 1 to 10!" << endl;
            cout << "Player2, add a number from 1 to 10: ";
            cin >> move;
        }
        sum += move;
        cout << "Now we have " << sum << " points." << endl;
        while (sum > 100) {
            sum -= move;
            cout << "the sum must not be higher than 100, please enter a valid number" << endl;
            cout << "Now we are back to " << sum << " points." << endl;
            cout << "Player2, add a number from 1 to 10: ";
            cin >> move;
            while (move > 10) {
                cout << "The number must be from 1 to 10!" << endl;
                cout << "Player2, add a number from 1 to 10: ";
                cin >> move;
            }
            sum += move;
            cout << "Now we have " << sum << " points." << endl;
        }
        if (sum == 100) {
            cout << "Player2 is the winner!" << endl;
            break;
        }
    }

    cout << "Thanks for playing my game!" << endl;
    return 0;
}