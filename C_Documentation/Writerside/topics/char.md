# char

## Zeichen

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

## Strings

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