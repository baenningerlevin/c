# Operatoren

<show-structure depth="2" />

In C gibt es drei verschiedene Arten von Operatoren und eine ganze Mathematikbibliothek.

## Mathematische Operatoren

In C gibt es fünf verschiedene mathematische Operatoren

```C
int num1 = 10;
int num2 = 5;

// Basic Operations
num1 = num1 + num2; // 15
num1 = num1 - num2; // 5
num1 = num1 * num2; // 50
num1 = num1 / num2; // 2

// Modulo
num1 = num1 % num2; // 0

// Assignment
num1 = num2; // 5
num1 += num2; // 10
num1 -= num2; // 5
num1 *= num2; // 50
num1 /= num2; // 10
num1 %= num2; // 0

// Increment and Decrement
num1++; // 11
num1--; // 9
```

## Vergleichsoperatoren

Mit den Vergleichsoperatoren kann man, wie es der Name sagt, zwei Werte miteinander vergleichen. Der Output ist ein Boolean.

```C
int num1 = 10, num2 = 5;

// Relational Operators
num1 == num2; // 0
num1 != num2; // 1
num1 > num2; // 1
num1 < num2; // 0
num1 >= num2; // 1
num1 <= num2; // 0
```

## Logische Operatoren

Logische Operatoren kennt man möglicherweise von der Mathematik, wo man zwei Aussageformen miteinander verbindet.

```C
int num1 = 5, num2 = 5, num3 = 10;

// Logical Operators
// Both arguments have to be correct
(num1 == num2) && (num3 > num2); // 1
(num1 == num2) && (num3 < num2); // 0

// One or both have to be true
(num1 == num2) || (num3 < num2); // 1
(num1 != num2) || (num3 < num2); // 0

// Reverts Boolean
!(num1 != num2); // 1
!(num1 == num2); // 0
```

<seealso>
    <category ref="weitere">
        <a href="https://www.programiz.com/c-programming/c-operators">Programiz - Operatoren</a>
    </category>
</seealso>