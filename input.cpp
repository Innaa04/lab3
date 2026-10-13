#include "input.h"
#include <iostream>

using namespace std;

// Рецепт функції для зчитування суми грошей
double readAmount() {
    double amount;
    cout << "Введіть суму: ";
    
    // Цикл працює, поки користувач вводить літери або мінусове число
    while (!(cin >> amount) || amount <= 0) {
        cin.clear();            // Скидаємо помилку, якщо ввели літери
        cin.ignore(1000, '\n'); // Очищаємо пам'ять від неправильного введення
        cout << "Помилка! Введіть додатне число: ";
    }
    return amount; // Повертаємо правильну суму в програму
}

// Рецепт функції для зчитування коду валюти
string readCurrency(const string& prompt) {
    string code;
    cout << prompt; // Виводимо підказку (наприклад: "Із валюти: ")
    cin >> code;    // Зчитуємо те, що написав користувач
    return code;    // Повертаємо код валюти
}
