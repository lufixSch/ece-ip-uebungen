---
layout: lufix
title: Übung 2 - Datum und Uhrzeit
permalink: /ip1/datum-uhrzeit/
parent: Übungen für IP1
nav_order: 2
---

# Übung 2 - Datum und Uhrzeit

## Aufgabenstellung:

Schreiben Sie ein Programm, das Datum und Uhrzeit sekündlich als Text am Bildschirm darstellt.

- Jedes Feld (Sekunde, Minute, …) ist in einer eigenen Variable abgelegt
  - (welchen Datentyp verwenden Sie?)
- sekündlich wird die Variable „Sekunde“ erneuert und Datum/Zeit neu angezeigt.
  - Die Zeitverzögerung ist manuell mittels Schleife umzusetzen
- Nach jedem Sekunden-Inkrement sind die Überläufe der weiteren Variablen (Minute, Stunde, … ) zu errechnen
  - zB.:
    - 14:23:59 => 14:24:00
    - 2014-03-31 23:59:59 => 2014-04-01 00:00:00
- implementieren Sie unterschiedliche Anzahl an Tagen je Monat
- berücksichtigung von Schaltjahren (beachte die Regel für jedes 4., 100. und 400. Jahr)
- **WICHTIG**: testen Sie alle Überlaufmöglichkeiten!
- Achten Sie auf die Einhaltung unseres Coding Styles

### Vorgaben

- Sekunde: 0..59
- Minute: 0..59
- Stunde: 0..23
- Tag: 1..31
- Monat: 1..12
- Jahr: vierstellig
