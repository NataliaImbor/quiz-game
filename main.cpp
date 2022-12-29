#include <stdio.h>
#include <tchar.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

bool wlasciwa_decyzja = false;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int kolorTekst = 6;
int wybMenu = 1;            // ktora pozycja w menu
bool wMenu = true;          //warunek P menu
bool wGrze = false;         //warunek P gra
bool koniec = false;
clock_t start, stop;
double czas;

void logoD()
{
    //tutaj kod logowania
}

void menu1()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    logoD();
    cout << endl << endl << endl << endl;
    cout << "                             Witaj w grze na nude      " << endl << endl;
    cout << "                                   Menu:" << endl << endl;
    cout << "                           " << (char)(175) << "   Zagraj w quiz" << endl;
    cout << "                               Zagraj w kamien, papier, nozyce" << endl;
    cout << "                               Zagraj w szyfrowanie" << endl << endl;
    cout << "                                  Wyjscie" << endl;
}

void menu2()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    logoD();
    cout << endl << endl << endl << endl;
    cout << "                             Witaj w grze na nude      " << endl << endl;
    cout << "                                   Menu:" << endl << endl;
    cout << "                               Zagraj w quiz" << endl;
    cout << "                           " << (char)(175) << "   Zagraj w kamien, papier, nozyce" << endl;
    cout << "                               Zagraj w szyfrowanie" << endl << endl;
    cout << "                                  Wyjscie" << endl;
}

void menu3()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    logoD();
    cout << endl << endl << endl << endl;
    cout << "                             Witaj w grze na nude      " << endl << endl;
    cout << "                                   Menu:" << endl << endl;
    cout << "                               Zagraj w quiz" << endl;
    cout << "                               Zagraj w kamien, papier, nozyce" << endl;
    cout << "                           " << (char)(175) << "   Zagraj w szyfrowanie" << endl << endl;
    cout << "                                  Wyjscie" << endl;
}

void menu4()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    logoD();
    cout << endl << endl << endl << endl;
    cout << "                             Witaj w grze na nude      " << endl << endl;
    cout << "                                   Menu:" << endl << endl;
    cout << "                               Zagraj w quiz" << endl;
    cout << "                               Zagraj w kamien, papier, nozyce" << endl;
    cout << "                               Zagraj w szyfrowanie" << endl << endl;
    cout << "                           " << (char)(175) << "      Wyjscie" << endl;
}


void czyWyjsc()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                              Czy chcesz wyjsc?" << endl << endl;
    cout << "                           1 - tak        0 - nie" << endl;
    int decyzja;
    cout << "                                     ";
    cin >> decyzja;
    while (wlasciwa_decyzja == false)
    {
        switch (decyzja)
        {
        case 1:
        {
            system("cls");
            wMenu = false;
            wGrze = false;
            koniec = true;
            //Sleep(1500);
            wlasciwa_decyzja = true;
            exit(0);
        }
        break;
        case 0:
        {
            wlasciwa_decyzja = true;
            menu1();
            //if (wGrze == false)
            //  menu1();
        }
        break;
        default:
        {
            system("cls");
            cout << "                    To nie jest wlasciwa dana!" << endl;
            cout << "                      Czy chcesz wyjsc?" << endl << endl;
            cout << "                      1 - tak        0 - nie" << endl;
            cin >> decyzja;
        }
        break;
        }
    }
}

void quiz ()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    cout << endl << endl << endl << endl;
    cout << "                             Wybierz kategorie quizu      " << endl << endl;
    cout << "                                 1. Muzyka filmowa:"<< endl;
    cout << "                                 2. Obrazy:" <<endl;
    cout << "                                 3. Kosmos:"<< endl;
    cout << "                                 4. Historia" << endl;
    cout << "                                 5. Biologia" << endl;
    cout << "                                 6. AGH" << endl << endl;
    cout << "                                 7. Wyjscie" << endl;

    //tutaj kod do quizu
}

void kamien_papier_nozyce()
{
    start=clock();
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    cout<<"Witaj w kpn";
    //tutaj kod do kamien papier nozyce
    stop=clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << endl << "czas trwania twojej gry: " << czas << " s" << endl;

}

void szyfrowanie()
{
    start=clock();
    SetConsoleTextAttribute(hConsole, kolorTekst);
    system("cls");
    cout<<"Witaj w szyfrowaniu";
    //tutaj kod szyfrowania
    stop=clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    cout << endl << "czas trwania twojej gry: " << czas << " s" << endl;

}

void menuNowe()
{
    unsigned char wyb1 = _getch();  //wyb1 - sterowanie gora/dol menu
    switch (wyb1)
    {
    case 0:
    case 224:
        wyb1 = _getch();
        switch (wyb1)
        {
        case 72:                    //strzalka w gore
            if (wybMenu > 1) wybMenu--;
            //else wybMenu = 4;

            switch (wybMenu)
            {
            case 1:
                menu1();
                //cout << wybMenu;
                break;
            case 2:
                menu2();
                //cout << wybMenu;
                break;
            case 3:
                menu3();
                //cout << wybMenu;
                break;
            case 4:
                menu4();
                //cout << wybMenu;
                break;
            }
            break;
        case 80:                    //strza³ka w dó³
            if (wybMenu < 4) wybMenu++;
            //else wybMenu = 1;

            switch (wybMenu)
            {
            case 1:
                menu1();
                //cout << wybMenu;
                break;
            case 2:
                menu2();
                //cout << wybMenu;
                break;
            case 3:
                menu3();
                //cout << wybMenu;
                break;
            case 4:
                menu4();
                //cout << wybMenu;
                break;
            }
            break;
            //case 75: //strza³ka w lewo
            //  break;
            //case 77: //strza³ka w prawo
            //  break;
        }
        wyb1 = 0;
        break;
    case 13: //ENTER
        switch (wybMenu)
        {
        case 1:
            //cout << wybMenu;
            //cout << "graj";
            //Sleep(2000);
            quiz();
            break;
        case 2:
            kamien_papier_nozyce();
            break;
        case 3:
            szyfrowanie();
            break;
        case 4:
            czyWyjsc();
            break;
        }
        break;
    case 27: //ESC
        czyWyjsc();
        break;
    }
    //return 0;
}

int main()
{
    SetConsoleTextAttribute(hConsole, kolorTekst);

        while (koniec == false)
    {
        wMenu = true;
        menu1();
        while (wMenu == true)
        {
            menuNowe();
        }
    }

    return 0;
}
