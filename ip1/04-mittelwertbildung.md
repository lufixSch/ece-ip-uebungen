---
layout: lufix
title: Übung 4 - Mittelwertbildung
permalink: /ip1/mittelwertbildung/
parent: Übungen für IP1
nav_order: 4
---

# Übung 4 - Mittelwertbildung

## Übungsinhalte

- Arrays
- switch Anweisung
- Wiederholung bisheriger Themen

## Aufgabenstellung

Schreiben Sie ein Programm, das maximal 10 Zahlen von der Tastatur einliest, in einem Array ablegt und am Ende den Mittelwert der Zahlen berechnet Augenmerk liegt bei diesem Programm auf:

- Robustheit: Das Programm soll jegliche Eingabe akzeptieren, ohne in einen undefinierten Zustand zu kommen wohl überlegte Plausibilitätsprüfungen!
- Benutzerführung: Der Benutzer soll durch das Programm geführt werden und sich dabei auskennen Fehlermeldungen bei Fehleingabe! z.B. auch wie viele Zahlen bereits eingegeben - wurden
- Programmstruktur: klare, leicht lesbare Programmstruktur
- Kommentare an entscheidenden Stellen

## Detailanforderungen

- Beschreibung am Beginn, was vom Benutzer erwartet wird und was das Programm tun wird
- Vom Benutzer eingegebener Text wird ausgewertet. Wenn es sich um eine Zahl handelt, muss der „Zahlentext“ in eine Zahl umgewandelt und anschließend im array abgelegt werden - Anm: die Funktion atoi() oder ähnlich ist nicht erlaubt
- Eingabe des Benutzers:
  - Es wird ein Befehl ODER eine Zahl eingegeben.
  - Die Eingabe wird mit <Enter> abgeschlossen.
  - Bei den Befehlen sollen Klein- und Großbuchstaben akzeptiert werden.
  - ‚X‘ oder ‚Z‘ … Beenden des Programms
  - ‚L‘ … löschen aller bisherigen eingegebenen Zahlen
  - ‚A‘ … Ausgabe des Mittelwerts zum aktuellen Zeitpunkt (auch zwischendurch)
  - Zahlen:
    - Ziffern 0..9 erlaubt, keine anderen Zeichen (+,-, r,…)
    - Keine negativen Zahlen
    - Wertebereich: 0 bis höchstmögliche 4-byte Zahl
- Geeignete Meldungen bei Fehleingabe überlegen … nicht „lästig“ und kurz und prägnant!
- Achten Sie auf die Einhaltung unseres Coding Styles

## Vorgaben

- Für die Eingabe:
  - (Anmerkung: `scanf` mit Formatbezeichner `%s`: Der eingegebene Text wird im character-Array automatisch mit dem Abschlusszeichen '\0' abgeschlossen)

```c
char benutzer_eingabe[100];

scanf("%s", benutzer_eingabe);
```

- Datenstruktur / Array:

```c
char zahlen_zaehler;

unsigned int zahlen_puffer[10];
```

**es gilt immer**

- Aufgabenstellung verstehen
- Struktur überlegen
- Aufgabenstellung in Einzelaufgaben zerlegen
- Einzelaufgaben im Detail planen
- Dann erst Schritt für Schritt umsetzen
