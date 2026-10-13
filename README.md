Valiutos keityklos užduotis
Parašykite C++ programą, kuri leidžia palyginti valiutų kursus su euru, pirkti pasirinktą valiutą už eurus ir parduoti pasirinktą valiutą už eurus.

Tikslas:

Sukurti valiutos keityklos programą, kuri leidžia vartotojui:

palyginti pasirinktos valiutos kursą su euru;
pirkti pasirinktą valiutą;
parduoti pasirinktą valiutą.
Programos funkcionalumas:

Programa turi turėti pagrindinį MENIU su šiais pasirinkimais:

Valiutos kurso palyginimas su euru.
Valiutos pirkimas (EUR → pasirinkta valiuta).
Valiutos pardavimas (pasirinkta valiuta → EUR).
Išeiti.
Pasirinkus veiksmą, vartotojas pasirenka valiutą: 1 – GBP, 2 – USD, 3 – INR. Euras (EUR) yra bazinė valiuta, todėl kaip atskira pasirinkimo galimybė nesiūloma.

Vartotojas turi pasirinkti:

veiksmą – palyginti kursą, pirkti ar parduoti valiutą;
norimą valiutą;
sumą, kurią nori pirkti arba parduoti (palyginimo atveju suma nereikalinga).
Atlikus skaičiavimus, ekrane turi būti aiškiai pateikiamas rezultatas: pradinė suma, pasirinkta valiuta ir apskaičiuota gaunama suma. Galutinis rezultatas pateikiamas šimtųjų tikslumu (2 skaitmenys po kablelio).

Reikalavimai:

Vartotojo pasirinkimams apdoroti naudokite sąlyginius sakinius (if / else if / else arba switch).
Turi būti sukurtas aiškus MENIU veiksmui ir valiutai pasirinkti.
Valiutų kursus aprašykite kaip konstantas (const double) ir naudokite tik užduotyje pateiktus kursus.
Rezultatą išveskite dviejų skaitmenų po kablelio tikslumu (pvz., fixed ir setprecision(2)).
Įvedus neteisingą meniu pasirinkimą arba neteigiamą sumą, programa turi parodyti aiškų pranešimą.
Užduotį atlikite iki spalio 15 d. Kodas turi būti patalpintas į GitHub. Github'o nuorodą patalpinkite Moodle aplinkoje. Atliekant užduotį turi būti atlikti mažiausiai trys atskiri atnaujinimai naudojant git add ., git commit ir git push.

Svarbu: darbas vertinamas tik tada, kai studentas jį apgina. Jei programos kodas neapgintas, kitos užduoties dalys nevertinamos ir skiriama 0 balų.

Papildoma informacija
Programėlėje naudojamos keturios valiutos:

Euras (EUR) – bazinė valiuta
Didžiosios Britanijos svaras (GBP)
Jungtinių Amerikos Valstijų doleris (USD)
Indijos rupija (INR)
Valiutų konvertavimo pavyzdžiai
Svarbu: valiutos kurso reikšmė nurodo, kiek pasirinktos valiutos gauname už 1 eurą.

Pirkimas: už 1 € pagal pirkimo kursą gaunama 0,86 £.
Pardavimas: parduodant 1 £ gaunama 1 / 0,9220 = 1,08 €.
Testinis pavyzdys: 100 € → GBP pirkimas = 86,00 £.
Testinis pavyzdys: 100 USD pardavimas = 100 / 1,2340 = 81,04 €.
Valiutų kursai
GBP_Bendras   = 0.8729;
GBP_Pirkti    = 0.8600;
GBP_Parduoti  = 0.9220;

USD_Bendras   = 1.1793;
USD_Pirkti    = 1.1460;
USD_Parduoti  = 1.2340;

INR_Bendras   = 104.6918;
INR_Pirkti    = 101.3862;
INR_Parduoti  = 107.8546;
Vertinimo sistema
Vertinimo sąlyga: jei studentas neapgina programos (nesugeba paaiškinti kodo arba neatvyksta į apsigynimą), kiti kriterijai nevertinami ir galutinis įvertinimas yra 0.

Vertinimo kriterijus

Aprašymas

Balai

Programinio kodo apsigynimas

Studentas geba paaiškinti programos veikimo principą, kintamuosius, sąlyginius sakinius ir skaičiavimus, paaiškinti atskirus kodo fragmentus ir atsakyti į klausimus. Dalinis balas (1–2) skiriamas, jei paaiškinama tik dalis kodo. Be apsigynimo kiti kriterijai nevertinami.

3

MENIU valdymo sukūrimas

Aiškus pagrindinis ir valiutų meniu; pasirinkimai apdorojami sąlyginiais sakiniais; tikrinamas neteisingas pasirinkimas. (0,5 balo, jei meniu veikia, bet trūksta tikrinimo ar vienos šakos.)

1

Valiutos kurso palyginimas

Naudojami bendri kursai (GBP_Bendras, USD_Bendras, INR_Bendras); rodomos abi kryptys. (0,5 balo, jei rodoma tik viena kryptis.)

1

Valiutos pirkimas

Įvedama eurų suma, naudojamas pirkimo kursas ir teisinga formulė visoms valiutoms. (0,5 balo, jei veikia ne visoms valiutoms.)

1

Valiutos pardavimas

Įvedamas parduodamos valiutos kiekis, naudojamas pardavimo kursas ir teisinga formulė visoms valiutoms. (0,5 balo, jei veikia ne visoms valiutoms arba formulė neteisinga.)

1

Skaičiavimo rezultato pateikimas

Ekrane rodoma pradinė suma, valiuta ir gauta suma su žymėjimu. (0,5 balo, jei trūksta kurio nors elemento.)

1

Rezultato apvalinimas

Visi rezultatai pateikiami dviejų skaitmenų po kablelio tikslumu. (0,5 balo, jei tik dalyje išvesčių.)

1

Kodo patalpinimas į GitHub

Kodas patalpintas į prieinamą GitHub repozitoriją; padaryti bent trys prasmingi atnaujinimai (git add ., git commit, git push). (0,5 balo, jei 1–2 commit'ai arba beprasmės žinutės.)

1

Iš viso:

10

