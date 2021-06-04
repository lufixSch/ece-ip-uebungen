---
layout: lufix
title: Übung 14 - Pointer und Strukturen
permalink: /ip2/pointer-strukturen-2/
parent: Übungen für IP2
nav_order: 7
---

# Übung 14 - Pointer und Strukturen

## Pointer.c

Erstellen Sie 1 File: pointer.c

### Pointer 1

- Definieren Sie eine Variable mit dem Typ unsigned short und weisen Sie diesem einen Wert (> 300) zu
- Definieren Sie einen pointer mit dem Typ unsigned char\* und zeigen Sie mit diesem auf dem unsigned short Wert (type cast notwendig!)
- Geben Sie den Wert der unsigned short Variable mittels Pointer am Bildschirm aus.

### Pointer 2

- Definieren Sie einen pointer mit dem Typ unsigned short\* und zeigen Sie mit diesem auf den unsigned short Wert
- Geben Sie den Wert der unsigned short Variable mittels Pointer am Bildschirm aus.

### Pointer 3

- Definieren Sie eine Struktur Data, mittels typedef, die
  - ein unsigned char array mit Länge 4 ODER
  - 4 unsigned char Variablen beinhaltet (ACHTUNG: diverse IDE machen mit dieser Variante Probleme => siehe ANMERKUNG)
- Definieren Sie eine Variable vom Typ Data und weisen Sie den Variablen Werte zu.
- Zeigen Sie mit dem vorhin definierten unsigned char Pointer auf die Elemente dieser Struktur
- Geben Sie die Werte der Struktur Variablen Data mithilfe des Pointers am Bildschirm aus
  - `*(ptr+1)` ODER
  - `ptr++`; `*ptr` ...
    - **ANMERKUNG**: LabWin CVI verwehrt den Zugriff auf vier einzelne unsigned char Elemente der Struktur über inkrementieren des Pointers ptr

### Pointer 4

- Definieren Sie einen Pointer auf die struct Data
- Geben Sie die Werte der vorhin definierten Struktur Variablen Data mithilfe des Pointers am Bildschirm aus

## Strukturen.c

Erstellen Sie 1 File: strukturen.c

### Strukturen 1

- Definieren Sie folgende Strukturen mittels typedef
  - `s_dataset` bestehend aus:
    - firstname (Text: 50 Zeichen)
    - surname (Text: 50 Zeichen)
    - date_of_birth (struct s_date)
  - `s_date` bestehend aus:
    - day (unsigned char)
    - month (unsigned char)
    - year (unsigned int)
- Definieren Sie ein Array mit 4 Elementen von s_dataset und befüllen Sie dieses mit Daten
- Definieren Sie einen Pointer vom Typ `s_dataset*` (z.B. `ptr1`) und geben Sie mithilfe des Pointers die Daten am Bildschirm aus
- Defnieren Sie einen Pointer auf einen "`s_dataset*` Pointer" (Pointer auf Pointer !) (z.B. `pptr2`) mit dem Sie auf den vorherigen Pointer (`ptr1`) zeigen
- Geben Sie die Daten des Arrays mithilfe der beiden Pointer aus. Dabei soll die Ausgabe am Bildschirm nur mit dem `pptr2` gemacht werden und der `ptr1` soll auf die einzelnen s_dataset's zeigen.

### Strukturen 2

- Verwenden Sie die typedef Strukturen `s_dataset` und `s_date` aus dem letzten Beispiel
- Definieren Sie einen Pointer auf `s_dataset`
- Allokieren Sie mithilfe von malloc den Speicher für `s_dataset`
- Befüllen Sie die "Variable" mit Daten und geben Sie diese am Bildschirm aus
- Geben Sie den Speicher mit free wieder frei

### Strukturen 3

- Erweitern Sie die Struktur s_dataset aus dem letzten Beispiel und geben Sie ihr den Namen s_dataset2_struct (verwenden Sie diesmal kein typedef).
  - fügen Sie zusätzlich einen Pointer auf s_dataset2 "next_element" in der Struktur ein
    - `s_dataset2_struct` bestehend aus:
      - firstname (Text: 50 Zeichen)
      - surname (Text: 50 Zeichen)
      - date_of_birth (`struct s_date`)
      - next_element (`struct s_dataset2_struct*`)
- Definieren Sie einen Pointer auf `struct s_dataset2_struct` mit dem Namen `start_ptr`
- Definieren Sie einen Pointer auf `struct s_dataset2_struct` mit dem Namen `act_ptr`
- Allokieren nach und nach Speicher für ein struct s_dataset2_struct Element (insgesamt 3x)
  - Befüllen Sie dabei einige Daten mit Werten
  - Bilden Sie eine einfach verkettete Liste, indem `start_ptr` auf das erste Element zeigt und ein nachfolgendes Element an den `next_element` Pointer des vorigen Elements gehängt wird.
- geben Sie alle verketteten Elemente auf den Bildschirm aus
  - verwenden Sie hierzu eine while-Schleife (Achtung: wie erkennen Sie das Ende der verketteten Liste?)
  - verwenden Sie act_ptr, um auf die einzelnen Elemente zuzugreifen
- Geben Sie den Speicher aller Elemente mit free wieder frei
