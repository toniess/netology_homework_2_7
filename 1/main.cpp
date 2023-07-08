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
	std::cout << "������� � ������ ����������" << std::endl;
#elif MODE == 1
	std::cout << "������� � ������ ������" << std::endl;
	int a, b;
	std::cout << "������� ����� 1:" << std::endl;
	std::cin >> a;
	std::cout << "������� ����� 2:" << std::endl;
	std::cin >> b;
	std::cout << "��������� ��������: " << add(a, b) << std::endl;
#else
	std::cout << "����������� �����. ���������� ������" << std::endl;
#endif // !MODE

}

