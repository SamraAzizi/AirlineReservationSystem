#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void mainMenu(); // Function declaration

class Management {
public:
    Management() {
        mainMenu();
    }
};

class Details {
public:
    static string name, gender;
    static int cId;
    int phoneNo, age;
    string add;
    char arr[100];

    void information() {  // Fixed function declaration
        cout << "\nEnter The Customer ID: ";
        cin >> cId;
        cout << "\nEnter The Name: ";
        cin.ignore(); // To clear buffer before getline
        getline(cin, name);
        cout << "\nEnter The Age: ";
        cin >> age;
        cout << "\nEnter The Address: ";
        cin.ignore();
        getline(cin, add);
        cout << "\nGender: ";
        cin >> gender;
        cout << "\nYour Details Are Saved! \n" << endl;
    }
};

// Static variables initialization
int Details::cId;
string Details::name;
string Details::gender;

class Registration {
public:
    static int Choice;
    int choice1, back;
    static float Charges;

    void flights() {
        string flightN[] = {"Pakistan", "Canada", "India", "USA"};

        for (int a = 0; a < 4; a++) { // Fixed array iteration limit
            cout << (a + 1) << ". Flight to " << flightN[a] << endl;
        }

        cout << "\nWelcome To The Airlines! " << endl;
        cout << "Press The Number Of The Country Of Which You Want To Book The Flight: ";
        cin >> Choice;

        switch (Choice) {
        case 1: {
            cout << "__________________Welcome To Pakistan Airlines__________________\n" << endl;
            cout << "1. PAK - 434 (Rs. 14000)" << endl;
            cout << "2. PAK - 414 (Rs. 100000)" << endl;
            cout << "3. PAK - 934 (Rs. 9000)" << endl;
            cout << "\nSelect The Flight You Want To Book: ";
            cin >> choice1;

            if (choice1 == 1) Charges = 14000;
            else if (choice1 == 2) Charges = 100000;
            else if (choice1 == 3) Charges = 9000;
            else {
                cout << "Invalid input, shifting to previous menu" << endl;
                flights();
                return;
            }

            cout << "You have successfully booked the flight!" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) mainMenu();
            else mainMenu();
            break;
        }
        default:
            cout << "Invalid input, shifting to main menu" << endl;
            mainMenu();
            break;
        }
    }
};

// Static variables initialization
float Registration::Charges;
int Registration::Choice;

class Ticket : public Registration, public Details {
public:
    void Bill() {
        string destination = " ";

        ofstream outf("records.txt");
        if (!outf) {
            cout << "File error!" << endl;
            return;
        }

        outf << "________________XYZ Airlines____________" << endl;
        outf << "________________Ticket_________________" << endl;
        outf << "Customer ID: " << Details::cId << endl;
        outf << "Customer Name: " << Details::name << endl;
        outf << "Customer Gender: " << Details::gender << endl;

        switch (Registration::Choice) {
        case 1: destination = "Pakistan"; break;
        case 2: destination = "Canada"; break;
        case 3: destination = "India"; break;
        case 4: destination = "USA"; break;
        default: destination = "Unknown";
        }

        outf << "Destination: " << destination << endl;
        outf << "Flight Cost: Rs. " << Registration::Charges << endl;
        outf.close();
    }

    void dispBill() {
        ifstream ifs("records.txt");

        if (!ifs) {
            cout << "File error!" << endl;
            return;
        }

        string line;
        while (getline(ifs, line)) {
            cout << line << endl;
        }
        ifs.close();
    }
};

void mainMenu() {
    int lchoice;
    cout << "\n\tXYZ Airlines Reservation System\n";
    cout << "\t1. Enter Customer Details\n";
    cout << "\t2. Book a Flight\n";
    cout << "\t3. Print Ticket\n";
    cout << "\t4. Exit\n";
    cout << "Enter your choice: ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice) {
    case 1:
        d.information();
        mainMenu();
        break;
    case 2:
        r.flights();
        break;
    case 3:
        t.Bill();
        t.dispBill();
        mainMenu();
        break;
    case 4:
        cout << "Thank you for using XYZ Airlines!" << endl;
        exit(0);
        break;
    default:
        cout << "Invalid choice! Please try again." << endl;
        mainMenu();
        break;
    }
}

int main() {
    Management m;
    return 0;
}
