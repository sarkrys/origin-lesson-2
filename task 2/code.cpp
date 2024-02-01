#include <iostream>
#include <string>

class Counter {
private:
    int num;

public:
    Counter() : num(1) {}

    Counter(int initialNum) : num(initialNum) {}

    int increment() {
        return ++num;
    }

    int decrement() {
        return --num;
    }

    void printValue() {
        std::cout << num << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");

    std::cout << "Хотите указать начальное значение счетчика? Введите 'yes' или 'no': ";
    std::string numcount;
    std::cin >> numcount;

    Counter mynum;

    if (numcount == "yes") {
        int initialValue;
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> initialValue;
        mynum = Counter(initialValue);
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
