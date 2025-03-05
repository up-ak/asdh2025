## Hyrje në Pointers

Pointerat janë një nga konceptet më të fuqishme por edhe më sfiduese në gjuhët e programimit C dhe C++. Ata na lejojnë të punojmë direkt me adresat e memories, duke na dhënë më shumë kontroll mbi programet tona.

## Deklarimi i Pointerit

Si të deklarohet një pointer që mund të ruajë adresën e një variabli të llojit integer.

```cpp
int numri = 10;      // Variabël e thjeshtë
int* ptr_numri;      // Deklarimi i një pointeri për integer
ptr_numri = &numri;  // Pointeri tani ruan adresën e variablës numri
```

## Operatori Address-of (&)

Si të merret adresa e një variabli në memorie.

```cpp
int mosha = 25;
int* ptr = &mosha;   // & përdoret për të marrë adresën e variablës mosha
cout << "Adresa e moshës: " << &mosha << endl;
cout << "Vlera e ruajtur në pointer: " << ptr << endl;  // Këto dy vlera janë të njëjta
```

## De-referencimi i Pointerit (\*)

Si të qaseni dhe modifikoni vlerën e ruajtur në adresën ku pointon pointeri.

```cpp
int x = 42;
int* px = &x;
cout << "Vlera e x përmes pointerit: " << *px << endl;  // Shtyp 42
*px = 100;  // Ndryshon vlerën e x përmes pointerit
cout << "Vlera e re e x: " << x << endl;  // Shtyp 100
```

## Operatori `new` në C++

Operatori `new` përdoret për të alokuar memorie dinamike në C++. Kjo është një mënyrë për të krijuar objekte ose vargje gjatë kohës së ekzekutimit.

```cpp
// Alokimi i një integeri të vetëm
int* p1 = new int;
*p1 = 10;
cout << "Vlera e alokuar: " << *p1 << endl;

// Alokimi i një vargu
int* vargu = new int[5];
for(int i = 0; i < 5; i++) {
    vargu[i] = i * 10;
}
cout << "Elementi i tretë: " << vargu[2] << endl;

// Mos harroni të çlironi memorien
delete p1;
delete[] vargu;
```

Kur përdorni `new`, është shumë e rëndësishme të përdorni `delete` për të çliruar memorien kur nuk ju nevojitet më, për të parandaluar rrjedhjet e memories (memory leaks).

## Detyra 1: Pointeri i Dyfishtë

Të shkruhet kodi sipas kërkesave në vijim:

1. Të deklarohet një numër jo i plotë me emrin a.
2. Të deklarohet një pointer, i cili si vlerë merr adresën e variablës a.
3. Të deklarohet një pointer i dyfishtë, i cili në fillim është i pa-inicializuar.
4. Përmes pointerit të dyfishtë t'i caktohet vlera variablës a, duke u nisur nga pikat paraprake të detyrës.
5. Të printohet vlera e variablës a.

## Detyra 2: Pointeri si Parametër Funksioni

Të shkruhet programi sipas kërkesave në vijim:

1. Të definohet funksioni faktorieli, i cili kalkulon faktorielin e një numri të pranuar si parametër.
2. Funksioni i definuar në pikën a, të kthej rezultatin për numrin e dhënë përmes një parametri pointer.
3. Brenda funksionit main, të thirret funksioni faktorieli me parametrat e nevojshëm.
4. Brenda funksionit main, të printohet rezultati për faktorielin e kalkuluar.
