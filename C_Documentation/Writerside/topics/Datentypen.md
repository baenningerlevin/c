# Datentypen

| Bezeichnung                                     | Wertebereich                                             | Speicherplatz | Formatzeichen        |
|-------------------------------------------------|----------------------------------------------------------|---------------|----------------------|
| **char**                                        | -128 bis 127                                             | 1 Byte        | `%c`, `%d` oder `%s` |
| **unsigned char**                               | 0 bis 255                                                | 1 Byte        | `%c`, `%d` oder `%s` |
| **short int** (short)                           | -32'768 bis 32'767                                       | 2 Byte        | `%hd`                |
| **unsigned short int** (short int)              | 0 bis 65'535                                             | 2 Byte        | `%hu`                |
| **int**                                         | -2'147'483'648 bis 2'147'483'647                         | 4 Byte        | `%d`                 |
| **unsigned int**                                | 0 bis 4,294,967,295                                      | 4 Byte        | `%u`                 |
| **long int** (long)                             | -2'147'483'648 bis 2'147'483'647                         | 4 Byte        | `%ld`                |
| **unsigned long int** (unsigned long)           | 0 bis 4,294,967,295                                      | 4 Byte        | `%lu`                |
| **long long int** (long long)                   | -9'223'372'036'854'755'808 bis 9'223'372'036'854'755'807 | 8 Byte        | `%lld`               |
| **unsigned long long int** (unsigned long long) | 0 bis 18,446,744,073,709,551,615                         | 8 Byte        | `%llu`               |
| **float**                                       | 1.2E-38 bis 3.4E+38 (6 Kommastellen)                     | 4 Byte        | `%f`                 |
| **double**                                      | 2.3E-308 bis 1.7E+308 (15 Kommastellen)                  | 8 Byte        | `%lf`                |
| **long double**                                 | 3.4E-4932 bis 1.1E+4932 (19 Kommastellen)                | 16 Byte       | `%Lf`                |
| **bool**                                        | 0 bis 1                                                  | 1 Byte        | `%d`                 |

## Spezielle Verhaltensweisen

Bei den meisten dieser Datentypen gibt es spezielle Verhaltensweisen, die geklärt werden müssen.

### numerische Datentypen

#### Overflow
Wenn der Wert einer Variablen größer als ihr Typbereich ist, läuft sie über, d. h. der Wert wird auf den Mindestwert des Typs zurückgesetzt und von dort aus weiter erhöht. Das Gleiche gilt für den umgekehrten Fall. 

```C
int num = 3147483647;
printf("%d\n", num); // -1147483649
```

#### Falscher Datentyp

Wenn ein falscher Wert einem falschen Variablentyp zugewiesen wird, wird der Wert in den Typ der Variablen umgewandelt.

```C
int character = 'a';
short boolean = true;

printf("%c\n", character); // a
printf("%d\n", boolean); // 1
```

#### Floats und Integer
Wenn ein Float-Wert einer Integer-Variable zugewiesen wird, werden die Zahlen nach den Kommas ganz einfach abgeschnitten.

```C
int num2 = 12.6;
printf("%d\n", num2); // 12
```

#### Float und Double
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

### char

#### Zeichen

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

#### Strings

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

### Bool
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