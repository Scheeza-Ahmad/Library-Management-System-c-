//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    const int MAX_BOOKS = 100;
//    int bookIDs[MAX_BOOKS];
//    string bookTitles[MAX_BOOKS];
//    string bookAuthors[MAX_BOOKS];
//    int bookCount = 0;
//    int choice;
//
//    do {
//        cout << "\nLibrary Management System\n";
//        cout << "1. Add Book\n";
//        cout << "2. View Books\n";
//        cout << "3. Search Book by ID\n";
//        cout << "4. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 1) {
//            if (bookCount >= MAX_BOOKS) {
//                cout << "Library is full, cannot add more books.\n";
//            }
//            else {
//                cout << "Enter Book ID: ";
//                cin >> bookIDs[bookCount];
//                cin.ignore(); // Ignore leftover newline character
//
//                cout << "Enter Book Title: ";
//                getline(cin, bookTitles[bookCount]);
//
//                cout << "Enter Book Author: ";
//                getline(cin, bookAuthors[bookCount]);
//
//                bookCount++;
//                cout << "Book added successfully!\n";
//            }
//        }
//        else if (choice == 2) {
//            if (bookCount == 0) {
//                cout << "No books in the library.\n";
//            }
//            else {
//                for (int i = 0; i < bookCount; i++) {
//                    cout << "Book ID: " << bookIDs[i] << endl;
//                    cout << "Title: " << bookTitles[i] << endl;
//                    cout << "Author: " << bookAuthors[i] << endl;
//                    cout << "--------------------------\n";
//                }
//            }
//        }
//        else if (choice == 3) {
//            int id;
//            cout << "Enter Book ID to search: ";
//            cin >> id;
//
//            bool found = false;
//            for (int i = 0; i < bookCount; i++) {
//                if (bookIDs[i] == id) {
//                    cout << "Book found!\n";
//                    cout << "Book ID: " << bookIDs[i] << endl;
//                    cout << "Title: " << bookTitles[i] << endl;
//                    cout << "Author: " << bookAuthors[i] << endl;
//                    found = true;
//                    break;
//                }
//            }
//
//            if (!found) {
//                cout << "Book not found.\n";
//            }
//        }
//        else if (choice == 4) {
//            cout << "Exiting the program.\n";
//        }
//        else {
//            cout << "Invalid choice, please try again.\n";
//        }
//
//    } while (choice != 4);
//
//    return 0;
//}