#include<iostream>
#include<stdlib.h>
#include<chrono>    // For sleep functionality
#include<thread>    // For sleep functionality

using namespace std;

string name[150];
string phoneNo[150];
string email[150];
string address[150];
int counter = -1;

// Validates if the contact already exists
int validateContact(string tmpName) {
    for(int i = 0; i <= counter; i++) {
        if (name[i] == tmpName) {
            return 0; // Contact found, return 0
        }
    }
    return 1; // Contact not found, return 1
}

// Adds a new contact
void addContact() {
    string tmpName;
    cin.ignore(); // Make sure to clear input buffer before getline
    cout << "Enter Name: ";
    getline(cin, tmpName); // Allows for full names with spaces

    if (validateContact(tmpName) == 1) {
        if (counter >= 149) {
            cout << "Contact list is full!" << endl;
            return;
        }
        counter++;
        name[counter] = tmpName;
    } else {
        cout << endl << "Contact already exists with this Name" << endl;
        return;
    }

    cout << "Enter Phone No: ";
    cin >> phoneNo[counter];
    cout << "Enter Email: ";
    cin >> email[counter];
    cout << "Enter Address: ";
    cin.ignore(); // Ignore newline character after last cin
    getline(cin, address[counter]); // Allows for full addresses with spaces
}

// Prints a single contact
void print(int tmpCounter) {
    if (name[tmpCounter].empty()) // Checks if the contact is deleted
        return;

    if (counter > -1) {
        cout << "Name: " << name[tmpCounter] << endl;
        cout << "Phone No: " << phoneNo[tmpCounter] << endl;
        cout << "Email: " << email[tmpCounter] << endl;
        cout << "Address: " << address[tmpCounter] << endl << endl;
        cout << "Press any key to view next/continue..." << endl << endl;
        cin.get(); // Wait for a key press
    }
}

// Prints all contacts
void printAll() {
    if (counter > -1) {
        for (int i = 0; i <= counter; i++) {
            print(i);
        }
    }
}

// Updates a contact
void updateContact(int tmpCounter) {
    string tmpName;

    cout << "\nUpdating contact details for:\n";
    cout << "Current Name: " << name[tmpCounter] << endl;
    cout << "Enter New Name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, tmpName);

    if (validateContact(tmpName)) {
        name[tmpCounter] = tmpName;
    } else {
        cout << endl << "Contact already exists with this Name" << endl;
        return;
    }

    cout << "\nCurrent Phone No: " << phoneNo[tmpCounter] << endl;
    cout << "Enter New Phone No: ";
    cin >> phoneNo[tmpCounter];

    cout << "\nCurrent Email: " << email[tmpCounter] << endl;
    cout << "Enter New Email: ";
    cin >> email[tmpCounter];

    cout << "\nCurrent Address: " << address[tmpCounter] << endl;
    cout << "Enter New Address: ";
    cin.ignore(); // Ignore newline character after last cin
    getline(cin, address[tmpCounter]);

    // Blue highlighted message for successful update
    cout << "\n\033[1;34mContact Updated Successfully!\033[0m" << endl;

    // Delay for 5 seconds
    std::this_thread::sleep_for(std::chrono::seconds(5));
}


// Deletes a contact
void deleteContact(int tmpCounter) {
    for (int i = tmpCounter; i < counter; i++) {
        name[i] = name[i + 1];
        phoneNo[i] = phoneNo[i + 1];
        email[i] = email[i + 1];
        address[i] = address[i + 1];
    }
    counter--; // Reduce the counter after deleting

    // ANSI escape code for red text
    cout << "\033[1;31mContact deleted successfully...\033[0m" << endl;

    std::this_thread::sleep_for(std::chrono::seconds(5)); // Delay for 5 seconds
}

// Finds the index of a contact by name
int findCounter() {
    if (counter < 0)
        return -1;

    string tmpName;
    cin.ignore(); // Make sure to clear input buffer before getline
    cout << "Enter Name: ";
    getline(cin, tmpName);
    for (int i = 0; i <= counter; i++) {
        if (name[i] == tmpName) {
            return i;
        }
    }
    return -1; // No match found
}

// Function to clear the screen based on OS
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Main menu
int main() {
    char op;
    do {
        clearScreen(); // Clear the screen depending on the OS
        cout << "1. Add Contact" << endl;
        cout << "2. List Contacts" << endl;
        cout << "3. Search Contact" << endl;
        cout << "4. Update Contact" << endl;
        cout << "5. Delete Contact" << endl;
        cout << "6. Exit" << endl << endl;
        cout << "Enter Option (1-6): ";
        cin >> op;

        switch(op) {
            case '1':
                addContact();
                cout << "\033[1;32mContact added successfully...\033[0m" << endl; // Highlight in green
                cout << "Press * to continue" << endl;
                char ch;
                do {
                    cin >> ch;
                } while (ch != '*');  // Wait until user presses '*'
                break;
            case '2':
                printAll();
                break;
            case '3': {
                int tmpCounter = findCounter();
                if (tmpCounter > -1) {
                    print(tmpCounter);
                }
                break;
            }
            case '4': {
                int tmpCounter = findCounter();
                if (tmpCounter > -1) {
                    updateContact(tmpCounter);
                }
                break;
            }
            case '5': {
                int tmpCounter = findCounter();
                if (tmpCounter > -1) {
                    deleteContact(tmpCounter);
                }
                break;
            }
            case '6':
                break;
            default:
                cout << "Invalid option!" << endl;
        }
    } while (op != '6');

    return 0;
}