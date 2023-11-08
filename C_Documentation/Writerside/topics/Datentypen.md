# Datentypen

<show-structure depth="2" />

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

