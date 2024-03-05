# Structure

<show-structure depth="2"/>

In C, ein `struct` (oder `structure`) ist eine Kollektion von Variablen (können verschiedene Datentypen haben) unter einem einzigen Namen.

## Syntax

```C
struct structureName {
  dataType member1;
  dataType member2;
  ...
};
```

Beispielsweise:

```C
struct Person {
  char name[50];
  int citNo;
  float salary;
};
```

## Kreieren von struct Variablen

Wenn ein `struct` deklariert wird, weder Speicher noch RAM werden freigegeben. Um mit `structs` arbeiten zu können, müssen wir Variablen erstellen.

```C
struct Person {
  // code
};

int main() {
  struct Person person1, person2;
  
  return 0;
}
```

Folgend ist eine andere Möglichkeit, um `struct` Variablen zu erstellen:

```C
struct Person {
  // code
} person1, person2;
```

In beiden Fällen sind `person1` und `person2` `struct Person` Variablen.

## Daten lesen

Es gibt zwei arten von Operatoren, um Zugang zu Daten aus einer `structure` zu bekommen-

1. `.` - Member Operator
2. `->` - Structure pointer operator

Wenn man beispielsweise von `person2` den Namen wissen möchte, kann man das machen:

```C
person2.firstName
```

## Beispiel für structs

```C
#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "George Orwell");

  // assign values to other person1 variables
  person1.citNo = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
```

**Output**

```Shell
Name: George Orwell
Citizenship No.: 1984
Salary: 2500.00
```

## Das Keyword typedef

Das Keyword `typedef` wird benutzt, um ein Alias für Datentypen zu erstellen.

**Syntax Beispiel**:

```C
typedef struct Distance {
  int feet;
  float inch;
} distances;

int main() {
  distances d1, d2;
}
```

### Beispiel für typedef

```C
#include <stdio.h>
#include <string.h>

// struct with typedef person
typedef struct Person {
  char name[50];
  int citNo;
  float salary;
} person;

int main() {

  // create  Person variable
  person p1;

  // assign value to name of p1
  strcpy(p1.name, "George Orwell");

  // assign values to other p1 variables
  p1.citNo = 1984;
  p1.salary = 2500;

  // print struct variables
  printf("Name: %s\n", p1.name);
  printf("Citizenship No.: %d\n", p1.citNo);
  printf("Salary: %.2f", p1.salary);

  return 0;
}
```

**Output**:

```Shell
Name: George Owell
Citizenship No.: 1984
Salary: 2500.00
```

<seealso>
    <category ref="weitere">
        <a href="https://www.programiz.com/c-programming/c-structures">Programiz - Struct</a>
        <a href="https://www.programiz.com/c-programming/c-structures-pointers">Programiz - Structs und Pointers</a>
        <a href="https://www.programiz.com/c-programming/c-structure-function">Programiz - Structs und Funktionen</a>
    </category>
</seealso>