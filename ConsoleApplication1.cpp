#include <iostream>
#include <cmath>

using namespace std;
 
double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "Ошибка: деление на ноль" << endl;
        return 0;
    }
}

double power(double x, double y) {
    return pow(x, y);
}

double squareRoot(double x) {
    if (x >= 0) {
        return sqrt(x);
    }
    else {
        cout << "Ошибка: извлечение корня из отрицательного числа" << endl;
        return 0;
    }
}

double percentage(double x) {
    return x / 100;
}

double factorial(double x) {
    if (x == 0 || x == 1) {
        return 1;
    }
    else {
        return x * factorial(x - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");\
    int choice;
    double num1, num2;

    while (true) {
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;
        cout << "Введите номер операции (1-9): ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Введите два числа для сложения: ";
            cin >> num1 >> num2;
            cout << "Результат: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Введите два числа для вычитания: ";
            cin >> num1 >> num2;
            cout << "Результат: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Введите два числа для умножения: ";
            cin >> num1 >> num2;
            cout << "Результат: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Введите два числа для деления: ";
            cin >> num1 >> num2;
            cout << "Результат: " << divide(num1, num2) << endl;
            break;
        case 5:
            cout << "Введите основание и степень: ";
            cin >> num1 >> num2;
            cout << "Результат: " << power(num1, num2) << endl;
            break;
        case 6:
            cout << "Введите число для извлечения корня: ";
            cin >> num1;
            cout << "Результат: " << squareRoot(num1) << endl;
            break;
        case 7:
            cout << "Введите число для нахождения 1 процента: ";
            cin >> num1;
            cout << "Результат: " << percentage(num1) << endl;
            break;
        case 8:
            cout << "Введите число для нахождения факториала: ";
            cin >> num1;
            cout << "Результат: " << factorial(num1) << endl;
            break;
        case 9:
            cout << "Программа завершена." << endl;
            return 0;
        default:
            cout << "Неверный выбор. Пожалуйста, введите число от 1 до 9." << endl;
        }
    }

    return 0;
}
