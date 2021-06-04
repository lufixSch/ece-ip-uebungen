---
layout: lufix
title: Übung 15 - Sortieralgorithmen
permalink: /ip2/sortieralgorithmen/
parent: Übungen für IP2
nav_order: 8
---

# Übung 15 - Sortieralgorithmen

## Aufgabenstellung

Es soll mittels Insert Sort Algorithmus ein Array von integer Zahlen sortiert werden.

Anforderungen an den Sortieralgorithmus

- Erstellen Sie ein main.c file
  - aus der main.c können verschiedene Sortieralgorithmen aufgerufen werden, von denen wir vorerst einen programmieren
  - Das zu sortierende Zahlenarray ist wie folgt zu definieren:
    - `int sort_array[] = {92,4,6,7,252,4,83,5,49,10,134,156,7,29};`
    - Die Größe des Arrays soll per sizeof Funktion festgestellt werden
  - es ist eine Funktion `sort(...)` zu erstellen, der folgende Parameter mitgegeben werden
    - ein per enum definierter Wert, welcher Sortieralgorithmus angewendet werden soll
    - Pointer auf das zu sortierende Array
    - Länge des Arrays
  - main ruft die Sortieralgorithmen über `sort(...)` auf
  - `sort(...)` misst die Laufzeit des aufgerufenen Sortieralgorithmus und gibt diese aus
- Erstellen sie eine insertsort.c und insertsort.h Datei
  - Die insertsort.c Datei enthält die Funktion insertSort, welcher das zu sortierende Array übergeben wird. Die Funktion sortiert das Array nach dem Insertionsort Algorithmus und gibt die Zahlen sortiert aus

## Dynamisch erzeugtes Array mit Zufallszahlen

Wer möchte, kann sich über den unten verlinkten code dynamisch ein array mit Zufallszahlen erzeugen lassen. Die Arraygröße kann mit einem DEFINE eingestellt werden.

```c
#define ARRAY_SIZE 1000000
```

Das dynamisch erzeugte Array heißt `number_array` und ist vom Typ `unsigned long`

[Arraygenerator mit Zufallszahlen](https://github.com/lufixSch/ece-ip-uebungen/tree/main/ip2/15-sortieralgorithmen/vorlage)

## Erweiterung - zusätzlicher Sortieralgorithmus

Erweitern Sie Ihre Software um einen zusätzlichen Sortieralgorithmus.
Der neue Algorithmus (eigenes .c und .h file) soll in das bestehende Programm eingebunden werden.

Die Übergabe der Parameter, sowie die Ausgabe des Ergebnisses und eine eventuelle Zeitmessung ist wie in obiger Übung (Main - Modul) beschrieben umzusetzen.

Alle Studierenden, die in der Vorlesung einen Sortieralgorithmus präsentiert haben, setzen bitte diesen Algorithmus um. Jedes Gruppenmitglied schreibt einen eigenen Code. Bitte unterschiedliche Implementierungen umsetzen (rekursiv/iterativ)
Alle anderen Studierenden programmieren den Algorithmus, den wir gemeinsam vereinbart haben (siehe Einteilung).

### Im WIKI zur Verfügung stellen

Zusätzlich zur Übungsabgabe stellen Sie bitte Ihren Sortieralgorithmus für alle im "WIKI-Sortieralgorithmen" bereit.
Legen Sie Ihr zip-File, bestehend aus .c und .h File (ohne main), unter der jeweiligen Überschrift ab.
Achtung: Filenamen und Funktionsaufruf sollen eindeutig sein (inkludieren Sie zB Ihren Nachnamen)

## Erweiterung - Testen von Funktionen

Erweitern Sie Ihr Programm folgend:

- Zu Beginn wählen Sie das zu sortierende Array aus. Es soll möglich sein, aus folgenden Optionen zu wählen:
  - vordefiniertes zu sortierendes Array
  - zufällig generiertes Zahlenarray mit/ohne Duplikaten - Eingabemöglichkeit Anzahl der Elemente
- Anlegen einer Kopie des Arrays
- Sortieren Sie das Array in in ein weiteres "sorted"-Array (verwenden Sie dafür den Sortieralgorithmus Ihrer Wahl)
- Binden Sie mindestens 10 weitere Sortieralgorithmen in Ihr Programm ein
  - plus zusätzlich einen Standard-Sortieralgorithmus (zB aus stdlib.h )
- Führen Sie ALLE Sortieralgorithmen hintereinander aus
  - Referenz-Array kopieren
  - Zeitmessung starten
  - Array sortieren
  - Zeitmessung stoppen
  - Array mit dem "sorted"-Array vergleichen
  - Zusammenfassung anzeigen (PASS / FAIL, verstrichene Zeit) - Anzeige evtl in Farbe

### Anmerkung:

- verwenden Sie für die verschiedenen Sortieralgorithmen ein ENUM in einer switch-case Struktur
- die einzelnen Sortieralgorithmen können innerhalb einer Schleife, die NUM_SORTING_ALGORITHMS mal durchlaufen wird gestartet werden
