---
layout: lufix
title: Übung 8 - Filter
permalink: /ip2/filter/
parent: Übungen für IP2
nav_order: 1
---

# Übung 8 - Filter

## Übungsinhalte

- Arrays
- Kontrollstrukturen
- Tastatureingabe
- lesen aus einer Datei und schreiben in eine Datei
- Coding Style

## Begriffe in diesem Zusammenhang

Abtasttheorem nach Shannon, Filterkern, Faltung, Glättung ...

## Aufgabenstellung

Schreiben Sie ein Programm, das Daten aus einem File einliest und anschließend filtert und wieder ausgibt. Bei den Daten handelt es sich um 640 char-Zahlenwerte, die einen "verrauschten" sinusförmigen Verlauf darstellen. (siehe „sinus-6.txt“)

Nach Einlesen der Daten soll der Benutzer aufgefordert werden, eine Filterbreite einzugeben. Die Filterbreite repräsentiert die Anzahl der Werte, über die jeweils gleitend der Mittelwert gebildet wird. Gültige Werte für die Filterbreite sind von 1 bis 64.

Analysieren Sie die Auswirkung verschiedener Filterbreiten, in dem Sie die gefilterten Daten in Excel visualisieren. Dokumentieren Sie ihre Erkenntnisse und begründen Sie.

[zu filternde Rohdaten]({{base_url}}/404)

## Detailanforderungen

- Das Programm soll bei Start eine Beschreibung ausgeben, was vom Benutzer erwartet wird und was das Programm tun wird
- Vom Benutzer eingegebener Text wird ausgewertet. Wenn es sich um eine Zahl handelt, muss der „Zahlentext“ in eine Zahl umgewandelt werden. Die eingegebene Zahl stellt die zu verwendende Filterbreite dar. Prüfen Sie den eingegebenen Wert auf Plausibilität (gültige Werte: 1 bis 64)
- Filtern Sie die Daten durch Faltung mit dem besprochenen Filterkern
- Schreiben Sie die gefilterten Daten in eine Datei, die Sie in Excel importieren/öffnen können (.csv)
- vergleichen Sie das Ergebnis verschiedener Filterbreiten und stellen Sie diese grafisch in einem Excel Dokument dar
- Beschreiben Sie Ihre Beobachtungen im Excel Dokument
- welcher Filter liefert einen sauberen Sinusverlauf in den gefilterten Daten
- Was beobachten Sie in den gefilterten Daten mit steigender Filterbreite und warum? (Amplitude, Phasenverschiebung, ...)
- Abzugeben ist der Sourcecode als c-File, sowie die Excel Datei (.xlsx)

# Allgemeine Vorgehensweise

- Inhalt der Übung verstehen
- Aufgabe in Teilaufgaben zerlegen + Struktur erstellen
- Teilaufgaben einzeln lösen + TESTEN
- Allgemein
  - Übersichtlichkeit -> Einrückung
  - Kommentare
  - sprechende Namen für Variablen und Funktionen verwenden + „coding style“
    - Variablen … int dies_ist_eine_variable;
    - Funktionen … int diesIstEineFunktion();
- Achtung – in der Hauptschleife des Programms:
  - es gibt weniger output samples als input samples

# Codeauszug (bitte verwenden)

```c
#define NUM_SAMPLES 640

#define MAX_KERNELSIZE 64

// char beispiel_daten[4] = { 1, -4, 0, 18 };

char input_data[NUM_SAMPLES] = {
#include "sinus-6.txt"
}; // Inputdaten … sind zu filtern

char output_data[NUM_SAMPLES]; // Outputdaten …
//…hier wird das Ergebnis abgelegt

char filter_kernel_size; // Filterbreite für den Filtervorgang

// Schreiben in eine Datei
// File schreiben vorbereiten

FILE \*input_file; // deklarieren des file-pointers „input_file“

input_file = fopen("Ausgabe.csv","w"); // öffnen der zu beschreibenden Datei

// Schreiben in die Datei – zu verwenden wie „ printf “
fprintf(input_file ," Dieser Text wird %i mal in die Datei geschrieben", 1);

// nachdem alle Daten geschrieben wurden - Datei schließen
fclose(input_file);
```
