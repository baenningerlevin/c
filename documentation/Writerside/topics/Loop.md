# Loops

<show-structure depth="2"/>

Im Programmieren wird ein Loop dazu genutzt, einen Codeblock so lange zu wiederholen, bis die spezifizierte Kondition nicht mehr erfüllt wird.

## for loop

```C
for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}
```

* Die Initialisierungsanweisung wird nur einmal ausgeführt.
* Dann wird der Testausdruck ausgewertet. Wenn der Testausdruck als falsch evaluiert wird, wird die for-Schleife beendet.
* Wird der Testausdruck jedoch als wahr evaluiert, werden die Anweisungen innerhalb des Körpers der for-Schleife ausgeführt und der Aktualisierungsausdruck wird aktualisiert.
* Der Testausdruck wird erneut ausgewertet.
* Dieser Prozess wird so lange fortgesetzt, bis der Testausdruck falsch ist. Wenn der Testexpressionswert falsch ist, wird die Schleife abgebrochen.

### Beispiel für ein for loop

![Beispiel for loop](Bild10.png)

1. `i` wird auf 1 initialisiert.
2. Der Testausdruck `i < 11` wird ausgewertet. Da 1 kleiner als 11 wahr ist, wird der Körper der `for`-Schleife ausgeführt. Dadurch wird die 1 (Wert von i) auf dem Bildschirm ausgegeben.
3. Die Aktualisierungsanweisung `++i` wird ausgeführt. Jetzt ist der Wert von `i` gleich 2. Wieder wird der Testausdruck als wahr ausgewertet und der Körper der `for`-Schleife wird ausgeführt. Dadurch wird 2 (Wert von `i`) auf dem Bildschirm ausgegeben.
4. Wieder wird die Aktualisierungsanweisung `++i` ausgeführt und der Testausdruck `i < 11` ausgewertet. Dieser Prozess wird so lange fortgesetzt, bis `i` 11 wird.
5. Wenn `i` 11 wird, ist `i < 11` falsch, und die `for`-Schleife wird beendet.

## while, do..while Loop und break, continue

![while_1](while_do_while_01.png)

![while_2](while_do_while_02.png)

![while_3](while_do_while_03.png)

![while_4](while_do_while_04.png)

![while_5](while_do_while_05.png)

![while_6](while_do_while_06.png)

![while_7](while_do_while_07.png)

![while_8](while_do_while_08.png)

![while_9](while_do_while_09.png)

![while_10](while_do_while_10.png)

<seealso>
    <category ref="weitere">
        <a href="https://www.programiz.com/c-programming/c-for-loop">Programiz - for Loop</a>
        <a href="https://www.programiz.com/c-programming/c-do-while-loops">Programiz - while Loop</a>
        <a href="https://www.programiz.com/c-programming/c-break-continue-statement">Programiz - break und continue</a>
    </category>
</seealso>