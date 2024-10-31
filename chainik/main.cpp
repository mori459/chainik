#include <iostream>
#include <windows.h>

int summ(int num1, int num2) {
	return num1 + num2;
}
int diff(int num1, int num2) {
	return num1 - num2;
}
int prod(int num1, int num2) {
	return num1 * num2;
}
int quot(int num1, int num2) {
	return num1 / num2;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num1, num2;
	char opChoice;

	int (*math[])(int num1, int num2) = {summ, diff, prod, quot};


	std::cout << "������� ������ �����: ";
	std::cin >> num1;
	std::cout << "������� ������ �����: ";
	std::cin >> num2;
	do
	{
		std::cout << "�������� ��������\n1) ����� \n2) �������� \n3) ���������\n4) �������\n";
		std::cin >> opChoice;
	} while (opChoice < '1' || opChoice > '4');

	std::cout << math[opChoice - '1'](num1, num2);


	return 0;
}