## Logboek Nolan

# Week 10

### Maandag

- **1e les uur**
  Uitleg over renderen van sprites, vertices, uv maps en beetje normals maps. Ook uitleg over CPU en GPU gekregen en de volgorde van hoe alles wordt aangeroepen en dan zijn we nog niet eens bij matrices wtf.
  <br>

- **2e les uur**
  Movement toegevoegd met een normaliser die werkt op mijn hoop en dromen.
  <br>

- **3e les uur**
  Probleem met UIElement crash wanneer children van scene leeg is ookal heb ik geprobeerd preventieve maatregelingen te nemen.

---

### Donderdag

- **1e les uur**
  Hulp gekregen van Maik om UIElement anders te ontwerpen zodat het geimplementeerd kan worden in mijn framework in plaats van mijn game.

  - **2e les uur**
    Begonnen met UIElement refactoren.

  - **3e les uur**
    UIElement werkt zoals bedacht.

<div style="page-break-after: always;"></div>

### Maandag

- **1e les uur**
  Resource management en class types uitleg gekregen.
  <br>

- **2e les uur**
  Uitleg over structs gekregen en children lijst in Entity gemaakt die aangeroepen kan worden door een functie.

  ```cpp
  const std::vector<Entity *> &children() { return _children; };
  std::vector<Entity *> _children;
  ```

---

### Woensdag

- **1e les uur**
  AddChild functie toegevoegd aan Entity en fullscreen van config.h gefixt.
  <br>

- **2e les uur**
  Menno uitleg gegeven over klassendiagram maken.
  Werkende entity gekregen in een lose scene die specifiek voor Maghar is, ik kan nu aan een spel beginnen.

---

### Donderdag

- **1e les uur**
  Config file gefixt, veel comments toe gevoed en compatability toegevoegd voor de GCC 13.2.0 compiler voor meer snelheid in compilen.
  <br>

- **2e les uur**
  Blob werkende gekregen met een snelheid die schaalt met de grootte.
  <br>

- **3e les uur**
  Wip UIElement werkend gekregen.

---

### Vrijdag

- **1e les uur**
UIElement meer modulair gemaakt en drawFPS aangepast voor eigen gebruik.
<div style="page-break-after: always;"></div>

# Week 9

### Maandag

- **Geen school:**
  Bezig geweest met CV klaarmaken en stage plekken gevonden.

---

### Woensdag

- **1e les uur:**
  Uitleg over databases gekregen en een begin gemaakt met een werkend programma, eindelijk.
  <br>

- **2e les uur:**
  Ik probeer mijn programma te laten runnen op basis van klassen die geinspireerd zijn door rowan maar krijg hele rare errors die niemand lijkt te kunnen fixen.
  Ik krijg deze error 4 keer ondanks dat alles goed inbegrepen lijkt te zijn:

  > "syntax error: identifier 'Scene' [C:\Users\nolan\OneDrive - ROC Alfa-college\Sotware Development\mahgar\build\main.vcxproj]"

  Ook krijg ik deze error ookal gebruik ik geen static in mijn code:

  > "illegal reference to non-static member 'Core::\_deltaTime' [C:\Users\nolan\OneDrive - ROC Alfa-college\Sotware Development\mahgar\build\main.vcxproj]"

  Deze problemen hebben een hoge prioriteit.
  <br>

- **3e les uur:**
  Probleem is opgelost; ik moest mijn headers in de CMakeList.txt stoppen. CMakeList.txt gaf geen errors en de errors die ik kreeg hadden naar mijn ervaring niet goed gehint naar het feit dat het probleem daar lag. Maar ik kan tenminste verder.
  > (De errors kwamen donderdag terug ondanks dat ik geen lijn code heb aangeraakt, hierdoor ben ik donderdag opnieuw begonnen.)

---

### Donderdag

- **1e les uur:**
  Projectplan gemaakt.
  <br>

- **2e les uur:**
  Alle klasses verwijderd en opnieuw gemaakt op basis van een klassendiagram.
  Bezig geweest met main, core en config.
  <br>

- **3e les uur:**
  Main, core en config werkend gekregen.
  Nu kan ik beginnen met mijn framework klasses.

<div style="page-break-after: always;"></div>

# Week 7

### Maandag

- **1e les uur:**
  Uitleg van Rik gehad en project klaar gezet.
  <br>

- **2e les uur:**
  Projectplan gemaakt en spel idee kort uitgewerkt.
  <br>

- **3e les uur:**
  Workspace klaargezet en kan nu mijn applicatie runnen.
  Alle lege geplande klasses zijn aangemaakt.

---

### Dinsdag

- **2e les uur:**
  Begonnen aan mijn entity class maar problemen met compiler errors.

---

### Woensdag

- **2e les uur:**
  [Tutorial](https://www.youtube.com/watch?v=VLJlTaFvHo4) gekeken om de basis van raylib te kennen.
  Niet ver gekomen i.v.m. school gerelateerde afleidingen.

---

### Donderdag

- **1e les uur:**
  [Tutorial](https://www.youtube.com/watch?v=VLJlTaFvHo4) afgekeken en basisscené opgezet met raylib.
  <br>

- **2e en 3e les uur:**
  Bezig geweest met project maar weet niet meer wat.

---

### Vrijdag

- **1e les uur:**
  Opnieuw begonnen met een werkende main en config file. Ook wat raylib functies door gelezen om toekomstige teleurstelling te voorkomen.
