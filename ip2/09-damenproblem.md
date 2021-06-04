---
layout: lufix
title: Übung 9 - Damenproblem
permalink: /ip2/damenproblem/
parent: Übungen für IP2
nav_order: 2
---

# Übung 9 - Damenproblem

## Themenbeschreibung

Das Damenproblem ist eine schachmathematische Aufgabe. Es sollen jeweils acht Damen auf einem Schachbrett so aufgestellt werden, dass keine zwei Damen einander nach den Schachregeln schlagen können. Die Figurenfarbe wird dabei ignoriert, und es wird angenommen, dass jede Figur jede andere angreifen könnte. Oder anders ausgedrückt: Es sollen sich keine zwei Damen die gleiche Reihe, Linie oder Diagonale teilen. Im Mittelpunkt steht die Frage nach der Anzahl der möglichen Lösungen.

Das Problem kann auf Schachbretter beliebiger Größe verallgemeinert werden. Dann gilt es, n nicht-dominierende Damen auf einem Brett von n x n Feldern zu positionieren. Für n = 8 hat das Damenproblem 92 verschiedene Lösungen. Betrachtet man Lösungen als gleich, die sich durch Spiegelung oder Drehung des Brettes auseinander ergeben, verbleiben noch zwölf Lösungen.

<figure class="image">
  <img src="{{site.baseurl}}/assets/images/bsp_damenproblem_8.png" alt="Eine Lösung des Damnproblem mit Brettgröße 8x8">
  <figcaption>Eine Lösung des Damnproblem mit Brettgröße 8x8</figcaption>
</figure>

Die folgende Tabelle führt die Anzahl der eindeutigen Lösungen und die der gesamten Lösungen bis zur Brettgröße 26×26 auf:

| **n**     | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   | 10  | 12     | 14      | 16         | 20             | 25 (Weltrekord - 2005) | 26 (Weltrekord - 2009) |
| --------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | ------ | ------- | ---------- | -------------- | ---------------------- | ---------------------- |
| eindeutig | 1   | 0   | 0   | 1   | 2   | 1   | 6   | 12  | 46  | 92  | 1.787  | 45.752  | 1.846.955  | 4.878.666.808  | 275.986.683.743.434    | 2.789.712.466.510.289  |
| insgesamt | 1   | 0   | 0   | 2   | 10  | 4   | 40  | 92  | 352 | 724 | 14.200 | 365.596 | 14.772.512 | 39.029.188.884 | 2.207.893.435.808.352  | 22.317.699.616.364.044 |

# Programmieraufgabe

Im ersten Schritt suchen wir gemeinsam eine intuitive Lösung und setzen diese in einem C-Programm um.

Besonderes Augenmerk liegt diesmal in der Trennung zwischen Datenstruktur und Algorithmus. Subroutinen sollen sauber in eigene Funktionen gekapselt werden. Zum Beispiel soll das "Setzen" einer Dame oder das "Löschen" einer Dame in einer eigenen Funktion formuliert werden.

Wir werden die "Ordnung" der Lösung besprechen und in einem zweiten Schritt einen zweiten, optimierten Lösungsweg besprechen und umsetzen.

Ziel ist es, nur Teile des Programmes - nämlich die Datenstruktur - auszutauschen, um den zweiten Lösungsweg umzusetzen. Die Rechenzeit für eine Lösung wird mit dem zweiten Lösungsweg dramatisch niedriger sein.

Während des Lösungsfindung soll das Programm

- die Zeit zur Lösungsfindung messen
- die Anzahl der aufgetretenen "Konflikte" zählen
- die Anzahl der "Lady removes" zählen
- **Optional** sollen statt nur einer Lösung ALLE möglichen Lösungen gefunden werden.

Das Programm soll zumindest aus folgenden Funktionen bestehen:

- setLady ... platziert eine Dame an der aktuellen Position
- verifyConflict ... überprüft, ob an der aktuellen Position ein Konflikt (Bedrohung durch eine andere Dame) vorhanden ist
- removeLady ... entfernt die zuletzt gesetzte Dame
- printChessBoard ... gibt das n\*n Schachbrett am Bildschirm aus

<figure class="image">
  <img src="{{site.baseurl}}/assets/images/rechenzeit_damenproblem.png" alt="Veranschaulichung der Rechenzeit zum finden EINER Lösung mit dem vorgeschlagenen Algorithmus">
</figure>

Dieses Diagramm veranschaulicht die Rechenzeit zum finden EINER Lösung mit unserem Algorithmus mit dem intuitiven Algorithmus (orange) und der optimierten Datenstruktur (blau). Auf der Abszisse ist die Brettgröße aufgetragen.

Mögliche Ausgabe:

```bash
...

Solution: 91
00x00000
0000x000
0x000000
00000000
00000x00
000x0000
000000x0
x0000000

Solution: 92
00x00000
00000x00
000x0000
0x000000
00000000
0000x000
000000x0
x0000000
92 Solutions found.
Board Size:                 8
counted collisions:         19736
collision overflows:        0
counted lady removes:       2057
lady remove overflows:      0
counted solutions:          92
Max countervalue:           4294967295
End Time:                   0.220000 seconds
```
