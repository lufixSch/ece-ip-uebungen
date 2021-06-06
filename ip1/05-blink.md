---
layout: lufix
title: Übung 5 - Arduino Übung - Blink
permalink: /ip1/blink/
parent: Übungen für IP1
nav_order: 5
---

# Übung 5 - Arduino Übung - Blink

Als Basis für diese Übung dient das Arduino Basics-Beispielprogramm "blink"

## Aufgabenstellung

Geben Sie EIN Sourcefile (\*.ino) ab, in dem alle Übungsteile enthalten sind (Teile kennzeichnen und auskommentieren)

### Übung 1:

Am Arduino Board befindet sich am Port 13 eine LED, diese LED soll mit einer Frequenz von 5 Hz blinken.
Verwenden Sie für die Übung 1 bis 4 zum Blinken die Funktionen digitalWrite und delay.

### Übung 2:

erhöhen Sie die Blinkfrequenz so lange, bis Sie kein Blinken mehr erkennen können.
Bestimmen Sie die Blinkfrequenz durch Errechnen aus ON-Zeit und OFF-Zeit der LED.
Machen Sie sich Gedanken, welchen Zusammenhang dies mit der Bildschirmwiederholfrequenz hat.

### Übung 3:

Bleiben Sie auf einer Blinkfrequenz, die vom Auge nicht mehr als Blinken erkannt wird und verstellen Sie die ON-Zeit der LED zwischen Minimum und Maximum.
Anmerkung: Wenn die Frequenz gleich bleiben soll, muss sich bei Erhöhung der ON-Zeit die OFF-Zeit verringern.
(ON-Zeit + OFF-Zeit = konstant)
Sie können so die Helligkeit der LED verstellen.

### Übung 4:

Die Helligkeit der LED soll über einen Potentiometer eingestellt werden:
Lesen Sie über den analogen Input A0 (`analogRead()`) einen analogen Wert eines Potentiometers ein. Der analoge Wert soll durch Verstellen des Potentiometers zwischen 0V und 5V veränderbar sein.
Verstellen Sie in Abhängigkeit des eingelesenen analogen Wertes die Helligkeit der LED durch verstellen der ON-Zeit und der OFF-Zeit der LED.
Berechnen Sie die Zeiten manuell (ohne die Funktion `map()`)

Zusätzlich zur LED an PIN 13 schließen Sie eine externe LED an einem PWM fähigen Digitalpin an und steuern auch diese gleich wie die LED an PIN 13 an.

#### Anforderungen:

- LED leutet nicht bei Einlesen des minimalen analogen Wertes
- LED leutet mit 100% Helligkeit bei Einlesen des maximalen analogen Wertes
- Linearer Zusammenhang zwischen Helligkeit und dem analogen Wert:
- verwenden Sie für die Umrechnung die Geradengleichung ($$y = k\cdotx + d$$)

### Übung 5:

Verändern Sie Übung 4 , indem Sie digitalWrite und delay gegen analogWrite (Hardware PWM) austauschen. Beachten Sie, dass analogWrite NICHT für die builtin LED an PIN 13 funktioniert, sondern lediglich an bestimmten Digitalpins. Lesen Sie nach warum.

Fügen Sie am Ende der loop ein zusätzliches delay von 2 Sekunden ein, um zu beobachten, dass die LED auch während dieses delays angesteuert wird.
Versuchen Sie das selbe mit Übung 4 und überlegen Sie, warum es in dieser Variante nicht funktioniert.

### Übung 6:

Verwenden Sie für die Umrechnung der Helleigkeit statt der Geradengleichung die Funktion `map()`.
Schreiben Sie die den Helligkeitswert der LED in Prozent in regelmäßigen Abständen in den Serial Monitor (`Serial.print()`)
Anstatt die LED manuell ein und auszuschalten, können Sie auch die Funktion `analogWrite(...)` verwenden.
Überlegen Sie, welchen Einfluss nun das delay in "`loop()`" auf das Verhalten der Applikation hat.
