#Data Structures and Algorithms Program 03 , Assignment 01
#include <iostream>
using namespace std;

// Constant values for rows and seats
const int ROWS = 10;
const int SEATS = 15;

void displaySeating(char cinema[ROWS][SEATS]) {
    cout << "Cinema Seating Arrangement:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS; j++) {
            cout << cinema[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() 
{
    char cinema[ROWS][SEATS];

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < SEATS; j++) 
        {
            cinema[i][j] = 'x';  // All seats available at the beginning
        }
    }

    int row, seat;
    char choice;

    do 
    {
        // Display the current seating arrangement
        displaySeating(cinema);

        // Ask the user to enter the row and seat number
        cout << "\nEnter the row number (1 to " << ROWS << "): ";
        cin >> row;
        cout << "Enter the seat number (1 to " << SEATS << "): ";
        cin >> seat;

        // Convert to 0-based index for array access
        row--;
        seat--;

        // Check if the seat is available ('x')
        if (cinema[row][seat] == 'x') {
            // Mark the seat as booked ('o')
            cinema[row][seat] = 'o';
            cout << "Seat successfully booked!\n";
        } else {
            cout << "Sorry, this seat is already booked!\n";
        }

        // Ask if the user wants to book another seat
        cout << "Do you want to book another seat? (y/n): ";
        cin >> choice;

    } 
    while (choice == 'y' || choice == 'Y');

    // Final seating arrangement after bookings
    cout << "\nFinal seating arrangement:\n";
    displaySeating(cinema);

    return 0;
}
