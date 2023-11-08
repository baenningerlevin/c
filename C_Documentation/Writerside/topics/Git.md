# Git

## Git konfigurieren

Zuerst müssen wir einen Usernamen und eine E-Mail konfigurieren. Das geht mit folgenden Befehlen:

```Shell
git config --global user.name "Levin Baenninger"
git config --global user.email "levin.baenninger@buhlergroup.com"
```

Zudem müssen wir unseren `default branch` ändern:

```Shell
git config --global init.default branch main
```

## Selbsthilfe
Wenn man über einen Befehl stolpert, den man nicht kennt, kann man jederzeit mit dem `-h` Flag die Hilfe zu dem Befehl aufrufen.

```Shell
git config -h
```

Wenn man eine detaillierte Suche möchte, dann kann man noch `help` vor den Command setzen. Dieser Command öffnet ein Handbuch im Browser (Lokal):

```Shell
git help config
```

## Standardbefehle

### Repository initialisieren

Um ein Repository zu initialisieren, geht man mit dem Command `cd` in das gewünschte Verzeichnis und gibt dort folgendes ein:

```Shell
git init
```

Dieser Befehl erstellt einen unsichtbaren Ordner namens `.git`. Dieser beinhaltet alle nötigen Repository-Dateien.

### Status des Repositories abrufen

Der Befehl `git status` zeigt uns den Branch an, auf welchem wir uns befinden, die Commits und alle tracked und untracked files.

```Shell
git status
```

### Files tracken und untracken

Untracked Files bedeutet, dass Git die Dateien ignoriert, wenn ein Commit gemacht wird. Tracked Files bedeutet, dass Git weiss, welche Änderungen vorgenommen wurden und kann somit auch auf eine vorherige Version zurückkehren.

Um eine Datei zu tracken, benutzt man folgenden Command:

```Shell
git add <file>
```

Man kann auch einen `.` benutzen, um alle Dateien zu tracken.

```Shell
git add .
```

Wenn man Dateien nicht mehr tracken möchte, benutzt man folgenden Befehl bei neuen Dateien:

```Shell
git rm --cached <file>
```

Wenn man Dateien nicht mehr tracken möchte, benutzt man folgenden Befehl bei geänderten Dateien:

```Shell
git restore --staged <file>
```

### Dateien ignorieren mit .gitignore

Um Dateien von Git ignorieren zu lassen, können wir eine neue Datei namens `.gitignore` erstellen. Diese Datei erlaubt es uns Dateien, Ordner oder sogar ganze Suffixe zu ignorieren. Diese Datei bearbeitet man mit einem beliebigen Texteditor, bspw. Visual Studio Code. 

Um bspw. alle Text-Dateien zu ignorieren kann man folgendes schreiben:

```Text
# ignore all .txt files
*.txt
```

Für alle Möglichkeiten: [.gitignore](https://github.com/github/gitignore);

Man benutzt es vor allem für automatische generierte Dateien, wie `.log` Dateien.

### Commit

Commit bedeutet, dass man einen Snapshot vom Repository macht, also, wie alle Dateien in jenem Moment aussehen. Zudem kann man zu jedem Commit zurückspringen. Nachdem alle Dateien in der `Staging Area` sind, kann man diese so `committen`:

```Shell
git commit -m <message>
```

### Unterschiede zwischen letztem Commit visualisieren
Wenn wir eine Datei modifiziert haben und wir sehen möchten, was sich alles geändert hat können wir folgenden Command benutzen:

```Shell
git diff
```

### Dateien löschen

Um eine Datei in Git zu löschen, verwendet man folgenden Command:

```Shell
git rm <file>
```

### Gelöschte Dateien wiederherstellen

Um gelöschte Dateien wiederherzustellen, macht man Folgendes:

```Shell
git restore <file>
```

### Dateien umbenennen

Um Dateien umzubenennen, benutzt man folgenden Command:

```Shell
git mv <old filename> <new filename>
```

<!-- TODO - Make progress in Youtube Tutorial -->

<seealso>
    <category ref="useful">
        <a href="https://git-scm.com/">Git</a>
        <a href="https://www.youtube.com/watch?v=tRZGeaHPoaw">Git Tutorial</a>
    </category>
</seealso>