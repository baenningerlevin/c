# Variablen

<show-structure depth="2" />

Variablen sind eine sehr wichtige Komponente beim Programmieren, da man sie für verschiedenste Zwecke, wie das Speichern von bestimmten Daten benutzen kann.

## Erstellung von Variablen

Variablen werden folgendermassen erstellt:

```C
<datatype> <name> = <value>;
```

Man kann auch mehrere Variablen vom gleichen Typ gleichzeitig deklarieren.

```C
<datatype> <name> = <value>, <name> = <value>, ...
```

Ausserdem kann man Variablen deklarieren, ohne sie zu initialisieren:
```C
<datatype> <name>, <name>, <name>;
```

## Regeln für Variablennamen

- Eine Variable darf nur Buchstaben (sowohl Gross- als auch Kleinbuchstaben), Ziffern und Unterstriche.
- Das erste Zeichen sollte entweder ein Buchstabe oder ein Unterstrich sein. 
- Die Variable sollte nicht länger als 31 Buchstaben sein.
- Es sollte keine Syntax von C vorhanden sein. 
- Man sollte Variablen einen Sinnvollen Namen vergeben, bspw. `firstName` anstatt `fn`.
- Auch dürfen sie nicht zweimal mit demselben Namen deklariert werden.

## Konstanten

Mit dem Keyword `const` kann man Konstanten erstellen, also Variablen, die sich nicht verändern sollen:

```C
const <datatype> <name> = <value>;
```

Wenn man versucht den Wert einer Konstante zu aktualisieren, gibt es einer Kompilierfehler.

```C
const float PI = 3.14159;
PI = 2.9; // ERROR
```