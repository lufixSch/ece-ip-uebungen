---
layout: lufix
title: Übung 12 - Wiederholung Pointer und Strukturen
permalink: /ip2/pointer-strukturen/
parent: Übungen für IP2
nav_order: 5
---

# Übung 12 - Widerholung Pointer und Strukturen

Dies ist eine Zusammenstellung kleinerer Aufgaben zur Widerholung von Pointern und Strukturen.

# Aufgabenstellung zur Wiederholung von Inhalten

## 1. Pointer

Schreiben Sie folgendes kurzes Programm:

1. definieren Sie eine char Variable "my_char" und einen Pointer "ptr_to_char"
   Setzen Sie die char-Variable über den Pointer auf den Wert 33;
2. definieren Sie eine int Variable "my_int" und einen Pointer "ptr_to_int"
   Setzen Sie die int-Variable über den Pointer auf den Wert 1234;

Geben Sie beide Variablen über die Variable selbst und über den zugehörigen Pointer am Bildschirm aus.

## 2. Strukturen

Programmieren Sie ein kurzes Programm

1. Definieren Sie eine Struktur s_date mit folgenden Feldern:

   - `int my_day`
   - `int my_month`
   - `int my_year`
   - `char my_name[100]`;

2. definieren Sie eine struct-Variable my_s_date.
   Initialisieren Sie die Struktur auf Inhalte Ihrer Wahl .
   Geben Sie die Struktur am Bildschirm aus

3. Beschreiben Sie die Felder der struct-Variable my_s_date
   und geben Sie diese am Bildschirm aus

4. definieren Sie einen Pointer auf die obige Struktur
   und beschreiben Sie die Struktur über den Pointer mit anderen Werten
   Geben Sie die Struktur wieder am Bildschirm aus, aber diesmal über den Pointer !

   ## 3. Malloc

Programmieren Sie ein kurzes Programm

1. reservieren Sie mit malloc Platz für 60 short-Variablen
   übernehmen Sie den Speicher mit der Pointervariablen "short_ptr"

2. beschreiben Sie die ersten drei Elemente über den "short_ptr"

3. beschreiben Sie die nächsten drei Elemente über einen "temp_ptr", den Sie nach jedem Schreibzugriff inkrementieren
   temp_ptr++;

4. beschreiben Sie die nächsten drei Elemente über den "short_ptr" in der ARRAY-Schreibweise

5. geben Sie die ersten 12 Elemente über eine Scheife aus

6. geben Sie den reservierten Speicher wieder frei
