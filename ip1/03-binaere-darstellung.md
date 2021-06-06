---
layout: lufix
title: Übung 3 - Funktionen und Operatoren - Binäre Darstellung
permalink: /ip1/binaere-darstellung/
parent: Übungen für IP1
nav_order: 3
---

# Übung 3 - Funktionen und Operatoren - Binäre Darstellung

## Übungsinhalt

- Funktionen
- Interpretation von Zahlen (dez, hex, binär)
- Binäre und logische Operatoren
- Coding Style

## Aufgabenstellung

Schreiben Sie ein Programm, das binäre Operationen ausführt und das Ergebnis binär am Bildschirm darstellt.
Achten Sie auf die Einhaltung unseres Coding Styles.

Dazu werden zwei Variablen (`a`, `b`) verwendet, die mit folgenden Werten vorbelegt sind:

```c
unsigned char a = 0x1C; //0001 1100

unsigned char b = 0x55; //0101 0101
```

Folgende sieben Operationen sind auszuführen und am Bildschirm darzustellen:

- a >> 1 (right shift)

- a << 2 (left shift)

- a & b (binary and)

- a \| b (binary or)

- a ^ b (ex-or)

- ~a (inverse)

- b % a (modulo operation)

Eine Ausgabe soll beispielhaft folgend aussehen:

```c
a >> 1: 00011100 >> 1 = 00001110
```

**ODER**

```c
a | b:  00011100 | 01010101 = <Ergebnis Binär>
```

**ODER**

```c
b % a:  85 % 28 = <Ergebnis dezinmal>   entspricht 01010101 % 00011100 = <Ergebnis Binär>
```

Stellen Sie die Variablen vor und nach der binären Operation binär dar.

Verwenden Sie für die Ausgabe in binär Darstellung folgenden Funktionsrumpf und erweitern Sie diesen:

```c
// Zahl binär auf den Bildschirm ausgeben
void charBinaerAusgeben(unsigned char zahl)
{
   //benützen Sie für diese Funktion binäre Operatoren
   // << >> & | ^ ~
   for (<jedes bit der zahl>)
   {
      if (<bit an der aktuellen stelle == TRUE>)
         printf("1");
      else
         printf("0");
   }
}
```
