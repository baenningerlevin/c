# Der Datentyp struct

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
