#include "converter.h"

using namespace std;

// Фіксовані курси: скільки гривень коштує 1 одиниця валюти
static double rateToUAH(const string& cur) {
    if (cur == "UAH") return 1.0;
    if (cur == "USD") return 41.5;
    if (cur == "EUR") return 45.0;
    return -1;
}

double convert(double amount, const string& from, const string& to) {
    double rFrom = rateToUAH(from);
    double rTo = rateToUAH(to);
    if (rFrom < 0 || rTo < 0) return -1;
    return amount * rFrom / rTo;
}
