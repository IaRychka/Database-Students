#include <iostream>
#include <vector>

//Разработать структуру "Студент", в состав которой входят следующие свойства :
//Фамилия, Имя, Пол, Возраст, Группа, Оценка по математике, Оценка по физике,
//Оценка по химии.Нужно составить массив с такими студентами.
//1. Организовать ввод данных с клавиатуры для записи новых студентов;
//2. Отсортировать студентов по Оценке по математике;
//3. Вывести топ - 10 студентов по математике;
//4. Вывести только тех студентов, которые имеют оценку 5 по математике и физике;
//5. Вывести только студентов, чьи фамилии начинаются с букв в некотором диапазоне
//(например, студентов с 'а' по 'и').Буквы, ограничивающие диапазон, вводятся с консоли;
//6. Вывести только студентов, у которых нет двоек;
//7. Отсортировать студентов по Оценке по физике;
//8. Вывести топ - 10 студентов по физике;
//9. Вывести только студентов от 16 до 18 лет;
//10. Вывести отличников определённой группы;
//11. Вывести всех студентов мужского пола из определённой группы;
//12. Отсортировать студентов по группе;
//13. Вывести топ - 10 студентов по химии;
//14. Вывести только студентов - отличников мужского пола.
//15. Вывести только студентов, у которых есть хотя бы одна тройка или двойка;
//16. Вывести студентов, у которых нет ни одной тройки или двойки;
//17. Вывести студентов женского пола с пятеркой по химии;
//18. Отсортировать студентов по Фамилии;
//19. Вывести студентов женского пола с пятерками по физике и химии;
//20. Вывести всех отличников из определённой группы;
//21. Отсортировать студентов по Оценке по химии;
//22. Составить топ - 10 студентов по среднему баллу.

struct Student
{
	std::string lName;
	std::string fName;
	char sex;
	unsigned int age;
	std::string group;
	unsigned int mMark;
	unsigned int phMark;
	unsigned int chMark;
	void print() {
		std::cout << fName << '\t';
		std::cout << lName << '\t';
		std::cout << sex << '\t';
		std::cout << age << '\t';
		std::cout << mMark << '\t' << phMark << '\t' << chMark << '\n';
	}

	Student() {
	std::string name;
	unsigned int num;
	char S;
		std::cout << "Enter name: ";
		std::cin >> name;
		fName = name;
		std::cout << "\nEnter last name: ";
		std::cin >> name;
		lName = name;
		std::cout << "\nEnter sex: ";
		std::cin >> S;
		if(S == 'F' or S == 'M')
		sex = S;
		else {
			std::cout << "does not exist";
			sex = 'N';
		}
		std::cout << "\nEnter age: ";
		std::cin >> num;
		if (num < 100)
		age = num;
		else {
			std::cout << "does not exist";
			age = 0;
		}
		std::cout << "\nEnter group: ";
		std::cin >> name;
		group = name;
		std::cout << "\nEnter math mark: ";
		std::cin >> num;
		mMark = num;
		std::cout << "\nEnter phisycs mark: ";
		std::cin >> num;
		phMark = num;
		std::cout << "\nEnter chemestry mark: ";
		std::cin >> num;
		chMark = num;
		std::cout << std::endl;
	}
};



int main() {
	
	int numOfSt;
	std::vector <Student> students;
	std::cin >> numOfSt;
	for (int i = 0; i < numOfSt; ++i) {
		students.push_back(Student());
	}
	for (int i = 0; i < numOfSt; ++i) {
		students[i].print();
	}
	 


}
