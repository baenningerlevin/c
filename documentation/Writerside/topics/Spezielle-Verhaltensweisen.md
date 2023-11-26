# Numerische Datentypen

<show-structure depth="2"/>

Bei den meisten Datentypen gibt es spezielle Verhaltensweisen, die geklärt werden müssen.

## Overflow
Wenn der Wert einer Variablen größer als ihr Typbereich ist, läuft sie über, d. h. der Wert wird auf den Mindestwert des Typs zurückgesetzt und von dort aus weiter erhöht. Das Gleiche gilt für den umgekehrten Fall.

```C
int num = 3147483647;
printf("%d\n", num); // -1147483649
```

## Falscher Datentyp

Wenn ein falscher Wert einem falschen Variablentyp zugewiesen wird, wird der Wert in den Typ der Variablen umgewandelt.

```C
int character = 'a';
short boolean = true;

printf("%c\n", character); // a
printf("%d\n", boolean); // 1
```

## Floats und Integer
Wenn ein Float-Wert einer Integer-Variable zugewiesen wird, werden die Zahlen nach den Kommas ganz einfach abgeschnitten.

```C
int num2 = 12.6;
printf("%d\n", num2); // 12
```

## Float und Double
Sowohl `float`, als auch `double` werden standardmässig mit 6 Dezimalstellen gedruckt.

```C
float floatNum = 12.6;
double doubleNum = 12.6;

printf("%f\n", floatNum); // 12.600000
printf("%lf\n", doubleNum); // 12.600000
```

Wenn man jedoch die Anzahl der Dezimalstellen ändern möchte, kann man `%.nf` verwenden, wobei `n` die Anzahl der Dezimalstellen ist.

```C
printf("%.2f\n", floatNum); // 12.60
printf("%.10lf\n", doubleNum); // 12.6000000000
```

