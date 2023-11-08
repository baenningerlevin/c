# Files

Eine Datei ist ein Container, in welchem Daten gespeichert werden können.

## Warum braucht es Files?
- Alle Daten werden gelöscht, wenn man das Programm beendet. Wenn man es in einem File speichert, sind trotzdem noch alle Daten vorhanden.
- Man kann Daten einlesen direkt von einem File.
- Einfache Übertragung zwischen zwei Computern.

## Arten von Dateien
Es gibt zwei Arten von Dateien, über die wir Bescheid wissen sollten:

1. Text files
2. Binary files

### 1. Textdateien

Textdateien sind normale **.txt** Files. Diese werden meisten mit einem simplen Texteditor, wie Notepad erstellt und bearbeitet.

Diese Dateien bestehen aus purem Text. Man kann den Inhalt ganz einfach editieren oder Löschen.

Sie brauchen ein minimum an Wartung, sind einfach lesbar, haben eine schlechte Sicherheit und brauchen viel Speicherplatz.

### 2. Binärdateien

Binärdateien sind meisten **.bin** Files.

Anstatt Daten als puren Text zu speichern, speichern diese Daten in Form von Binär (0 und 1).

Sie können mehr Daten speichern, sind schwer lesbar und haben eine höhere Sicherheit als Textdateien.

## File operations

In C kann man vier Operationen mit Files ausführen:

1. Ein neues File erstellen
2. Ein existierendes File zu öffnen
3. Ein File schliessen
4. Daten vom File lesen und Daten schreiben

## Mit Dateien arbeiten

Wenn man mit Files arbeitet, muss man einen Pointer vom Typen `file` erstellen. Diese Deklaration ist notwendig, um die Kommunikation
zwischen einer Datei und dem Programm zu ermöglichen.

```C
FILE *fptr;
```

## File öffnen

Um ein File zu öffnen, kann man die Funktion `fopen()` benutzen, diese ist in der `<stdio.h>` Header-Datei.

Das ist die Syntax, um ein File zu öffnen:

```C
fptr = fopen("fileopen", "mode");
```

Beispiele:

```C
fptr = fopen("E:\\cprogram\\newprogram.txt", "w");

fopen = fopen("E:\\cprogram\\oldprogram.txt", "rb");
```

- Wenn man annimmt, dass die Datei <path>newprogram.txt</path> nicht existiert, dann erstellt die erste Funktion eine neue Datei namens <path>newprogram.txt</path> und öffnet es für das Schreiben (Modus `w`).
- Wenn man annimmt, dass die Datei <path>oldprogram.txt</path> bereits existiert, dann öffnet die zweite Funktion die existierende Datei und öffnet sie für das Lesen im Binary Mode (Mouse `rb`).

### Öffnungsmodi in Standard I/O

| Modus | Bedeutung des Modus             | Während der Inexistenz des Files                                                              |
|-------|---------------------------------|-----------------------------------------------------------------------------------------------|
| `r`   | Öffnen für Lesen                | `fopen()` gibt NULL zurück.                                                                   |
| `w`   | Öffnen für Schreiben            | Wenn es existiert, überschreibt es den Inhalt.<br/>Wenn es nicht existiert, wird es erstellt. |
| `a`   | Öffnen für Hinzufügen           | Wenn es nicht existiert, wird es erstellt.                                                    |
| `r+`  | Öffnen für Lesen und Schreiben  | `fopen()` gibt NULL zurück.                                                                   |
| `w+`  | Öffnen für Lesen und Schreiben  | Wenn es existiert, überschreibt es den Inhalt.<br/>Wenn es nicht existiert, wird es erstellt. |
| `a+`  | Öffnen für Lesen und Hinzufügen | Wenn es nicht existiert, wird es erstellt.                                                    |

## File schliessen

Die Datei sollte nach dem Schreiben/Lesen geschlossen werden.

Das ist möglich mit der `fclose()` Funktion:

```C
fclose(fptr);
```

## Lesen und Schreiben

### Schreiben

Mit der Funktion `fprintf()` kann man Text schreiben.

```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}
```

### Lesen

Mit der Funktion `fscanf()`, kann man Daten einlesen.

```C
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   if ((fptr = fopen("C:\\program.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}
```

Andere Funktionen, wie `fgetchar()` und `fputc()` sind ähnlich zu verstehen.