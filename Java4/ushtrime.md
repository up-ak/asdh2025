# Implementimi i një Regjistri Telefonik Dinamik

Zhvillimi i një aplikacioni interaktiv për menaxhimin e kontakteve nëpërmjet një ndërfaqeje në konsolë.

## Klasat për Implementim

### 1. Contact

- **Përshkrimi**: Përfaqëson një kontakt.
- **Fushat** (publike):
  - name (string): Emri i kontaktit.
  - number (string): Numri i telefonit.
- **Konstruktori pa paramtera**
- **Konstruktori me dy parametra** name, number

### 2. Phonebook

- **Përshkrimi**: Menaxhon një listë dinamike të kontakteve.
- **Fushat**:
  - contacts: Një varg dinamik i objekteve Contact, privat dhe i alokuar dinamikisht.
  - name(string) - Emri i phonebook
- **Konstruktori**: Pranon madhësinë fillestare të librit telefonik dhe emrin
- **Metodat**:
  - addContact(name, number): Shton një kontakt të ri.
  - listContacts(): Liston kontaktet.
  - editContact(name, number): Ndryshon numrin e kontaktit.
  - findNumber(name): Gjen numrin për kontakt

## Funksionaliteti Kryesor

- Implementimi i një menyu interaktive për shtimin, modifikimin dhe listimin e kontakteve.

## Shembull

```
Shtypni madhesin e phonebook: 100
Zgjidhni opsionin:
1 - fut
2 - azhuro
3 - listo
4 - perfundo
```

- Menaxhimi i memorjes për të shmangur rrjedhjet e memorjes.

## Sfida Shtesë

- Implementimi i një sistemi për caktim dinamik të madhësisë së listës së kontakteve, duke eliminuar nevojën për përcaktimin e një madhësie fillestare.
