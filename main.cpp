
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string name;
    string author;
};

int main() {
    Book b[100];
    int count = 0;
    int choice, searchID;

    do {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Book ID: ";
            cin >> b[count].id;

            cout << "Enter Book Name: ";
            cin.ignore();
            getline(cin, b[count].name);

            cout << "Enter Author Name: ";
            getline(cin, b[count].author);

            count++;
            cout << "Book Added Successfully!\n";
        }

        else if (choice == 2) {
            if (count == 0) {
                cout << "No books available.\n";
            }

            for (int i = 0; i < count; i++) {
                cout << "\nBook ID: " << b[i].id;
                cout << "\nBook Name: " << b[i].name;
                cout << "\nAuthor: " << b[i].author << "\n";
            }
        }

        else if (choice == 3) {
            cout << "Enter Book ID to search: ";
            cin >> searchID;

            bool found = false;

            for (int i = 0; i < count; i++) {
                if (b[i].id == searchID) {
                    cout << "Book Found!\n";
                    cout << "Name: " << b[i].name << "\n";
                    cout << "Author: " << b[i].author << "\n";
                    found = true;
                }
            }

            if (!found) {
                cout << "Book Not Found!\n";
            }
        }

        else if (choice == 4) {
            cout << "Thank You!\n";
        }

        else {
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}
