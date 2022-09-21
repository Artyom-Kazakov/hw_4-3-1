#include <iostream>

class Calculator {

public:
	double num1 = 0, num2 = 0;
	
	void double_add(double num1, double num2) {
		std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
	}

	void double_multiply(double num1, double num2) {
		std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
	}

	void double_substract_1_2(double num1, double num2) {
		std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
	}

	void double_substract_2_1(double num1, double num2) {
		std::cout << "num2 - num1 = " << num2 - num1 << std::endl;
	}

	void double_divide_1_2(double num1, double num2) {
		std::cout << "num1 / num1 = " << num1 / num2 << std::endl;
	}

	void double_divide_2_1(double num1, double num2) {
		std::cout << "num2 / num1 = " << num2 / num1 << std::endl;
	}

	bool set_num1(double &num1) {
		while (num1 == 0) {
			std::cout << "Неверный ввод! \nВведите num1: ";
			std::cin >> num1;
		}
		this->num1 = num1;
		return true;
	}

	bool set_num2(double &num2) {
		while (num2 == 0) {
			std::cout << "Неверный ввод! \nВведите num2: ";
			std::cin >> num2;
		}
		this->num2 = num2;
		return true;
	}
};

int main() {
	
	setlocale(LC_ALL, "Russian");

	Calculator calc;	

	double num1, num2 = 0;
	
	std::cout << "Введите num1: ";
	std::cin >> num1;
	calc.set_num1(num1);
	
	std::cout << "Введите num2: ";
	std::cin >> num2;
	calc.set_num2(num2);
	
	calc.double_add(num1, num2);
	calc.double_multiply(num1, num2);
	calc.double_substract_1_2(num1, num2);
	calc.double_substract_2_1(num1, num2);
	calc.double_divide_1_2(num1, num2);
	calc.double_divide_2_1(num1, num2);

	return 0;
}