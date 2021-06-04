---
layout: lufix
title: Übung 13 - Dynamischer Stack
permalink: /ip2/dynamischer-stack/
parent: Übungen für IP2
nav_order: 6
---

# Übung 13 - Dynamischer Stack

## Aufgabenstellung

Ersetzen Sie den Stack der Übung 12 (Postfix Auswertung) durch einen dynamischen Stack.

Anforderungen an den dynamischen Stack:

- die Interfaces des Stacks (push und pop) bleiben ident, sodass der Tausch des Stacks keine Änderungen der beiden Übungen notwendig macht
- Ein Stack Element soll mithilfe eines "struct" realisiert werden
- Bei Hinzufügen eines Elements am Stack wird dynamisch ein Stack Element im Speicher reserviert (malloc)
- Bei Entfernen eines Elements vom Stack wird das entfernte Stack Element im Speicher wieder frei gegeben (free)
