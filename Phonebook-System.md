# __Contact Management System__

<br>

## Description:

This is a simple contact management system written in C++. The program allows users to add, list, search, update, and delete contact details such as name, phone number, email, and address. It is a menu-driven application that supports basic functionalities required for managing contact information.

<br>

## Features:

1. __Add Contact :__

   * User can add a new contact, including name, phone number, email, and address.
   
   * Duplicate names are not allowed; the program will notify the user if a contact with the same name already exists.

2. __List Contacts :__

    * Displays all saved contacts with their details: name, phone number, email, and address.

3. __Search Contact :__

    * Allows users to search for a contact by name. If found, the contact details will be displayed.

4. __Update Contact :__

    * Allows the user to update the contact details by searching for a specific name.

    * After updating, a message will be displayed for 5 seconds.

5. __Delete Contact :__

    * Deletes a contact by name and shifts all subsequent contacts to maintain the list structure.

    * A deletion success message is displayed for 5 seconds.

6. __Exit :__
    * Terminates the running program.

<br>

## Libraries Used:

- __iostream:__ For input and output operations.

- __stdlib.h:__ For system-related functions such as clearing the screen.

- __chrono & thread:__ Used for pausing the program and creating a delay (e.g., displaying success messages for 5 seconds).

<br>

## How to Use:

1. __Run the Program:__ The main menu will appear with options (1-6).

2. __Choose an Option:__

    * Press the number corresponding to the desired action.

    * Follow the prompts to enter contact details or search for a contact.

3. __Exit:__ To exit, press '6' in the menu.

<br>

## Code Overview:

1. __Data Structures:__

    * Four arrays (name[ ], phoneNo[ ], email[ ], and address[ ]) store up to 150 contacts.

2. __Main Menu:__

    * The user interacts with a menu to select different functionalities.

3. __Functionality:__

```
validateContact():
```
* Checks if a contact with the same name already exists.

<br>

```
addContact():
```
* Adds a new contact.

<br>

```
print():
```
* Displays a single contact's details.

<br>

```
printAll():
```
* Displays all contacts.

<br>

```
updateContact():
```
* Updates contact details and shows a message for 5 seconds.

<br>

```
deleteContact():
```
* Deletes a contact and shows a success message for 5 seconds.

<br>

```
findCounter():
```
* Searches for a contact by name.

<br>


3. __Cross-Platform Screen Clearing:__

  * The program clears the screen using system __("cls")__ for Windows and system __("clear")__ for Linux/Mac.

  <br>

  ## Notes:

   - The contact list size is fixed at 150.

   - No validation is performed for phone number or email format.

   - Input is case-sensitive, so "John" and "john" will be considered different contacts.

<br>


## Future Enhancements:

   * Dynamic memory allocation for more flexible storage.

   * Input validation for phone number and email format.

   * Case-insensitive name comparison.
   
   * File Storage and Persistence.

   * Advanced Search and Sorting.

   * Graphical User Interface (GUI).

   * Input Validation Improvements.

   * Multi-Language Support.

   <br>
   

                       the end (: