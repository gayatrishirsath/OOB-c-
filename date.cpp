#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int dd, mm, yyyy;

    // Helper function to convert month number to month name abbreviation
    string getMonthName(int month) {
        string months[] = {"jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"};
        if (month >= 1 && month <= 12) {
            return months[month - 1];
        }
        return "Invalid";
    }

public:
    // Parameterized constructor
    Date(int day, int month, int year) {
        dd = day;
        mm = month;
        yyyy = year;
    }

    // Method to display date in dd-mon-yyyy format
    void display() {
        cout << (dd < 10 ? "0" : "") << dd << "-" << getMonthName(mm) << "-" << yyyy << endl;
    }
};

int main() {
    // Initialize date object
    Date date(19, 12, 1909);
    
    // Display the date
    date.display();

    return 0;
}

