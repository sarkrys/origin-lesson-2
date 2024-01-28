#include <iostream>
#include <string>

class counter {
public:
    int num;
    int uppone(int num) {
        return ++num;
    }
    int downnum(int num) {
        return --num;
    }
    void cheknum(int num) {
    std::cout << num;
    std::cout << std::endl;
    }
    int createnum(int num) {
        std::cout << "введите начальное  значение счётчика ";
        std::cin >> num;
        return num;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    counter mynum;
    mynum.num = 1;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    std::string numcount = "";
    std::cin >> numcount;
    if (numcount == "yes") {//как сделать так чтобы считывалось значения numcount на русском языке (если я делаю считывание значения на русском языке то это не работает)
        mynum.num = mynum.createnum(mynum.num);
    }
    std::string track = "o";
    for (; track != "x";) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> track;
        if (track == "+") {
            mynum.num = mynum.uppone(mynum.num);
        }
        else if (track == "-") {
            mynum.num = mynum.downnum(mynum.num);
        }
        else if (track == "=") {
            mynum.cheknum(mynum.num);
        }

    }
    return 0;
}
