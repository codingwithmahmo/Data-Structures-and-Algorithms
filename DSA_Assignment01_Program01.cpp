#include <iostream>
using namespace std;
const int MAX_BOOKS = 100; 

int main() 
{
    int availableCopies[MAX_BOOKS] = {0}; 
    availableCopies[0] = 5;
    
	cout << "Book 0 added with 5 copies." << endl;
    int bookID;
    int choice;

    while (true) {
        cout << "\nLibrary Management System\n";
        cout << "1. Borrow a book\n";
        cout << "2. Return a book\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
		{
            cout << "Enter book ID to borrow (0 to 99): ";
            cin >> bookID;

            if (bookID >= 0 && bookID < MAX_BOOKS) 
			{
                if (availableCopies[bookID] > 0) 
				{
                    availableCopies[bookID]--;
                    cout << "Book " << bookID << " borrowed successfully. Remaining copies: " << availableCopies[bookID] << endl;
                } 
				else 
				{
                    cout << "No copies of Book " << bookID << " available to borrow." << endl;
                }
            } 
			else 
			{
                cout << "Invalid book ID!" << endl;
            }
        } 
		else if (choice == 2) 
		{
            // Return a book
            cout << "Enter book ID to return (0 to 99): ";
            cin >> bookID;

            if (bookID >= 0 && bookID < MAX_BOOKS) 
			{
                availableCopies[bookID]++;
                cout << "Book " << bookID << " returned successfully. Available copies: " << availableCopies[bookID] << endl;
            } 
			else 
			{
                cout << "Invalid book ID!" << endl;
            }
        } 
		else if (choice == 3) 
		{
            // Exit the program
            cout << "Exiting the system." << endl;
            break;
        } 
		else 
		{
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}

