#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int choice;
    cout << "1. Display Local Time\n";
    cout << "2. Calculate Time Zone Offset\n";
    cout << "3. Measure Response Time\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout << "Local time: " << dt << endl;
    }

    if (choice == 2) {
        time_t now = time(0);
        tm* utc = gmtime(&now);
        int offset;
        cout << "Enter UTC offset: ";
        cin >> offset;
        utc->tm_hour += offset;
        mktime(utc);
        cout << "Time in specified zone: " << asctime(utc) << endl;
    }

    if (choice == 3) {
        cout << "What is your name? ";
        time_t start = time(0);
        string name;
        cin >> name;
        time_t end = time(0);
        double seconds = difftime(end, start);
        cout << "Hello, " << name << endl;
        cout << "You took " << seconds << " seconds." << endl;
    }

    return 0;
}