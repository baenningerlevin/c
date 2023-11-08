# User-defined functions

Um sich eine Funktion besser vorstellen zu können, fangen wir mit einem Beispiel an:

```C
#include <stdio.h>
int addNumbers(int a, int b);         // function prototype

int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1, n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}
```

Im Folgenden schauen wir uns die genaue Struktur von den einzelnen Bestandteilen einer Funktion an. 

## Function prototype

Ein Funktionsprototyp ist einfach die Deklaration einer Variable, die Name, Parameter und den `return type` angibt.

Ein Funktionsprototyp gibt dem Compiler die Information, dass die Funktion möglicherweise später genutzt wird.

### Syntax des functions prototypes

```C
returnType functionName(type1 argument1, type2 argument2, ...);
```

Man braucht den Funktionsprototypen nicht, wenn die Funktion vor der `main()`-Funktion definiert wird.

## Function call

Der Programmablauf wird bei Aufrufen einer Funktion unterbrochen und geht zur jeweiligen Funktion und führt diese aus.

### Syntax eines function calls

```C
functionName(argument1, argument2, ...);
```

## Function definition

Die Funktionsdefinition enthält den Code, welche die Funktion ausführen sollte.

### Syntax einer function definition

```C
returnType functionName(type1 argument1, type2 argument2, ...)
{
    //body of the function
}
```

## Parameter mitgeben

Wenn ein Parameter mitgegeben wird, kann man mit diesen in der Funktion arbeiten. Wichtig ist, dass die Typen übereinstimmen müssen. 

Eine Funktion kann auch ohne Parameter aufgerufen werden.

## Return

Das `return`-Statement beendet die Funktion und gibt ein Wert zurück. 

### Syntax eines return statements

```C
return (expression);
```

Zum Beispiel:

```C
return a;
return (a+b);
```

Der Wert des `return statements` muss mit dem Typen der Funktion übereinstimmen.

<seealso>
    <category ref="useful">
        <a href="https://www.programiz.com/c-programming/c-functions">C Functions</a>
    </category>
</seealso>