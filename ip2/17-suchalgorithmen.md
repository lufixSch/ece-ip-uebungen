---
layout: lufix
title: Übung 17 - Sequentielle, binäre und Interpolationssuche
permalink: /ip2/suchalgorithmen/
parent: Übungen für IP2
nav_order: 10
---

# Übung 17 - Sequentielle, binäre und Interpolationssuche

Schreiben Sie ein Programm, das aus einem sortierten Zahlen-Array eine bestimmte Zahl sucht.

Die jeweilige Zahl ist mit vier Suchimplementationen (drei Such-Arten) zu suchen.

- sequentielle Suche
- binäre Suche (interativ programmiert)
- binäre Suche (rekursiv programmiert)
- Interpolationssuche (iterativ oder rekursiv)

## Detailbeschreibung:

Zu Beginn gibt der Benutzer eine Anzahl von Zahlen ein (zB 1.000 oder 1.000.000)

Die Software allokiert Speicher für diese Anzahl an integer Zahlen und befüllt diese mit zufälligen Integer Werten

Das Array wird mit einem beliebigen Sortieralgorithmus sortiert (letzte Übung)

Anschließend wird eine bestimmte (eingegebene) Zahl mithilfe der vier Suchalgorithmen gesucht

Die Suche soll mit einer anderen Zahl wiederholt werden können.

Dabei ist je Algorithmus die Anzahl der durchgeführten Schritte, sowie das Ergebnis (gefunden / nicht gefunden) auszugeben.

### Anmerkung:

Damit Sie sich zu Beginn auf die Suchalgorithmen konzentrieren können, verwenden Sie die beigestellten Dateien, die 2000 kommagetrennte Integer Werte beinhalten.

### Formel zur Bestimmung des nächsten Index (Interpolationssuche)

<script type="math/tex; mode=display">
  \frac{x-l}{w-W[l]} = \frac{r - l}{W[r] - W[l]}\\[1em]
  x = l + \frac{w - W[l]}{W[r] - W[l]} \cdot (r - l)\\[1em]
</script>

**mit**

- $$x =$$ gesuchter Wert
- $$W[i] =$$ Wert mit dem index $$i$$
- $$l,r =$$ Index
- $$x =$$ gesuchter Index

[Array Generator](https://github.com/lufixSch/ece-ip-uebungen/tree/main/ip2/17-suchalgorithmen/vorlage)
[Datensatz](https://github.com/lufixSch/ece-ip-uebungen/tree/main/ip2/17-suchalgorithmen)
