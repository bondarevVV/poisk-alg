#include <iostream>
#include <iomanip>
#include <conio.h>
#include <clocale>
using namespace std;

struct rabotniki
{
    char FIO[50];
    int nomer_otdela;
    char dolzhnost[30];
    int nachalo_raboty;
};
void show(rabotniki obj[], int N);

int main() {
    setlocale(LC_ALL, "Russian");
    const int N = 3;
    rabotniki mas[N] = {};
    for (int i = 0; i < N; i++) {
        cout << "ФИО - ";
        cin.getline(mas[i].FIO, 50);
        cout << "Номер отдела - ";
        cin >> mas[i].nomer_otdela;
        cout << "Должность - ";
        cin >> mas[i].dolzhnost;
        cout << "Начало работы - ";
        cin >> mas[i].nachalo_raboty;
        cin.get();
    }
    show(mas, N);
    system("pause");
    return 0;
}

void show(rabotniki obj[], int N)
{
    rabotniki tmp;

    cout << setw(10) << "ФИО: "
        << setw(10) << "Номер отдела: "
        << setw(10) << "Должность: "
        << setw(10) << "Начало работы: "
        << endl << endl;

    for (int i = 0; i < N; i++) {
        cout << setw(10) << obj[i].FIO
            << setw(10) << obj[i].nomer_otdela
            << setw(10) << obj[i].dolzhnost
            << setw(10) << obj[i].nachalo_raboty
            << endl << endl;
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i; j < N - 1; j++) {
            if (obj[j].nachalo_raboty < obj[j + 1].nachalo_raboty) {
                tmp = obj[i];
                obj[i] = obj[j];
                obj[j] = tmp;
            }
        }
    }
    cout << setw(10) << "ФИО: "
        << setw(10) << "Номер отдела: "
        << setw(10) << "Должность: "
        << setw(10) << "Начало работы: "
        << endl << endl;

    for (int i = 0; i < N; i++) {
        cout << setw(10) << obj[i].FIO
            << setw(10) << obj[i].nomer_otdela
            << setw(10) << obj[i].dolzhnost
            << setw(10) << obj[i].nachalo_raboty
            << endl << endl;
    }

}