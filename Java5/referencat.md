# Referencat në C++

Referencat në C++ janë një alternativë ndaj pointerave që lejojnë krijimin e një aliasi për një variabël ekzistuese. Ndërsa pointerat janë të fuqishëm, referencat ofrojnë një sintaksë më të pastër dhe më të lehtë për t'u përdorur në shumë raste.

## Çfarë janë referencat?

Një referencë është thjesht një "emër i ri" ose alias për një variabël ekzistuese. Pasi krijohet, çdo operacion i kryer në referencë në të vërtetë kryhet në variablën origjinale.

## Sintaksa e referencave

```cpp
int x = 10;     // Variabël normale
int& ref = x;   // ref është një referencë për x
```

Kur ndryshoni `ref`, ju në fakt po ndryshoni `x`:

```cpp
ref = 20;       // Tani x është gjithashtu 20
```

## Referencat vs. Pointerat

| Pointerat                                | Referencat                                       |
| ---------------------------------------- | ------------------------------------------------ |
| Mund të inicializohen më vonë            | Duhet të inicializohen në deklarim               |
| Mund të jenë NULL                        | Nuk mund të jenë NULL                            |
| Mund të rialokohen tek variabla të tjera | Nuk mund të ndryshojnë variablën që referencojnë |
| Kërkojnë dereferencim me `*`             | Nuk kërkojnë dereferencim                        |
| Aritmetikë pointeri e lejuar             | Nuk ka aritmetikë reference                      |

## Përdorimi i referencave në funksione

Një nga përdorimet më të zakonshme të referencave është si parametra të funksionit:

### Shembull 1:

#### Rritja e vlerës (duke përdorur pointera)

```cpp
void increment(int* number, int value) {
    *number += value;
}

// Përdorimi
int num = 5;
increment(&num, 3);  // Duhet të kalojmë adresën me &
// Tani num është 8
```

#### Rritja e vlerës (duke përdorur referenca)

```cpp
void increment(int& number, int value) {
    number += value;
}

// Përdorimi
int num = 5;
increment(num, 3);  // Më pastër, pa nevojën e operatorit &
// Tani num është 8
```

### Shembull 2: Funksioni swap - Ndrrimi i vlerave te variables a me b

```cpp
void swap(int a, int b){

}

```

## Referencat konstante

Një referencë konstante nuk lejon ndryshimin e vlerës origjinale nëpërmjet referencës:

```cpp
const int& ref = x;  // ref nuk mund të përdoret për të ndryshuar x
```

Referencat konstante janë të dobishme për parametrat e funksionit kur:

- Dëshironi të shmangni kopjimin e objekteve të mëdha
- Nuk dëshironi që funksioni të modifikojë vlerën origjinale

```cpp
void printVector(const int& ref) {
    // ref nuk mund të modifikohet këtu
}
```
