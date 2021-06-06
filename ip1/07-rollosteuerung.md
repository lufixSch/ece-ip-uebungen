---
layout: lufix
title: Übung 7 - Arduino Übung - Rollosteuerung
permalink: /ip1/rollosteuerung/
parent: Übungen für IP1
nav_order: 7
---

# Übung 7 - Arduino Übung - Rollosteuerung

Es soll eine Rollosteuerung an Hand einer Statemachine entwickelt werden.

Die Befehle "Rollo AUF" und "Rollo AB" sollen mithilfe eines Tasters (Digital-Eingang), sowie der Funkfernbedienung umgesetzt werden.

Die Position und Aktivität der Rollo wird mittels zweier LED (ROT... Position oben, GRÜN ... Position unten) signalisiert. (siehe Bild)

Die gesamte Laufzeit der Rollo beträgt 10 Sekunden. Das Programm soll sich die Position der Rollo merken (Zeitzähler)

Die Statemachine steuert zusätzlich einen Servomotor an, der sich zwischen linker Endposition (ROLLO OBEN) und rechter Endposition (ROLLO UNTEN) bewegt.

Ein LDR liefert ein zusätzliches Eingangssignal, der

bei übermäßiger Lichteinstrahlung die Rollo absenken lässt
wenn es dunkel wird, die Rollo absenkt und
bei Sonnenaufgang die Rollo wieder öffnet

## Eingänge:

- Taster AB
- Taster AUF
- Infrarot Fernbedienung (Auf, Ab Tasten können selbst gewählt werden)
- LDR (Dämmerung)

## Ausgänge

- LED für Rollo öffnet/oben
- LED für Rollo schließt/unten
- Servo Motor

## Statemachine:

<figure class="image">
  <img src="{{site.baseurl}}/assets/images/statemachine_rollosteuerung.jpg" alt="Aufbau der Statemachine">
  <figcaption>Diagramm zum Aufbau der Statemachine</figcaption>
</figure>

<figure class="image">
  <img src="{{site.baseurl}}/assets/images/tafelbild_rollosteuerung.jpg" alt="Tafelbild mit weiteren Informationen">
  <figcaption>Weitere Informationen zum Aufbau des Programms</figcaption>
</figure>
