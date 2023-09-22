#include <iostream>
using namespace std;

int main() {
    int totalMatchsticks = 21;
    int playerPick, computerPick;

    cout << "Welcome to the matchstick game!" << endl;
    cout << "Rules: There are 21 matchsticks. You can pick 1, 2, 3, or 4 matchsticks in each turn." << endl;

    while (totalMatchsticks > 0) {

        cout << "Current matchsticks: " << totalMatchsticks << endl;
        cout << "Your turn. Enter the number of matchsticks to pick (1-4): ";
        cin >> playerPick;

        if (playerPick < 1 || playerPick > 4 || playerPick > totalMatchsticks) {
            cout << "Invalid input. Please pick 1, 2, 3, or 4 matchsticks." << endl;
            continue;
        }

        totalMatchsticks -= playerPick;

        if (totalMatchsticks <= 0) {
            cout << "You picked the last matchstick. You lose!" << endl;
            break;
        }

        computerPick = 5 - playerPick;
        cout << "Computer picks " << computerPick << " matchsticks." << endl;
        totalMatchsticks -= computerPick;

    }
    return 0;
}
