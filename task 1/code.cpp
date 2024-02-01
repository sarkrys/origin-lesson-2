#include <iostream>
#include <string>

class Calculator {
private:
    double num1;
    double num2;

public:
    double add(double fnum, double snum) {
        return fnum + snum;
    }

    double subtract(double fnum, double snum) {
        return fnum - snum;
    }

    double multiply(double fnum, double snum) {
        return fnum * snum;
    }

    double divide(double fnum, double snum) {
        if (snum != 0) {
            return fnum / snum;
        }
        else {
            std::cout << "Деление на ноль!" << std::endl;
            return 0;
        }
    }

    void num1meaning() {
        for (bool count = false; count == false;) {

            std::cout << "Введите num1: ";
            std::cin >> num1;
          count = set_num1(num1);
        }
    }

    void num2meaning() {
        for (bool count = false; count == false;) {

            std::cout << "Введите num2: ";
            std::cin >> num2;
            count = set_num2(num2);
        }
    }
    bool set_num2(int num2) {
        bool count;
        if (num2 == 0) {
            std::cout << "неправильный ввод num2\n";
            count = false;
        }
        else {
            count = true;
        }
        return count;
    }
    bool set_num1(int num2) {
        bool count;
        if (num1 == 0) {
            std::cout << "неправильный ввод num1\n";
            count = false;
        }
        else {
            count = true;
        }
        return count;
    }

    void calc() {
        double ffunc = add(num1, num2);
        double sfunc = multiply(num1, num2);
        double third_func = subtract(num1, num2);
        double fourth_func = subtract(num2, num1);
        double five_func = divide(num1, num2);
        double six_func = divide(num2, num1);

        std::cout << "num1 + num2 = " << ffunc << "\nnum1 - num2 = " << third_func << "\nnum2 - num1 = " << fourth_func <<
            "\nnum1 * num2 = " << sfunc << "\nnum 1 / num2 = " << five_func << "\nnum2 / num1 = " << six_func << std::endl;
    }
};

int main() {
    Calculator calc1;
    calc1.num1meaning();
    calc1.num2meaning();
    calc1.calc();

    return 0;
}