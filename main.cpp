#include <iostream>
#include <cmath> 
#include <string>
using namespace std;


int main()
{ 
    int U = 6000;
    int G = 360;

    div_t divresult;


    string R;
    string UG = " Ugol ";
    string Rav = " Raven ";
    string Tir = " - ";

    int d;
    int a;
    int b;



    
    cout << " enter degree " << endl;
    cin >> d;

     divresult = div(U, G);
     b = (divresult.quot * d);
     b = fmod(b, 100);

     divresult = div((divresult.quot * d), 100);
     a = divresult.quot;

    cout << UG << d << Rav << a << Tir << b;







//     string R;
//     int I;
//     int Mb;
//     int Kb;
//     int B;
//     div_t divresult;

//     string mb = " Mbyte ";
//     string kb = " Kbyte ";
//     string b = " byte ";

//     cout << "enter number" << endl;
//     cin >> I;

//     B = fmod(I, 1024);
//     divresult = div(I, 1024);
//     Kb = divresult.quot; 
//     Kb = fmod(Kb, 1024);
//     divresult = div(Kb, 1024);
//     Mb = divresult.quot;

//    cout << Mb << mb << Kb << kb << B << b;











}