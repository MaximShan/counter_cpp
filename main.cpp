#include <iostream>
#include <string>
#include <windows.h>
#include "Counter.h"

using namespace std;





int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    string answer;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    cin >> answer;

    Counter count;  

    if (answer == "да") {
        int n;
        cout << "Введите начальное значение счётчика: ";

        while (true) {
            cin >> n;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Ошибка: введите целое число.\n";
                continue;
            }

            char over;
            if (cin.get(over) && over != '\n') {
                cin.ignore(1000, '\n');
                cout << "Ошибка: введите целое число.\n";
                continue;
            }

            break;
        }

        count = Counter(n);

        char command;
        while (true) {
            cout << "Введите команду ('+', '-', '=' или 'x'): ";
            cin >> command;

            switch (command) {
            case '+':
                count.add();
                break;
            case '-':
                count.sub();
                break;
            case '=':
                count.show();
                break;
            case 'x':
                cout << "До свидания!" << endl;
                return 0;
            default:
                cout << "Неизвестная команда. Пожалуйста, введите '+', '-', '=' или 'x'.\n";
            }
        }

    }
    else if (answer == "нет") {
        char command;
        while (true) {
            cout << "Введите команду ('+', '-', '=' или 'x'): ";
            cin >> command;

            switch (command) {
            case '+':
                count.add();
                break;
            case '-':
                count.sub();
                break;
            case '=':
                count.show();
                break;
            case 'x':
                cout << "До свидания!" << endl;
                return 0;
            default:
                cout << "Неизвестная команда. Пожалуйста, введите '+', '-', '=' или 'x'.\n";
            }
        }
    }
	return EXIT_SUCCESS;
}