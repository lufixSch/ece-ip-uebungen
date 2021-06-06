---
layout: lufix
title: Übung 6 - Arduino Übung - Parksensor
permalink: /ip1/parksensor/
parent: Übungen für IP1
nav_order: 6
---

# Übung 6 - Arduino Übung - Parksensor

## Aufgabenstellung

Es ist ein Arduino-Programm zu realisieren, das folgende Elemente enthält:

- Statemachine
- Taster einlesen (Zustands- und Flankenerkennung)
- LED ansteuern (AUS, EIN, blinken)
- Ultraschallsensor einlesen (verwendete Type: HC-SR04)
- Schreiben auf die serielle Schnittstelle
  - Die Statemachine ist analog zum unten abgebildeten Zustandsdiagramm zu realisieren. "1" repräsentiert den Startstate. Über die serielle Schnittstelle ist das Verhalten der Applikation auszugeben.
  - (zB Zustandswechsel der Statemachine, erkannte Tastendruckereignisse, aktueller Entfernungswerte des Ultraschallsensors,...)
  - Es ist besonders auf die Einhaltung unseres Coding-Styles zu achten.

optional können Sie folgende Punkte realsieren:

- geben Sie wie bei einem Parksensor den Abstand des erkannten Objekts akustisch aus.
  - Verwenden Sie hierzu einen kleinen Lautsprecher oder Piezo Beeper.
  - Je näher das Objekt kommt, desto schneller piept das akustische Signal.
  - Bei Unterschreitung des Mindestabstandes ertönt ein permanentes akustisches Signal.
- Das akustische Signal könnte in Abhängigkeit des Abstands neben der Piep-frequenz auch die Tonhöhe verändern

## Hilfsmittel

<figure class="image">
  <img src="{{site.baseurl}}/assets/images/parksensor_statemachine.jpg" alt="Aufbau der Statemachine">
  <figcaption>Diagramm zum Aufbau der Statemachine</figcaption>
</figure>

[Datenblatt des Ultraschallsensors](https://cdn.sparkfun.com/datasheets/Sensors/Proximity/HCSR04.pdf)
