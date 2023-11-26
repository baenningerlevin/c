# Pointers

<show-structure depth="2" />

Pointers gibt es nur in C und C++ und können sehr nützlich sein. Zuerst müssen wir aber etwas über Adressen lernen.

## Adressen in C

Wenn man eine `var` in einem Programm hat, wird `&var` eine die Adresse im RAM zurückgeben.  
Diese Adressierung haben wir mehrmals in mit der `scanf()` Funktion benutzt.

```C
scanf("%d", &var);
```

Hier wird der Wert vom User in der Adresse der `var` Variable gespeichert. Ein weiteres Beispiel:

```C
#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p", &var);  
  return 0;
}
```

**Output**

```Shell
var: 5 
address of var: 2686778
```

> **Wichtig:** Du bekommst wahrscheinlich ein anderes Resultat zurück.
>
{ style="note" }

---

## C Pointers

Pointers (`pointer Variablen`) sind spezielle Variablen welche benutzt werden, um Adressen anstatt Werte zu speicherm.

### Pointer Syntax

So deklariert man `pointer`.

```C
int* ptr;
```

Hier haben wir einen Pointer `p` vom Typ `int`.

Man kann auch Pointer auch folgendermassen deklarieren.

```C
int *ptr1;
int * ptr2;
```

---

Ein weiteres Beispiel um pointer zu deklarieren.

```C
int* ptr1, num;
```

Hier deklarieren wir einen pointer `ptr1` und eine normale Variable `num`.

### Adressen an Pointer zuweisen

Lass uns ein Beispiel anschauen:

```C
int* ptrC, c;
c = 5;
ptrC = &c;
```

Hier, 5 wird der `c` Variable zugewiesen. Die Adresse von `c` wird dem Pointe `ptrC` zugewiesen.

### Wert des von Pointers gezeigten Objekts abrufen

Um den Wert von einem Pointer gezeigten Objekts zu bekommen, benutzt man den `*` Operator. Zum Beispiel:

```C
int* ptrC, c;
c = 5;
ptrC = &c;
printf("%d", *ptrC);   // Output: 5
```

Hier, die Adresse von `c` ist dem Pointer `ptrC` zugewiesen. Um den Wert, welcher in dieser Adresse ist zu bekommen,
haben wir `*ptrC` benutzt.

> **Info**: Im obigen Beispiel ist `pc` ein Zeiger und nicht `*pc`. Man sollte nicht versuchen, etwas wie `*pc = &c;` zu
> tun.
>
> Außerdem ist `*` der Dereferenzierungsoperator, der bei der Arbeit mit Pointer verwendet wird. Er operiert mit einem
> Pointer und gibt den Wert zurück, der in diesem Pointer gespeichert ist.
>
{style="note"}

### Ändern des von Pointern angezielten Wertes

Lass uns ein Beispiel anschauen:

```C
int* ptrC, c;
c = 5;
ptrC = &c;
c = 1
printf("%d", c);   // Output: 1
printf("%d", *ptrC);   // Output: 1
```

Wir haben die Adresse von `c` dem Pointer `ptrC` zugewiesen.

Dann haben wir den Wert von `c` auf 1 geändert. Dadurch, dass die Adresse von `ptrC` und `c` dieselbe ist, gibt
uns `*pc` 1.

Ein weiteres Beispiel:

```C
int* ptrC, c;
c = 5;
ptrC = &c;
*ptrC = 1
printf("%d", *ptrC);   // Output: 1
printf("%d", c);   // Output: 1
```

Wir haben die Adresse von `c` dem Pointer `ptrC` zugewiesen.

Dann haben wir den Wert von `ptrC` auf 1 geändert mit `*ptrC = 1;`. Dadurch, dass die Adresse von `ptrC` und `c`
dieselbe ist, gibt uns `c` 1.

### Zusammenfassung

Folgend ist ein Beispiel, welches alle Möglichkeiten zusammenfasst:

```C
#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}
```

**Output**

```Shell
Address of c: 2686784
Value of c: 22

Address of pointer pc: 2686784
Content of pointer pc: 22

Address of pointer pc: 2686784
Content of pointer pc: 11

Address of c: 2686784
Value of c: 2
```

<seealso style="links">
    <category ref="weitere">
        <a href="https://www.programiz.com/c-programming/c-pointers">Programiz - Pointers</a>
        <a href="https://www.programiz.com/c-programming/c-pointers-arrays">Programiz - Pointers und Arrays</a>
        <a href="https://www.programiz.com/c-programming/c-pointer-functions">Programiz - Pointers und Funktionen</a>
    </category> 
</seealso>