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
	std::string fname, lname , group;
	char sex;
	unsigned int math , phis , chem , age;
	

	Student() {
		fname = "nondefind";
		lname = "nondefind";
		sex = 'N';
		age = 0;
		group = "nondefind";
		math = 0;
		phis = 0;
		chem = 0;
	}

	void student() {
		
		std::cin >> fname >> lname >> sex >> age >> group >> math >> phis >> chem;
	}


	void print() {
		std::cout << fname << '\t' << lname << '\t' << sex << '\t' << age << '\t' << group << '\t' << math << '\t' << phis << '\t' << chem << '\n';
	}
};


int main() {

	int choice;
	std::cin >> choice; 
	std::vector <Student> pupils; 
	for (int i = 0; i < choice; i++) {
		pupils.push_back(Student());
	}
	for (int i = 0; i < choice; i++) {
		pupils.push_back(Student());
	}
}
