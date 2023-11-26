# bool

<show-structure depth="2"/>

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