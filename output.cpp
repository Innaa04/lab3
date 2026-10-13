#include "output.h"
#include <iostream>
#include <iomanip>

using namespace std;

void printResult(double amount, const string& from, 
                 double result, const string& to) {
    cout << fixed << setprecision(2);
    cout << amount << " " << from << " = " << result << " " << to << endl;
}

void printError(const string& message) {
    cout << "Помилка: " << message << endl;
}
