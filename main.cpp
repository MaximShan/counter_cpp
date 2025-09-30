#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Counter {
private:
	int num;
public:
	Counter() {
		num = 1;
	}
	Counter(int num) {
		this->num = num;
	}
	void add() {
		num++;
	}
	void sub() {
		num--;
	}
	void show() {
		cout << num << endl;
	}
};



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    string answer;
    cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    cin >> answer;

    Counter count;  

    if (answer == "��") {
        int n;
        cout << "������� ��������� �������� ��������: ";

        while (true) {
            cin >> n;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "������: ������� ����� �����.\n";
                continue;
            }

            char over;
            if (cin.get(over) && over != '\n') {
                cin.ignore(1000, '\n');
                cout << "������: ������� ����� �����.\n";
                continue;
            }

            break;
        }

        count = Counter(n);

        char command;
        while (true) {
            cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
                cout << "�� ��������!" << endl;
                return 0;
            default:
                cout << "����������� �������. ����������, ������� '+', '-', '=' ��� 'x'.\n";
            }
        }

    }
    else if (answer == "���") {
        char command;
        while (true) {
            cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
                cout << "�� ��������!" << endl;
                return 0;
            default:
                cout << "����������� �������. ����������, ������� '+', '-', '=' ��� 'x'.\n";
            }
        }
    }
	return EXIT_SUCCESS;
}