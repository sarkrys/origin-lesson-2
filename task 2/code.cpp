#include <iostream>
#include <string>

class Counter {
private:
    int num;

public:
    Counter() : num(1) {}

    Counter(int initialNum) : num(initialNum) {}

    void setNum(int value) {
        num = value;
    }

    void increment() {
        num++;
    }

    void decrement() {
        num--;
    }

    void printValue() {
        std::cout << "Текущее значение: " << num << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    std::cout << "Хотите указать начальное значение счетчика? Введите 'yes' или 'no': ";
    std::string response;
    std::cin >> response;

    Counter mynum;

    if (response == "yes") {
        int initialValue;
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> initialValue;
        mynum.setNum(initialValue);
    }

    std::string command = "";
    while (command != "x") {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        if (command == "+") {
            mynum.increment();
        }
        else if (command == "-") {
            mynum.decrement();
        }
        else if (command == "=") {
            mynum.printValue();
        }
    }

    return 0;
}
