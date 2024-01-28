#include <iostream>
#include <string>
double snum = 0;
bool numq(double fnum) {
    if (fnum != 0) {
        return 1;
    }
    std::cout << "Неверный ввод!\n";
    return 0;
}
class Calculator {
    public:
        double num1;
        double num2;
    double add(double fnum, double snum) {
        return fnum + snum;
    }
    double multiply(double fnum, double snum) {
        return fnum * snum;
    }
    double subtract_1_2(double fnum, double snum) {
        return snum - fnum;
    }
    double subtract_2_1(double fnum, double snum) {
        return fnum - snum;
    }
    double divide_1_2(double fnum, double snum) {
        return snum / fnum;
    }
    double divide_2_1(double fnum, double snum) {
        return fnum / snum;
    }
    double set_num1(double fnum) {
        int i = 2;
        for (; i != 1;) {
            std::cout << "Введите num1 :";
            std::cin >> fnum;
            i = numq(fnum);
            if (i == 1) {
                return fnum;
            }
        }
        double set_num2(double snum); {
            int i = 2;
            for (; i != 1;) {
                std::cout << "\nВведите num2 :";
                std::cin >> snum;
                i = numq(snum);
                if (i == 1) {
                    return snum;
                }
            }
        }
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Calculator mycalc;
    mycalc.num1 = 0;
    mycalc.num1 = mycalc.set_num1(mycalc.num1);
    mycalc.num2 = 0;
    mycalc.num2 = mycalc.set_num1(mycalc.num2);
    double ffunc = mycalc.add(mycalc.num1, mycalc.num2);
    double sfunc = mycalc.multiply(mycalc.num1, mycalc.num2);
    double third_func = mycalc.subtract_1_2(mycalc.num1, mycalc.num2);
    double fourth_func = mycalc.subtract_2_1(mycalc.num1, mycalc.num2);
    double five_func = mycalc.divide_1_2(mycalc.num1, mycalc.num2);
    double six_func = mycalc.divide_2_1(mycalc.num1, mycalc.num2);
    std::cout << "num1 + num2 = " << ffunc << "\nnum1 - num2 = " << third_func << "\nnum2 - num1 = " << fourth_func << "\nnum1 * num2 = " << sfunc << "\nnum 1 / num2 = " << six_func << "\nnum2 / num1 = " << five_func << std::endl;
    
    
    
    
    Calculator mycalctwo;
    
    mycalc.num1 = 0;  
    mycalc.num1 = mycalc.set_num1(mycalc.num1);
    mycalc.num2 = 0;
    mycalc.num2 = mycalc.set_num1(mycalc.num2);
    double ffunctwo = mycalc.add(mycalc.num1, mycalc.num2);
    double sfunctwo = mycalc.multiply(mycalc.num1, mycalc.num2);
    double third_functwo = mycalc.subtract_1_2(mycalc.num1, mycalc.num2);
    double fourth_functwo = mycalc.subtract_2_1(mycalc.num1, mycalc.num2);
    double five_functwo = mycalc.divide_1_2(mycalc.num1, mycalc.num2);
    double six_functwo = mycalc.divide_2_1(mycalc.num1, mycalc.num2);
    std::cout << "num1 + num2 = " << ffunctwo << "\nnum1 - num2 = " << third_functwo << "\nnum2 - num1 = " << fourth_functwo << "\nnum1 * num2 = " << sfunctwo << "\nnum 1 / num2 = " << six_functwo << "\nnum2 / num1 = " << five_functwo << std::endl;
    return 0;
}
