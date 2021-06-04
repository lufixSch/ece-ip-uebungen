---
layout: lufix
title: Übung 11 - Auswertung von Postfix Ausdrücken (UPN Auswertung)
permalink: /ip2/upn-auswertung/
parent: Übungen für IP2
nav_order: 4
---

# Übung 11 - Auswertung von Postfix Ausdrücken (UPN Auswertung)

## Aufgabenstellung

- Zu Schreiben ist ein Programm, welches Ausdrücke, die in Postfix-Notation gegeben sind, auswertet.
- umzusetzten ist ein Algorithmus, welcher gemeinsam besprochen wird
- Die Ausdrücke sind in Form eines konstanten Strings gegeben. zB `const char INPUT*STR[ ] = “3,13,4,5,*,+,4,6,+,*,+“;`
- Die Zahlen können auch mehrstellig sein, sind aber auf positive Integerwerte beschränkt
- Geben sie das berechnete Ergebnisses am Bildschirm aus
- Der notwendige Stack und dessen Zugriffsroutinen sind in gesonderten Files (stack.c, stack.h) zu programmieren.
- Auf den Stack wird mittels folgender Funktionen zugegriffen: `int push(int operand)` und `int pop(int *operand)`
- Der return-Wert gibt dabei jeweils Information über den Erfolg der Operation (0...ok, -1...Fehler)
- Der Stack ist mit Hilfe eines Arrays umzusetzten
- Die Stackgröße ist mittels #define einzustellen: #define STACK_SIZE 5
- Folgende Operatoren sind umzusetzen: +, -, \*, /,
- Die Funktionen push, pop müssen eine Fehlerbehandlung für die Fälle (a) leerer Stapel und (b) voller Stapel haben
- Ausgabe einer Fehlermeldung, sollte der Ausdruck nicht gültig sein

[Postfix Rumpf]({{bas_url}}/404)

### Optionale Umsetzung

- Einlesen des Inputstrings von der Tastatur
- setzen Sie zusätzlich folgende Operatoren um: mod, -(Vorzeichen), ^, max, min wobei für max und min folgendes gilt:
  - der erste operand (=parameter), gibt die Anzahl der Werte, von denen das Maximum oder das Minimum bestimmt wird, an. d.h. die Funktionen max, min können beliebig viele Operanden haben. Die Operandenanzahl 1 ist ungültig. Hat die max oder min Funktion weniger Operanden als erwartet, so ist dafür eine Fehlerbehandlung zu implementieren.
- lassen Sie auch Floatwerte zu

## Testdaten

| INFIX                              | POSTFIX                                      |
| ---------------------------------- | -------------------------------------------- |
| $$( 13 + 4 ) * 5$$                 | 13 , 4 , + , 5 , \*                          |
| $$13 + 4 * 5$$                     | 13 , 4 , 5 , \* , +                          |
| $$13 * 4 + 5$$                     | 13 , 4 , \* , 5 , +                          |
| $$( 13 * 4 + 5) * ( 2 – 1 ) + 3$$  | 13 , 4 , \* , 5 , + , 2 , 1 , - , \* , 3 , + |
| $$1 + ( 13 + 4 * 5 ) * 10$$        | 1 , 13 , 4 , 5 , \* , + , 10 , \* , +        |
| $$((13 + 4) * 5 ) + (13 + 4 * 5)$$ | 13, 4, +, 5, \*, 13, 4, 5, \*, +, +          |
