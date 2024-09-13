#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string group;
};


void addContact(Contact contacts[], int &count) {
    if (count < 100) { 
        cout << "Enter Name: ";
        cin >> contacts[count].name;
        cout << "Enter Phone Number: ";
        cin >> contacts[count].phone;
        cout << "Enter Group: ";
        cin >> contacts[count].group;
        count++;
    } else {
        cout << "Contact list is full!" << endl;
    }
}


void displayContacts(Contact contacts[], int count) {
    if (count == 0) {
        cout << "No contacts available!" << endl;
    } else {
        for (int i = 0; i < count; i++) {
            cout << "Name: " << contacts[i].name 
                 << ", Phone: " << contacts[i].phone 
                 << ", Group: " << contacts[i].group << endl;
        }
    }
}


void sortByGroup(Contact contacts[], int count) {
    for (int i = 0; i < count - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < count; j++) {
            if (contacts[j].group < contacts[minIndex].group) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            Contact temp = contacts[i];
            contacts[i] = contacts[minIndex];
            contacts[minIndex] = temp;
        }
    }
    cout << "Contacts sorted by Group." << endl;
}

int main() {
    Contact contacts[100];  
    int count = 0;          
    int choice;

    do {
        cout << "\n1. Add Contact\n2. Display Contacts\n3. Sort Contacts by Group\n4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact(contacts, count);
                break;
            case 2:
                displayContacts(contacts, count);
                break;
            case 3:
                sortByGroup(contacts, count);
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid option! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
