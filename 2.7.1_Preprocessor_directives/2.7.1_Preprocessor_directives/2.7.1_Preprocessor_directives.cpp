#include <iostream>

#define MODE 1

#ifndef MODE
#error Не определена константа MODE
#endif

#if MODE == 1
int sum(int a, int b)
{	
	return a + b;
}
#endif

int main()
{
	setlocale(LC_ALL, "RU");
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int a, b;
	std::cout << "Введите первое целое число для сложения: ";
	std::cin >> a;
	std::cout << "Введите второе целое число для сложения: ";
	std::cin >> b;
	std::cout << "Результат сложения: " << sum(a, b) << std::endl;	
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
}
