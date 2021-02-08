#include <iostream>
#include <iomanip>
using namespace std;

void affiche_exercice_118();
void affiche_exercice_119();
void afficher_numero_exercice(int numero);
void sauter_n_ligne(int nligne);

const string debug_msg = "[DEBUG] : ";

int main()
{
    //affiche_exercice_118();
    affiche_exercice_119();
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
