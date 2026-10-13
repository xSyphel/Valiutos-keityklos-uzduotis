#include <iostream>

using namespace std;

int main() {
    int choice;
    // Main menu
    do {
        cout << "~~~ Valiutos Keitykla ~~~" << endl;
        cout << "1 - Valiutos kurso palyginimas su euru" << endl;
        cout << "2 - Valiutos pirkimas (EUR -> pasirinkta valiuta)" << endl;
        cout << "3 - Valiutos pardavimas (pasirinkta valiuta -> EUR)" << endl;
        cout << "4 - Iseiti" << endl;
        cout << "Pasirinkite veiksma: " << endl;

        cin >> choice;

        cout << "Pasirinkote: " << choice << endl;
        switch (choice) {
            case 1:
                cout << "Palyginimas" << endl;
                break;
            case 2:
                cout << "Pirkimas" << endl;
                break;
            case 3:
                cout << "Pardavimas" << endl;
                break;
            case 4:
                cout << "iseiti" << endl;
                break;
            default:
                cout << "Neteisingas pasirinkimas" << endl;
        }
    } while (choice != 4);
    // cout << endl << "Valiutos keitykla" << endl << "1 - GBP" << endl << "2 - USD" << endl << "3 - INR" << endl << "Pasirinkite veiksma: " << endl;
    return 0;

}