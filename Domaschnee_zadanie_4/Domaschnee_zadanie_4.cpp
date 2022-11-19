// Domaschnee_zadanie_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//#include<Windows.h>
//using namespace std;
//
//int main()
//{ /*Напишите программу, которая создает двухмерный массив и заполняет его по следующему
//принципу: пользователь вводит число (например, 3) первый элемент массива принимает
//значение этого числа, последующий элемент массива принимает значение этого числа
//умноженного на 2 (т.е. 6 для нашего примера), третий элемент массива предыдущий элемент,
//умноженный на 2 (т.е. 6*2=12 для нашего примера). Созданный массив вывести на экран.
//  */
//  //setlocale(0, " ");
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int arr[5][5];
//	cout << "Введите число""\n";
//	cin >> arr[0][0];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (i == 0 && j != 0)
//				arr[i][j] = arr[i][j - 1] * 2;
//			if (i >= 1)
//				arr[i][j] = arr[i - 1][j] * 2;
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			cout << arr[i][j] << "\t";
//		cout << "\n";
//	}
//	return 0;
//}


//#include <iostream>
//#include<Windows.h>
//
//using namespace std;
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	/*Напишите программу, которая создает двухмерный массив и заполняет его по следующему
//принципу: пользователь вводит число (например, 3) первый элемент массива принимает
//значение этого числа, последующий элемент массива принимает значение этого числа + 1 (т.е. 4
//для нашего примера), третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего
//примера). Созданный массив вывести на экран.
//	*/
//	int arr[5][5];
//	cout << "Введите число""\n";
//	cin >> arr[0][0];
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (i == 0 && j != 0)
//				arr[i][j] = arr[i][j - 1] + 1;
//			if (i >= 1)
//				arr[i][j] = arr[i - 1][j] + 1;
//		}
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			cout << arr[i][j] << "\t";
//		cout << "\n";
//	}
//
//}


