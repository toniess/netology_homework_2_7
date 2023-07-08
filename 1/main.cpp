#include <iostream>

#define MODE 1

#ifndef MODE
#error Define MODE is required!
#endif // !MODE

#if MODE == 1

int add(int a, int b)
{
	return a + b;
}

#endif // MODE == 1

int main()
{
	setlocale(LC_ALL, "russian");
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме" << std::endl;
	int a, b;
	std::cout << "Введите число 1:" << std::endl;
	std::cin >> a;
	std::cout << "Введите число 2:" << std::endl;
	std::cin >> b;
	std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif // !MODE

}

