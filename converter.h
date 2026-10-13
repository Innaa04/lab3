#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>

// Конвертує суму з валюти "from" у валюту "to".
// Якщо одна з валют не підтримується - повертає -1.
double convert(double amount, const std::string& from, const std::string& to);

#endif
