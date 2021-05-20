// Pola figur
/* Napisz program obliczający pola figur: prostokąta, kwadratu, trójkąta i koła. Każde z pól ma być obliczane za pomocą funkcji, odpowiednio zbudowanej (dane do obliczenia pola mają być przekazane jako parametry do funkcji). Program ma prezentować użytkownikowi menu tekstowe, z poziomu którego będzie wybierał, które pole ma wyliczyć. Program powinien zakończyć działanie dopiero wtedy, użytkownik z menu wybierze odpowiedną opcję.
Podpowiedź: Do działania logiki programu możesz wykorzystać instrukcję switch. */
#include <iostream>
using namespace std;
float kwadrat(float);
float prostokat(float, float);
float trojkat(float, float);
float kolo(float);
int main()
{
    int opcja;
    float a, b, h, r;
    for (;;) {
        system("cls");
        cout << "Wybierz opcje:" << endl;
        cout << "----------------------" << endl;
        cout << "1. Oblicz pole kwadratu" << endl;
        cout << "2. Oblicz pole prostokata" << endl;
        cout << "3. Oblicz pole trojkata" << endl;
        cout << "4. Oblicz pole kola" << endl;
        cout << "5. Zakoncz program" << endl;
        cout << "----------------------" << endl;
        
        cin >> opcja;
        switch (opcja) {
        case 1:

            cout << "Podaj dlugosc boku: ";
            cin >> a;
            cout << kwadrat(a) << endl;
            system("pause");
            break;
        case 2:

            cout << "Podaj dlugosc pierwszego boku: ";
            cin >> a;
            cout << "Podaj dlugosc drugiego boku: ";
            cin >> b;
            cout << prostokat(a, b) << endl;
            system("pause");
            break;
        case 3:

            cout << "Podaj dlugosc boku: ";
            cin >> a;
            cout << "Podaj wysokosc: ";
            cin >> h;
            cout << trojkat(a, h) << endl;
            system("pause");
            break;
        case 4:

            cout << "Podaj promien: ";
            cin >> r;
            cout << kolo(r) << endl;
            system("pause");
            break;
        case 5:
            cout << "Koniec programu" << endl;
            return 0;
        default:
            cout << "Wybierz prawidlowa funkcje!"<<endl;
            system("pause");
        }
    }
}
float kwadrat(float a) {
    cout << "Pole wynosi: ";
    return a*a;
}
float prostokat(float a, float b) {
    cout << "Pole wynosi: ";
    return a*b;
}
float trojkat(float a, float h) {
    float pole;
    pole = (a * h) / 2;
    cout << "Pole wynosi: ";
    return pole;
}
float kolo(float r) {
    float pole;
    pole = (r * r) * 3.14;
    cout << "Pole wynosi: ";
    return pole;
}