//#include <iostream>
//#include<Windows.h>
//#include<time.h>
//#include<stdlib.h>
//
//using namespace std;
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    
//    srand(time(NULL));
//    /*Создайте двухмерный массив. Заполните его случайными числами и покажите на экран.
//Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз).
//Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
//Например, если мы имеем следующий массив
//1 2 0 4 5 3
//4 5 3 9 0 1
//и пользователь выбрал сдвиг на 2 разряда вправо, то мы получим
//5 3 1 2 0 4
//0 1 4 5 3 9
//    */
//    
//
//    const int row = 4, col = 4;
//    int mas[row][col], mas2[row][col];
//    int course, shift;
//
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            mas[i][j] = rand() % 20;
//            cout << mas[i][j] << "\t";
//        }
//        cout << endl;
//    }
//
//    cout << "\n\tНаправление сдвига\n"
//        << "\t1. Вправо\n"
//        << "\t2. Влево\n"
//        << "\t3. Вверх\n"
//        << "\t4. Вниз\n\n"
//        << "Выберите действие: ";
//    cin >> course;
//
//    if (course == 1) {
//        cout << "Выберите количество сдвигов: ";
//        cin >> shift;
//        if (shift > col) {
//            shift %= col;
//        }
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                if (col - shift + j > col - 1) {
//                    mas2[i][j] = mas[i][j - shift];
//                    cout << mas2[i][j] << "\t";
//                }
//                else {
//                    mas2[i][j] = mas[i][col - shift + j];
//                    cout << mas2[i][j] << "\t";
//                }
//            }
//            cout << endl;
//        }
//    }
//    else if (course == 2) {
//        cout << "Выберите количество сдвигов: ";
//        cin >> shift;
//        if (shift > col) {
//            shift %= col;
//        }
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                if (shift + j - col < 0) {
//                    mas2[i][j] = mas[i][j + shift];
//                    cout << mas2[i][j] << "\t";
//                }
//                else {
//                    mas2[i][j] = mas[i][shift + j - col];
//                    cout << mas2[i][j] << "\t";
//                }
//            }
//            cout << endl;
//        }
//    }
//    else if (course == 3) {
//        cout << "Выберите количество сдвигов: ";
//        cin >> shift;
//        if (shift > row) {
//            shift %= row;
//        }
//        for (int j = 0; j < col; j++)
//        {
//            for (int i = 0; i < row; i++)
//            {
//                if (shift + i - row < 0) {
//                    mas2[i][j] = mas[i + shift][j];
//                }
//                else {
//                    mas2[i][j] = mas[shift + i - row][j];
//                }
//            }
//        }
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                cout << mas2[i][j] << "\t";
//            }
//            cout << endl;
//        }
//    }
//    else if (course == 4) {
//        cout << "Выберите количество сдвигов: ";
//        cin >> shift;
//        if (shift > row) {
//            shift %= row;
//        }
//        for (int j = 0; j < col; j++)
//        {
//            for (int i = 0; i < row; i++)
//            {
//                if (row - shift + i > row - 1) {
//                    mas2[i][j] = mas[i - shift][j];
//                }
//                else {
//                    mas2[i][j] = mas[row - shift + i][j];
//                }
//            }
//        }
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                cout << mas2[i][j] << "\t";
//            }
//            cout << endl;
//        }
//    }
//
//
//}




//#include <iostream>
//#include <iostream>
//#include<Windows.h>
//#include<time.h>
//#include<stdlib.h>
//
//using namespace std;
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    /*В двумерном массиве целых числе посчитать:
//
//Сумму всех элементов массива
//
//Среднее арифметическое всех элементов массива
//
//Минимальный элемент
//
//Максимальный элемент
//    */
//    const int N = 100;
//    const int M = 100;
//    int arr[N][M], i, j, min, max, sum = 0, count = 0;
//
//    max = min = arr[0][0];
//
//    for (i = 0; i < N; i++)
//        for (j = 0; j < M; j++)
//        {
//            sum += arr[i][j];
//            count++;
//            if (arr[i][j] > max) max = arr[i][j];
//            if (arr[i][j] < min) min = arr[i][j];
//        }
//    cout << "Сумма = " << sum << "\nСреднее арифметическое = " << sum / count << "\nMIN = " << min << "\nMAX = " << max;
//}



//#include <iostream>
//#include<Windows.h>
//#include<time.h>
//#include<stdlib.h>
//
//using namespace std;
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    srand(time(NULL));
//    /*В двумерном массиве целых чисел посчитать сумму элементов: в каждой строке; в каждом
//столбце; одновременно по всем строкам и всем столбцам. Оформить следующим образом:
//3 5 6 7 | 21
//12 1 1 1 | 15
//0 7 12 1 | 20
//---------------------
//15 3 19 9 | 56
//    */
//
//    const int size = 10;
//    int array[size][size];
//    int arr[10];
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++)
//        {
//            array[i][j] = 1 + rand() % 20;
//        }
//    }
//    for (int i = 0; i < size; i++) {
//        int count = 0;//сумма по строке
//        for (int j = 0; j < size; j++)
//        {
//            count += array[i][j];
//            cout << array[i][j] << "\t";
//        }
//        cout << " || " << count << endl;
//    }
//    cout << "-----------------------------------------------------------------------" << endl;
//    for (int i = 0; i < 10; i++) {
//        int count1 = 0;//сумма по столбцу
//        for (int j = 0; j < 10; j++)
//        {
//            count1 += array[j][i];
//        }
//        arr[i] = count1;
//    }
//    for (int i = 0; i < 10; i++) {
//        cout << arr[i] << "\t";
//    }
//}


//#include <iostream>
//#include <ctime>
//using namespace std;
//int main()
//{
//    srand(time(NULL));
//    const int size = 5;
//    int firstarray[size][size * 2];
//    int secondarray[size][size];
//
//
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size * 2; j++)
//        {
//            firstarray[i][j] = 0 + rand() % 50;
//            cout << firstarray[i][j] << "\t";
//            if (j & 1)
//                secondarray[i][j / 2] = firstarray[i][j - 1] + firstarray[i][j];
//        }
//        cout << endl;
//    }
//
//    cout << endl;
//    for (int i = 0; i < size; i++)
//    {
//        for (int j = 0; j < size; j++)
//            cout << secondarray[i][j] << "\t";
//        cout << endl;
//    }
//}


//#include <iostream>
//using namespace std;
///*Написать функцию, которая принимает два параметра: основание степени и показатель
//степени, и вычисляет степень числа на основе полученных данных.
//*/
//
//int powInnumber(int number, int powNum)
//{
//    if (powNum == 0)
//        return 1;
//    if (powNum == 1)
//        return number;
//    int result = number;
//    for (int i = 0; i < powNum - 1; i++)
//        result *= number;
//    return result;
//}
//
//int main()
//{
//    int number, powNum;
//    cout << "Enter number : ";
//    cin >> number;
//    cout << "Enter pow : ";
//    cin >> powNum;
//    cout << "Rezultat = " << powInnumber(number, powNum) << endl;
//}


