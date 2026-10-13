#include <iostream>
#include "input.h"
#include "converter.h"
#include "output.h"

using namespace std;

int main() {
    cout << "Конвертер валют (UAH, USD, EUR)" << endl;

    double amount = readAmount();
    string from = readCurrency("Із валюти: ");
    string to = readCurrency("У валюту: ");

    double result = convert(amount, from, to);

    if (result < 0)
        printError("непідтримувана валюта");
    else
        printResult(amount, from, result, to);

    return 0;
}
