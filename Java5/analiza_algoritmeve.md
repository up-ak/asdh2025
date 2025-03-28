# Analiza e algoritmeve

## Çfarë është Big O?

Big O është një notacion matematikor që përdoret në shkencën kompjuterike për të përshkruar **kompleksitetin e algoritmeve**.

## Karakteristikat kryesore të Big O

- **Tregon kompleksitetin relativ**: Big O tregon kompleksitetin e algoritmit duke treguar se sa shpejt rritet koha e ekzekutimit në mënyrë relative me hyrjen, kur hyrja bëhet shumë e madhe.

- **Nuk tregon kohën e saktë**: Big O nuk e tregon kohën e saktë të ekzekutimit, por tregon se sa shpejt rritet koha e ekzekutimit në raport me madhësinë e hyrjes.

- **Varet nga madhësia e hyrjes**: Big O e tregon rritjen e kohës së ekzekutimit varësisht nga hyrja.

- **Fokusohet në hyrje të mëdha**: Big O e tregon kompleksitetin kur hyrja bëhet shumë e madhe. Një algoritëm mund të ketë disa hapa që duken të kushtueshëm kur n është numër i vogël, por që janë të papërfillshëm kur n bëhet shumë i madh.

## Kompleksitetet e zakonshme në C++

| Notacioni  | Emri                      | Shembull                                                |
| ---------- | ------------------------- | ------------------------------------------------------- |
| O(1)       | Kompleksitet konstant     | Aksesi në një element të vektorit me indeks             |
| O(log n)   | Kompleksitet logaritmik   | Kërkimi binar në një vektor të renditur                 |
| O(n)       | Kompleksitet linear       | Kërkimi sekuencial në një vektor                        |
| O(n log n) | Kompleksitet n log n      | Algoritmet e renditjes si merge sort dhe quick sort     |
| O(n²)      | Kompleksitet kuadratik    | Renditja me bubble sort ose insertion sort              |
| O(2^n)     | Kompleksitet eksponencial | Zgjidhja e problemit të shitësit udhëtar me forcë brute |

Për më shumë informacione, mund të vizitoni: [Një shpjegim i thjeshtëzuar i notacionit Big O](https://medium.com/karuna-sehgal/a-simplified-explanation-of-the-big-o-notation-82523585e835)