//#include <iostream>
//#include<Windows.h>
//
//using namespace std;
//
////Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму
////чисел из диапазона между ними.
//
//int sum(int a, int b) { //функция сложения
//	int s = 0;//доп переменная
//	for (int i = a + 1; i < b; i++)//цикл, где к первому числу прибавляется один, и потом складываться числа
//		//с шагом +1
//		s += i;///присваивание со сложением
//	return(s);
//}
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int a, b;
//	cout << "Введите два числа""\n";
//	cin >> a >> b;
//	cout << (sum(a, b));
//	cout << endl;
//}


//#include <iostream>
//#include<Windows.h>
//
//using namespace std;
///*Число называется совершенным, если сумма всех его делителей равна ему самому. Напишите
//функцию поиска таких чисел во введенном интервале.
//*/
//bool Sov_Chislo(int num)
//{
//    int sum = 0;//переменная для хранения результата
//    //в цикле для полученного функцией аргумента
//    //будем находить его сомножители, путем деления его на все
//    //целые числа в интервале от 1 до самого числа
//    for (int j = 1; j < num; j++) {
//        if (num % j == 0)
//            sum += j;
//    }
//    //если число и сумма его сомножителей равны - значит число совершенное
//    if (sum == num)
//        return true;
//    return false;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    for (int i = 1; i < 1000; ++i) //цикл от 1 до 1000
//    {
//        if (Sov_Chislo(i))
//        {
//            cout << i << endl;
//        }
//    }
//}



//#include <iostream>
//#include<Windows.h>
//#include <iomanip>//Это инструменты для работы с форматированием вывода
///*Написать функцию, выводящую на экран переданную ей игральную карту.
//*/
//using namespace std;
///*printCard- карта;cardAdvantage-номер карты, преимущество;suitCard-масть
//*/
//
//void printCard(enum suit suitCard, char cardAdvantage)
//{
//    char hl = (char)196; //horizontal line
//    char vl = (char)179; //vertical line
//    //стандартный отступ
//    int indent = 6;
//
//    cout << (char)218 << hl << hl << hl << hl << hl << hl << hl << (char)191 << endl <<
//        vl;
//    //если 10, то уменьшаем отступ
//    //и печатаем 1, а 0 выводится сам 
//    if (cardAdvantage == '0')
//    {
//        indent = 5;
//        cout << '1';
//    }
//
//    cout << cardAdvantage << (char)suitCard << "\t" << vl << endl <<
//        vl << "\t" << vl << endl <<
//        vl << "\t" << vl << endl <<
//        vl << "\t" << vl << endl <<
//        vl << "\t" << vl << endl <<
//        vl << "\t" << vl << endl <<
//        vl << "\t" << vl << endl <<
//        vl << setw(indent) << (char)suitCard;
//
//    if (cardAdvantage == '0')
//    {
//        cout << '1';
//    }
//
//    cout << cardAdvantage << vl << endl <<
//        (char)192 << hl << hl << hl << hl << hl << hl << hl << (char)217 << endl;
//}
//
//enum Suit//перечисление
//{
//    Hearts = 3,
//    Diamonds = 4,
//    Clubs = 5,
//    Spades = 6
//};
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int intUserSuitCard;
//    enum suit userSuitCard;
//    int userCardAdvantage;
//    char advantages[] = { ' ', 'A', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'J', 'Q', 'K' };
//
//
//    cout << "Enter suit card: " << endl <<
//        "Hearts = 3" << endl <<      //черви
//        "Diamonds = 4" << endl <<    //буби
//        "Clubs = 5" << endl <<       //крести
//        "Spades = 6" << endl;        //пики
//    cin >> intUserSuitCard;
//    userSuitCard = (enum suit)intUserSuitCard;
//
//    if (userSuitCard != Hearts && userSuitCard != Diamonds &&
//        userSuitCard != Clubs && userSuitCard != Spades)
//    {
//        cout << "Incorrect choice" << endl;
//        return 1;
//    }
//
//    cout << "Enter card advantage: " << endl <<
//        "1 - ace \t 2 - two \t 3 - three" << endl <<
//        "4 - four \t 5 - five \t 6 - six" << endl <<
//        "7 - seven \t 8 - eight \t 9 - nine" << endl <<
//        "10 - ten \t 11 - jack \t 12 - queen" << endl <<
//        "13 - king" << endl;
//    cin >> userCardAdvantage;
//
//    if (userCardAdvantage < 1 || userCardAdvantage > 13)
//    {
//        cout << "Incorrect choice" << endl;
//        return 2;
//    }
//
//    printCard(userSuitCard, advantages[userCardAdvantage]);
//    return 0;
//}





