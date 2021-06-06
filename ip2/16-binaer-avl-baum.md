---
layout: lufix
title: Übung 16 - Binärbaum + AVL Baum
permalink: /ip2/binaer-avl-baum/
parent: Übungen für IP2
nav_order: 9
---

# Übung 16 - Binärbaum + AVL Baum

## Binärbaum

Programmieren Sie für einen geordneter Binärbaum folgende Operationen:

- hinzufügen eines Knoten: int insertNode(int value)
- Suchen eines Knoten: `struct node* searchNode(int value)`
- löschen eines Knoten: int deleteNode(int value)
- bis auf die Funktion searchNode liefern die Funktionen über den Rückgabewert den Erfolg der Ausführung zurück.
  - 0 ... Ausführung fehlgeschlagen (zB Knoten beim Einfügen bereits vorhanden)
  - 1 ... Ausführung erfolgreich
- Inhalte des Baums sortiert ausgeben: `int printDataSorted(struct node*)`
  - rekursive "in order" Traversierung
  - gibt die Zahlen des Baums sortiert aus
- Verifikation des Baums: `int debugPrint(struct node*)`
  - rekursive Funktion (order egal)
  - Gibt von jedem Knoten den Wert, den Wert des Vaters und den Wert der Söhne aus.
  - Diese Funktion dient zur Verifikation der Baumverbindungen
- Baum ausgeben: `int printTree(int)`
  - gibt den Baum als Baum mit Verästelungen aus.
  - Der Wert, der als Parameter übergeben wird, wird im Baum (falls vorhanden) rot ausgegeben.
  - [Beispielprogramm](https://github.com/lufixSch/ece-ip-uebungen/tree/main/ip2/16-binaer-avl-baum/vorlage)
    - beispielhafte Ausgabe siehe unten
- Baum frei geben: `int destroyTree( struct node *)`
  - gibt zuerst alle Blätter und Knoten frei, zuletzt die Wurzel
  - (rekursive "post order" Traversierung)

Die Rückgabewerte der Funktionen geben jeweils Auskunft über den Erfolg der Operation.

Der Speicher der Knoten soll bei Einfügen in den Baum dynamisch allokiert werden.

Zum Testen der Software werden obige Funktionen sequentiell mit entsprechenden Parametern aufgerufen. (siehe Abschnitt Testdaten)

Für die Struktur eines Knoten ist folgender oder ähnlicher Code zu verwenden:

```c
struct node {
  int value;
  struct node *parent;
  struct node *left_child;
  struct node *right child;
};

struct node *wurzel;
```

<figure class="image">
  <img src="{{site.baseurl}}/assets/images/binaer-baum_ausgabe_voll.png" alt="Beispielhafte Ausgabe der Funktion printTree">
  <img src="{{site.baseurl}}/assets/images/binaer-baum_ausgabe_teil.png" alt="Beispielhafte Ausgabe der Funktion printTree">

  <figcaption>Beispielhafte Ausgabe der Funktion printTree()</figcaption>
</figure>

### Testdaten

1. Testdatensatz

   - Einfügen von: 1, 5, 3, 10, 8, 11, 6, 9, 7
   - Ausgabe des Baums
   - suche 1
   - suche 6
   - suche 7
   - suche 2

2. Testdatensatz

   - Einfügen von: 1, 5, 3, 10, 8, 11, 6, 9, 7
   - Ausgabe des Baums
   - suche 9
   - lösche 9
   - suche 9
   - Ausgabe des Baums

3. Testdatensatz

   - Einfügen von: 1, 5, 3, 10, 8, 11, 6, 9, 7
   - Ausgabe des Baums
   - lösche 10
   - suche 8
   - Ausgabe des Baums
   - lösche 5
   - suche 7
   - Ausgabe des Baums

4. Testdatensatz

   - lösche 5
   - suche 7
   - Einfügen von: 1, 5, 3, 10, 8, 11, 6, 9, 7
   - Ausgabe des Baums
   - suche 7
   - lösche 5
   - suche 7
   - lösche 6
   - suche 7
   - suche 9
   - Ausgabe des Baums
   - Baum löschen
   - Ausgabe des Baums
