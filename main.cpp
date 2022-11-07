#include <iostream> //подключение библиотеки iostream
#include <cmath> //подключение библиотеки математики
#include <string>//подключение string
using namespace std;//глобальное подключение std

//функция ввода в программу
int main()
{ 
    int U = 6000;//переменная типа int
    int G = 360;//переменная типа int

    div_t divresult;//переменная типа div_t


    string R;//переменная типа string
    string UG = " Ugol ";//переменная типа string
    string Rav = " Raven ";//переменная типа string
    string Tir = " - ";//переменная типа string

    int d;//переменная типа int
    int a;//переменная типа int
    int b;//переменная типа int

    
    cout << " enter degree " << endl;//вывод строки в консоль
    cin >> d;//ввод в консоль

     divresult = div(U, G);//вычисление
     b = (divresult.quot * d);//вычисление
     b = fmod(b, 100);//вычисление

     divresult = div((divresult.quot * d), 100);//вычисление
     a = divresult.quot;//вычисление

    cout << UG << d << Rav << a << Tir << b;//вывод результата
}