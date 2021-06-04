---
layout: lufix
title: Übung 10 - Damenproblem Smart
permalink: /ip2/damenproblem-smart/
parent: Übungen für IP2
nav_order: 3
---

# Übung 10 - Damenproblem Smart

Programmieren Sie das Damenproblem so um, dass es die besprochene Smart-Datenstruktur verwendet.
Verwenden Sie eindimensionale Arrays für die Position der Damen (Spaltenvektor) und die Markierung der Strahlen (Zeilenvektor, Hauptdiagonalen- und Nebendiagonalenvektor)
Der Algorithmus des Programms bleibt ident.

Strukturieren Sie den Programmcode so, dass Sie nur ihre Subfunktionen für die Änderung der Datenstruktur anpassen müssen. zB:

- Kollissionsprüfung
- Dame setzen
- Dame löschen

Die Ordnung des Programmes sinkt wie besprochen von O($$n^4$$) auf O($$n^3$$). Die Ausführungszeit bei großen Brettgrößen sinkt dramatisch.
Vergleichen Sie die Rechenzeiten beider Programme für EINE Lösung der Brettgrößen 31 oder 32. Teilen Sie mir die Ausführungszeiten mit.
Das Programm soll wahlweise ALLE bzw. EINE Lösung finden können (Präprozessorschalter oder Benutzereingabe zur Laufzeit)
Bei ALLEN Lösungen soll (zumindest) die Anzahl der Lösungen und bei EINER Lösung die Lösung selbst dargestellt werden.
Des weiteren soll
die Laufzeit gemessen und
die Anzahl der "Konflikte" und "lady removes" gezählt und ausgegeben werden
