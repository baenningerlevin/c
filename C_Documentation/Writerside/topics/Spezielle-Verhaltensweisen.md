# Spezielle Verhaltensweisen

Bei den meisten dieser Datentypen gibt es spezielle Verhaltensweisen, die geklärt werden müssen.

## numerische Datentypen

### Overflow
Wenn der Wert einer Variablen größer als ihr Typbereich ist, läuft sie über, d. h. der Wert wird auf den Mindestwert des Typs zurückgesetzt und von dort aus weiter erhöht. Das Gleiche gilt für den umgekehrten Fall.

```C
int num = 3147483647;
printf("%d\n", num); // -1147483649
```

### Falscher Datentyp

Wenn ein falscher Wert einem falschen Variablentyp zugewiesen wird, wird der Wert in den Typ der Variablen umgewandelt.

```C
int character = 'a';
short boolean = true;

printf("%c\n", character); // a
printf("%d\n", boolean); // 1
```

### Floats und Integer
Wenn ein Float-Wert einer Integer-Variable zugewiesen wird, werden die Zahlen nach den Kommas ganz einfach abgeschnitten.

```C
int num2 = 12.6;
printf("%d\n", num2); // 12
```

### Float und Double
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

## char

### Zeichen

Der Datentyp `char` hat noch eine weitere wichtige Funktion, nämlich das Speichern von Zeichen und Zeichenketten.

```C
char num = 23;
char character = 'a';
char string[] = 'Hallo';
```

Wenn wir ein Zeichen oder eine Zeichenkette in die Konsole printen wollen, dann benutzt man das Formatzeichen %c oder %s:

```C
printf("%c", character); // a 
printf("%s", string); // "Hallo"
```

Wenn wir aber die Nummer von einem `char` drucken wollen, dann benutzt man `%d`.

```C
printf("%d", num); // 23
```

Würde man bei einem Zeichen `%d` benutzen, würde die entsprechende Zahl auf der ASCII-Tabelle ausgegeben werden.

```C
printf("%d", character): // 97
```

Man kann auch eine Nummer als Eingabe übergeben und erhält das dazu passende ASCII-Zeichen zurück.

```C
char num2 = 98;
printf("%c", num2) //b
```

### Strings

Man kann direkt mitgeben, wie viel Speicherplatz C für einen String benutzen soll.

```C
char word[20] "Hello" // Die Variable word benutzt 20 Byte
```

Wenn man char im Nachhinein initialisieren möchte, braucht man eine weitere Bibliothek, `<string.h>`.

```C
#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	strcpy(word, "Hello");
	
	printf("%s", word);
}
```

## Bool
Es gibt noch den Datentyp `bool`, welcher anzeigen kann, ob eine Aussage `true` oder `false` ist. Man muss diesen Datentyp über eine externe Bibliothek hinzufügen.

```C
#include <stdbool.h>
```

Jetzt kann man mit dem Keyword `bool` eine Variable deklarieren.

```C
bool isProgrammingFun = true;
bool isVegetableTasty = false;
```

Diese Variablen kann man mit dem Formatzeichen `%d` ausgeben.

```C
printf("%d", isProgrammingFun); // 1 (true)
printf("%d\n", isVegetableTasty); // 0 (false)
```

Ein `bool` wird vor allem dann angewendet, wenn logische Faktoren, wie If-Else-Statements und Loops ins Spiel kommen.