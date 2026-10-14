#include <iostream>

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
        if (choice == 4) {
            cout << "iseiti" << endl;
            break;
        } else if (choice < 1 || choice > 3) {
            cout << "neteisingas pasirinkimas" << endl;
            break;
        } else {
            int valiuta;
            double bendras;
            double pirkti;
            double parduoti;
            
            cout << "1 - GBP" << endl;
            cout << "2 - USD" << endl;
            cout << "3 - INR" << endl;

            switch (valiuta) {
                case 1:
                    bendras = GBP_Bendras;
                    cout << "Pirkimo kursas: " << pirkti << endl;
                    continue;
                case 2:
                    bendras = USD_Bendras;
                    cout << "Pirkimo kursas: " << pirkti << endl;
                    continue;
                case 3:
                    bendras = INR_Bendras;
                    cout << "Pirkimo kursas: " << pirkti << endl;
                    continue;
                default:
                    cout << "error" << endl;
                    break;
            }

        }

        // switch (choice) {
        //     case 1:
        //         cout << "Palyginimas" << endl;
        //         break;
        //     case 2:
        //         cout << "Pirkimas" << endl;
        //         break;
        //     case 3:
        //         cout << "Pardavimas" << endl;
        //         break;
        //     case 4:
        //         cout << "iseiti" << endl;
        //         break;
        //     default:
        //         cout << "Neteisingas pasirinkimas" << endl;

    } while (choice != 4);
    // cout << endl << "Valiutos keitykla" << endl << "1 - GBP" << endl << "2 - USD" << endl << "3 - INR" << endl << "Pasirinkite veiksma: " << endl;
    return 0;

}