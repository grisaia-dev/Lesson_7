#define MACRO 1

#ifdef MACRO
#include <iostream>
#endif

#if MACRO == 1
int add(int _num1, int _num2) {
	return _num1 + _num2;
}
#endif

int main() {
#ifdef MACRO
	setlocale(LC_ALL, "Rus");
	#if MACRO == 0
	std::cout << "Работаю в режиме треннировки!" << std::endl;
	#elif MACRO == 1
	std::cout << "Работаю в боевом режиме!" << std::endl;

	int a = 0, b = 0;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;

	std::cout << "Результат сложения: " << add(a, b) << std::endl;
	#else
	std::cout << "Не известный режим!" << std::endl;
	#endif
#else
#error Константа не определена
#endif
}
