#include <iostream>
#include <string>
using namespace std;

double readAverageCO2(int count) {
    double sum = 0.0;
    for (int i = 1; i <= count; i++) {
        double co2;
        cout << "Enter CO2 level #" << i << " (ppm): ";
        cin >> co2;
        sum += co2;
    }
    return sum / count;
}

int main() {
    cout << "Whats your name?: ";

    string name;
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;

    double average = readAverageCO2(3);
    cout << "Average CO2 level: " << average << " ppm" << endl;

    if (average > 1000) {
        cout << "Turning on filtration so u wont die." << endl;
    } else {
        cout << "Yay ur not gonna die." << endl;
    }

    return 0;
}