//#include <iostream>
//#include<Windows.h>
////Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
//using namespace std;
//
//int isHappy(unsigned int num)
//{
//	if (num < 100000 || num > 999999)
//		return -1;
//	return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
//}
//
//int main()
//{
//	int res = isHappy(267456);
//	if (res == 1)
//		cout << "happy" << endl;
//	else if (res == 0)
//		cout << "not happy" << endl;
//	else
//		cout << "error" << endl;
//}




//#include <iostream>
//#include<Windows.h>
///*Написать функцию, которая принимает две даты (т.е. функция принимает шесть параметров) и
//вычисляет разность в днях между этими датами. Для решения этой задачи необходимо также
//написать функцию, которая определяет, является ли год високосным.
//*/
//using namespace std;
//
//
//bool vys(int year)
//{
//    bool res = false;
//    if (year % 4 == 0)
//        res = true;
//    if (year % 100 == 0)
//        res = false;
//    if (year % 400 == 0)
//        res = true;
//    return res;
//}
//int date(int d, int m, int y)
//{
//    int k = d;
//    if (vys(y) && (m > 2))
//        k += y * 366;
//    else k += y * 365;
//    switch (m - 1)
//    {
//    case 12: k += 31;
//    case 11: k += 30;
//    case 10: k += 31;
//    case  9: k += 30;
//    case  8: k += 31;
//    case  7: k += 31;
//    case  6: k += 30;
//    case  5: k += 31;
//    case  4: k += 30;
//    case  3: k += 31;
//    case  2: k += 28;
//    case  1: k += 31;
//    }
//    return k;
//}
//int difference(int d1, int d2, int m1, int m2, int y1, int y2)
//{
//    int k = date(d2, m2, y2) - date(d1, m1, y1);
//    return k;
//}
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    int d1, d2, m1, m2, y1, y2;
//    cout << "Введите первый день: ";
//    cin >> d2;
//    cout << "Введите первый месяц: ";
//    cin >> m2;
//    cout << "Введите первый год: ";
//    cin >> y2;
//    cout << "Введите второй день: ";
//    cin >> d1;
//    cout << "Введите второй месяц: ";
//    cin >> m1;
//    cout << "Введите второй год: ";
//    cin >> y1;
//    cout << "Разность в днях между этими датами составляет " << difference(d1, d2, m1, m2, y1, y2) << " дней.\n";
//    system("PAUSE");
//}



/*
Написать функцию, определяющую количество положительных,
отрицательных и нулевых элементов передаваемого ей массива.
*/

#include <iostream>

using namespace std;

void printArr(int arr[], int dimention);//dimention-размерность
void calculatingMassiv(int arr[], int dimention);//calculatingMassiv-вычисляемый массив

int main()
{
    int massiv[] = { 1, -2, 3, -4, 0, 0, -7, 8, -9 };
    int arDimention = sizeof(massiv) / sizeof(int);
    cout << "The program searches for the number of" << endl << //Программа выполняет поиск по количеству
        "positive, negative and zero elements" << endl;//положительные, отрицательные и нулевые элементы
    //выводим на экран исходный массив
    printArr(massiv, arDimention);
    //вызываем функцию подсчета +/-/0 элементов
    calculatingMassiv(massiv, arDimention);
    return 0;
}

void printArr(int arr[], int dimention)
{
    cout << "Start massiv: ";
    for (int i = 0; i < dimention; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < dimention; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    cout << "The number of positive elements = " << plus << endl << //Количество положительных элементов
        "The number of negative elements = " << minus << endl << //Количество отрицательных элементов
        "The number of zero elements = " << zero << endl;//количество нулей в массиве
}



 
