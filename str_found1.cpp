#include <iostream>
#include <string>

using namespace std;

//int pos(char *s, char *c, int n)
//{
//	int i, j;		// Счетчики для циклов
//	int lenC, lenS;	// Длины строк

//	//Находим размеры строки исходника и искомого
//	for (lenC = 0; c[lenC]; lenC++);
//	for (lenS = 0; s[lenS]; lenS++);

//	for (i = 0; i <= lenS - lenC; i++) // Пока есть возможность поиска
//	{
//		for (j = 0; s[i + j] == c[j]; j++); // Проверяем совпадение посимвольно
//		// Если посимвольно совпадает по длине искомого
//		// Вернем из функции номер ячейки, откуда начинается совпадение
//		// Учитывать 0-терминатор  ( '\0' )
// 		if (j - lenC == 1 && i == lenS - lenC && !(n - 1)) return i;
//		if (j == lenC)
//		if (n - 1) n--;
//		else return i;
//	}
//	//Иначе вернем -1 как результат отсутствия подстроки
//	return -1;
//}
//-----------------------------------------------------------
int pos(char *s, char *c)
{
	int i, j;		// Счетчики для циклов
	int lenC, lenS;	// Длины строк

	//Находим размеры строки исходника и искомого
	for (lenC = 0; c[lenC]; lenC++);
	for (lenS = 0; s[lenS]; lenS++);

	for (i = 0; i <= lenS - lenC; i++) // Пока есть возможность поиска
	{
		for (j = 0; s[i + j] == c[j]; j++); // Проверяем совпадение посимвольно
		// Если посимвольно совпадает по длине искомого
		// Вернем из функции номер ячейки, откуда начинается совпадение
		// Учитывать 0-терминатор  ( '\0' )
 		if (j - lenC == 1 && i == lenS - lenC) return i;
		if (j == lenC) return 0;
		else return i;
	}
	//Иначе вернем -1 как результат отсутствия подстроки
	return -1;
}


int main()
{
	char *s = "parapapa";
	char *c = "ap";

    pos(s, c);
//	int i, n = 0;

//	std:: cout << n << std:: endl;
//	}
}
