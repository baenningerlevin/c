# Input-Output (I/O)

<show-structure depth="2" />

## Output

Um in C etwas in die Konsole auszugeben, benutzt man hauptsächlich die `printf()`-Funktion.

```C
printf("Hallo Welt"); // Hallo Welt
```

### Variablen Ausgeben
Um Variablen auszugeben, benutzt man das Formatzeichen des Typs an der Stelle, wo man die Variable haben möchte:

```C
int num = 5;
printf("Number = %d", num) // Number = 5
```

## C Input

### scanf()

Um User-Input einzulesen, kann man die Funktion `scanf()` benutzen.

```C
int num;

printf("Enter an integer: ");
scanf("%d", &num);
printf("Number = %d", num); // Number = <User-Input>
```

Man kann auch mehrere Argumente gleichzeitig entgegennehmen.

```C
int a;
float b;

printf("First enter integer and than a float: ");
scanf("%d %f", &a, &b);

printf("You entered %d and %f", a, b
```

Zudem sollte nach jedem `scanf()` der Cache des `stdin` geleert werden. Das kann mit dem Befehl `fflush(stdin)` machen.

### fgets()

Wenn man Strings mit `scanf()` einlesen will, wird nur alles bis zum ersten Leerschlag eingelesen. Um dieses Problem zu beheben, gibt es eine andere Funktion:

```C
char input[100];

printf("Type full name: ");
fgets(input, 100, stdin);
printf("Input is: &s");
```

Die `100` ist dabei durch die Grösse des Strings zu ersetzen.