#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    const double GBP_Bendras   = 0.8729;
    const double GBP_Pirkti    = 0.8600;
    const double GBP_Parduoti  = 0.9220;

    const double USD_Bendras   = 1.1793;
    const double USD_Pirkti    = 1.1460;
    const double USD_Parduoti  = 1.2340;

    const double INR_Bendras   = 104.6918;
    const double INR_Pirkti    = 101.3862;
    const double INR_Parduoti  = 107.8546;

    cout << fixed << setprecision(2);

    // Main menu
    do {
        cout << "~~~ Valiutos Keitykla ~~~" << endl;
        cout << "1 - Valiutos kurso palyginimas su euru" << endl;
        cout << "2 - Valiutos pirkimas (EUR -> pasirinkta valiuta)" << endl;
        cout << "3 - Valiutos pardavimas (pasirinkta valiuta -> EUR)" << endl;
        cout << "4 - Iseiti" << endl;
        cout << "Pasirinkite veiksma: ";

        cin >> choice;

        cout << "Pasirinkote: " << choice << endl;
        if (choice == 4) {
            cout << "Iseiti" << endl;
        } else if (choice < 1 || choice > 3) {
            cout << "neteisingas pasirinkimas" << endl;
            continue;
        } else {
            int valiuta;
            string valiutosSymbolis;
            double bendras;
            double pirkti;
            double parduoti;
            
            cout << "1 - GBP" << endl;
            cout << "2 - USD" << endl;
            cout << "3 - INR" << endl;
            cout << "Pasirinkite valiuta: ";

            cin >> valiuta;
            cout << "Pasirinkote: " << valiuta << endl;

            switch (valiuta) {
                case 1:
                    bendras     = GBP_Bendras;
                    pirkti      = GBP_Pirkti;
                    parduoti    = GBP_Parduoti;
                    valiutosSymbolis = "GBP";
                    break;
                case 2:
                    bendras     = USD_Bendras;
                    pirkti      = USD_Pirkti;
                    parduoti    = USD_Parduoti;
                    valiutosSymbolis = "USD";
                    break;
                case 3:
                    bendras     = INR_Bendras;
                    pirkti      = INR_Pirkti;
                    parduoti    = INR_Parduoti;
                    valiutosSymbolis = "INR";
                    break;
                default:
                    cout << "neteisingas valiutos pasirinkimas" << endl;
                    continue;
            }

            double suma = 0;

            if (choice == 1) {
                cout << "1 EUR Bendras = " << setprecision(4) << bendras << " " << valiutosSymbolis << endl;
                cout << "1 EUR Pirkti = " << pirkti << " " << valiutosSymbolis << endl;
                cout << "1 EUR Parduoti = " << parduoti << " " << valiutosSymbolis << setprecision(2) << endl;
            } else if (choice == 2) {
                cout << "Pirkimo suma: ";
                cin >> suma;
                if (suma <= 0) {
                    cout << "Ivesta neteisinga suma" << endl;
                    continue;
                }

                double rezultatas = suma * pirkti;

                cout << "Jusu ivesta pirkimo suma: " << suma << " EUR" << endl;
                cout << "Nusipirkote: " << rezultatas << " " << valiutosSymbolis << endl;
            } else {
                cout << "Pardavimo suma: ";
                cin >> suma;
                if (suma <= 0) {
                    cout << "Ivesta neteisinga suma" << endl;
                    continue;
                }

                double rezultatas = suma / parduoti;

                cout << "Jusu ivesta pardavimo suma: " << suma << " " << valiutosSymbolis << endl;
                cout << "Gavote: " << rezultatas << " EUR" << endl;
            }
        }

    } while (choice != 4);
    return 0;

}