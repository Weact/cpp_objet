#include <iostream>
#include <iomanip>
#include <fstream>
#include "CPoint.h"

using namespace std;

void affiche_exercice_118();
void affiche_exercice_119();
void affiche_exercice_120_121();
void afficher_numero_exercice(int numero);
void sauter_n_ligne(int nligne);

const string debug_msg = "[DEBUG] : ";

int main()
{
    //affiche_exercice_118();
    //affiche_exercice_119();
    affiche_exercice_120_121();

    return 0;
}

void affiche_exercice_118() {
    afficher_numero_exercice(118);
    sauter_n_ligne(1);

    float n_fReel = 0.0f;
    float n_fResult = 0.0f;

    cout << "Welcome, please type a number between 0(included) and 1000(included)" << endl;
    do {
        cout << "N: ";
        cin >> n_fReel;
    } while (n_fReel < 0.0f || n_fReel > 1000.0f);
    cout << debug_msg << "Number selected : " << n_fReel << endl;

    sauter_n_ligne(2);

    n_fResult = static_cast<float>(pow(n_fReel, 2));

    cout << "Decimal Notation : " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "   There is your squared result with a precision of " << i << " :";
        cout << "       " << fixed << setprecision(i) << n_fResult << endl;
    }

    sauter_n_ligne(2);

    cout << "Scientific Notation : " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "   There is your squared result with a precision of " << i << " :";
        cout << "       " << scientific << setprecision(i) << n_fResult << endl;
    }
}

void affiche_exercice_119() {
    afficher_numero_exercice(119);
    sauter_n_ligne(1);

    CPoint pt(0.f, 0.f);
    cout << pt << endl;
    cin >> pt;
    cout << pt << endl;
}

void affiche_exercice_120_121() {
    afficher_numero_exercice(120);
    sauter_n_ligne(1);

    string str_filename = "";
    cout << "Please enter a name for a new binary file : ";
    cin >> str_filename;

    ofstream file_in(str_filename, ios::binary | ios::out);
    if (!file_in.is_open()) {
        cout << "ERROR : Could not open the file" << endl;
        return;
    }
     cout << "Enter any numbers you want then enter 0 to quit" << endl;
     int n_userinput = 1;
     while (n_userinput != 0) {
         cin >> n_userinput;
         file_in.write((char*)&n_userinput, sizeof(int));
     }
     file_in.close();

    ifstream file_out(str_filename, ios::binary | ios::out);
    if (!file_out) {
        cout << "Error : Could not open the file" << endl;
        return;
    }

    sauter_n_ligne(2);

    //121
    int n_filenumber = 1;
    while (n_filenumber != 0) {
        file_out.read((char*)&n_filenumber, sizeof(int));
        cout << n_filenumber << endl;

        if (file_out.eof()) {
            break;
        }
        if (!file_out.good()) {
            cout << "Error" << endl;
            return;
        }
    }

    file_out.close();

}

void afficher_numero_exercice(int numero) {
    cout << "##########################################" << endl;
    cout << "EXERCICE " << numero << endl;
    cout << "##########################################" << endl;
}

void sauter_n_ligne(int nligne) {
    for (int i = 0; i < nligne; i++) {
        cout << endl;
    }
}
