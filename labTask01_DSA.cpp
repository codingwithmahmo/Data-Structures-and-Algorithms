#include<iostream>
#include<string.h>
using namespace std;

int inventorySearch(string inventoryItems[], int size, string target)
{
    // Use size in the loop to handle different sizes dynamically
    for(int i = 0; i < size; i++)
    {
        if(inventoryItems[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size = 4;  // Correct size since there are 4 items
    string item_to_search;
    string inventoryItems[] = {"gun", "apples", "wood pieces", "table screws"};

    cout << "Enter the product to be searched in the inventory: ";
    getline(cin, item_to_search);

    int result = inventorySearch(inventoryItems, size, item_to_search);
    if(result != -1)
    {
        cout << "Product has been found at index " << result << endl;
    }
    else
    {
        cout << "Product not found!" << endl;
    }
}

