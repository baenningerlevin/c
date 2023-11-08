# Verzweigungen

## if

Die Syntax eines `if`-Statements sieht folgendermassen aus:

```C
if (test expression)
{
	//code
}
```

Das `if-statement` evaluiert den Testausdruck in den Klammern `()`.

- Wenn der Testausdruck tu `true` ausgewertet wird, werden die Anweisungen innerhalb des Körpers von `if` ausgeführt.
- Wenn der Testausdruck tu `false` ausgewertet wird, werden die Anweisungen innerhalb des Körpers von `if` nicht ausgeführt.

### Beispiel zu if

![Beispiel zu if](Bild6.png)

Hier wird die Anweisung im `if-statement` nur ausgeführt, wenn der User eine negative Zahl eingibt. Ansonsten wird das Programm weiter normal ausgeführt.

## if-else

Das `if-statement` hat noch einen optionalen `else` Block.

```C
if (test expression) {
	// run code if test expression is true
}
else {
	// run code if test expression is false
}
```

Wenn der Testausdruck als `true` ausgewertet wird,
- werden Anweisungen innerhalb des Körpers von `if` ausgeführt.
- werden die Anweisungen innerhalb des Körpers von `else` nicht ausgeführt.

Wenn der Testausdruck als `false` ausgewertet wird,
- werden die Anweisungen im Körper von `else` ausgeführt
- werden Anweisungen innerhalb des Körpers von `if` nicht ausgeführt.

### Beispiel zu if..else

![Beispiel zu if..else](Bild7.png)

Wenn der User eine gerade Nummer eingibt, werden die Anweisungen im `if-Block` ausgeführt. Wenn es irgendeine andere Zahl oder sonstiges ist, werden die Anweisungen im `else-Block` ausgeführt.

## if..else Ladder

Die `if..else ladder` erlaubt es einem eine Variable oder ähnliches auf mehrere Werte zu prüfen.

```C
if (test expression1) {
   // statement(s)
}
else if(test expression2) {
   // statement(s)
}
else if (test expression3) {
   // statement(s)
}
.
.
else {
   // statement(s)
}
```

### Beispiel zu if..else Ladder

![Beispiel zu if..else Ladder](Bild8.png)

## Switch

Mit der `switch`-Anweisungen können wir einen Codeblock unter mehreren Alternativen ausführen. Dasselbe ist auch mit einer `if..else ladder` möglich. Die Syntax der `switch`-Anweisung ist jedoch deutlich kompakter und einfacher zu lesen bzw. zu schreiben.

```C
switch (expression)
{
    case constant1:
      // statements
      break;

    case constant2:
      // statements
      break;
    .
    .
    .
    default:
      // default statements
}
```

Die `expression` wird einmal ausgewertet und mit den Werten der einzelnen `case` verglichen.
- Gibt es eine Übereinstimmung, werden die entsprechenden Anweisungen nach dem übereinstimmenden Label ausgeführt. Ist der Wert des Ausdrucks beispielsweise gleich der `constant2`, werden die Anweisungen nach case `constant2:` ausgeführt, bis ein `break` auftritt.
- Wenn es keine Übereinstimmung gibt, werden die Standardanweisungen ausgeführt.

**Wichtig:**
- Wenn wir die Break-Anweisung nicht verwenden, werden alle Anweisungen nach dem entsprechenden Label ebenfalls ausgeführt.
- Der `default` Wert in einem `switch`-Statement ist optional.

### Beispiel eines switch-statements

![Bespiel switch statement](Bild9.png)

