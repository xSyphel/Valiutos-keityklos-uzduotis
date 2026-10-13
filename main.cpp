#include <iostream>

using namespace std;

int main() {
    int choice;
    // Main menu
    cout << "1 - Valiutos kurso palyginimas su euru" << endl << "2 - Valiutos pirkimas (EUR -> pasirinkta valiuta)" << endl << "3. Valiutos pardavimas (pasirinkta valiuta -> EUR)" << endl << "4 - Iseiti" << endl;
    cin >> choice;

    cout << "Pasirinkote: " << choice;


    // valiutos keitimas
    cout << "Valiutos keitykla" << endl << "1 - GBP" << endl << "2 - USD" << endl << "3 - INR" << endl << "Pasirinkite veiksma: " << endl;
    return 0;
}