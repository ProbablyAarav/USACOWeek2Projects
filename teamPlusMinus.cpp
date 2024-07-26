#include <iostream>
using namespace std;

int teamPlusMinus(int** games, int numGames) {
    int totalPlusMinus = 0;

    // Iterate through each game in the 2D array
    for (int i = 0; i < numGames; ++i) {
        // Extract home and away scores
        int homeScore = games[i][0];
        int awayScore = games[i][1];

        // Compute the plus-minus for the current game
        int gamePlusMinus = homeScore - awayScore;

        // Add the game plus-minus to the total
        totalPlusMinus += gamePlusMinus;
    }

    return totalPlusMinus;
}

void print2DArray(int** array, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void free2DArray(int** array, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

int main() {
    // Define the number of games
    int numGames = 6;
    int numScores = 2; // home and away

    // Create and initialize the 2D array
    int** games = new int*[numGames];
    for (int i = 0; i < numGames; ++i) {
        games[i] = new int[numScores];
    }

    // Initialize with example values
    games[0][0] = 84; games[0][1] = 92;
    games[1][0] = 95; games[1][1] = 93;
    games[2][0] = 86; games[2][1] = 88;
    games[3][0] = 86; games[3][1] = 83;
    games[4][0] = 112; games[4][1] = 103;
    games[5][0] = 105; games[5][1] = 95;

    // Calculate and print the team +/- for the home team
    int result = teamPlusMinus(games, numGames);
    cout << "Team +/-: " << result << endl;

    // Free allocated memory
    free2DArray(games, numGames);

    return 0;
}
