#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	//������� 1
	/*
	float distance;
	int time;
	do
	{
		std::cout << "������� ���������� �� ���������: ";
		std::cin >> distance;
	} while (distance <= 0);

	do
	{
		std::cout << "������� �����: ";
		std::cin >> time;
	} while (time <= 0);

	std::cout << "��������: " << distance / time;
	*/
	
	//�������2
	/*
	int timeHourStrt, timeMinutesStrt, timeSecondsStrt;
	int timeHourEnd, timeMinutesEnd, timeSecondsEnd;

	do
	{
		std::cout << "������� ����� ������ �������(����� ������): ";
		std::cin >> timeHourStrt >> timeMinutesStrt >> timeSecondsStrt;
	} while (timeHourStrt < 0 || timeMinutesStrt < 0 || timeSecondsStrt < 0);

	do
	{
		std::cout << "������� ����� ����� �������(����� ������): ";
		std::cin >> timeHourEnd >> timeMinutesEnd >> timeSecondsEnd;

	} while (timeHourEnd < 0 || timeMinutesEnd < 0 || timeSecondsEnd < 0);
	
	if (timeHourEnd >= timeHourStrt)
	{
		std::cout << ((timeHourEnd - timeHourStrt) * 60 + (timeMinutesEnd - timeMinutesStrt) + (timeSecondsEnd - timeSecondsStrt) / 60) * 2;
	}
	else
	{
		std::cout << ((timeHourEnd - timeHourStrt + 24) * 60 + (timeMinutesEnd - timeMinutesStrt) + (timeSecondsEnd - timeSecondsStrt) / 60) * 2;
	}
	*/
	// ������� 3

	float distance;
	float consumption1, consumption2, consumption3;
	float costGas1, costGas2, costGas3;
	do
	{
		std::cout << "������� ����������: ";
		std::cin >> distance;
	} while (distance <= 0);

	do
	{
		std::cout << "������� ������ 3 ����� ������� �� 100 ��(����� �����): ";
		std::cin >> consumption1 >> consumption2 >> consumption3;
	} while (consumption1 <= 0 || consumption2 <= 0 || consumption3 <= 0);

	do
	{
		std::cout << "������� ���� 3 ����� ��������(����� ������): ";
		std::cin >> costGas1 >> costGas2 >> costGas3;
	} while (costGas1 <= 0 || costGas2 <= 0 || costGas3 <= 0);



	std::cout << "|" << consumption1 / 100 * distance * costGas1 << "|" << consumption2 / 100 * distance * costGas2 << "|" << consumption3 / 100 * distance * costGas3 << "|";



}