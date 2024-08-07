/*------------------------------------------------------------------------------------------------------------------------
LITT BASIC
  Kjekke hurtigtasta:
    * Komentere ut/inn - [Ctrl] + [*]
    * Søk i dokumentet - [Ctrl] + [F]
    * Kompilere - [Ctrl] + [R]
    * Last opp - [Ctrl] + [U]
    * Åpne seriel monitor - [Ctrl] + [Shift] + [M]
    * Fjerne innrykk - [Shift] + [Tab]

  Åpne Seriel Plotter: 
    Gå til Tools -> Serial Plotter 

  Nokre Boolske operasjonar egna for if-setningar:
    Boolske operasjonar returnerer True eller False.
    - condition_1 == condition_2 , True visst to variablar av same type er like
    - condition_1 != condition_2 , True visst to variablar av same type er ulike
    - condition_1 > condition_2  , True visst 1 er større enn 2 (to variablar av same type)
    - condition_1 <= condition_2 , True visst 1 er mindre eller lik 2 (to variablar av same type)
    - condition_1 && condition_2 , True visst begge boolske variablane er True
    - condition_1 || condition_2 , True visst ein av dei boolske variablane er True
    - condition_1 ^= condition_2 , Eksklusiv eller (XOR). True viss kun ein av condition True, men ikkje begge.
    - !condition_1               , True visst condition_1 er False (invertert verdi)

    * Toggle av ein boolsk variabel *
    - condition_1 = !condition_1 , Dette blir kalla ein toggle. Det bytter verdien av condition_1 mellom True og False.
  
  Initialiser variablar:
    Variablar kan initialiserast med eller utan verdi. Å initialisere ein variabel med ein verdi betyr at du 
    gir han ein startverdi med ein gong han blir oppretta.
      Syntaks:
        [datatype] [variabelnavn] = [verdi];
      Eksempel:
        bool condition_1 = true; // Initialiserer condition_1 med verdi true
        bool condition_2;        // Initialiserer condition_2 utan å gi han ein startverdi (standardverdi vil vere false)
------------------------------------------------------------------------------------------------------------------------*/
//Last inn bibliotek
#include "Car.h"

/*
Opprett eit Car-objekt:
Car car("networkName", "networkPassword");

Dette trenger dokke ikkje å forstå, men her er ein rask gjenomgang av objekter.
Når du arbeider med objekt i programmering, bruker du 'dot' (.)-operatoren for å få tilgang til medlemmar 
(funksjonar og variablar) av objektet.

Syntaks for å opprette eit objekt:
  [Klassenavn] [objektnavn]([konstruktørparametarar]);
Eksempel:
  Person frank(20, "Trondheim");

I dette eksempelet opprettar vi eit objekt av klassen Person med namnet 'frank'. 
Konstruktøren tar to parameter: ein int som er alderen til frank og ein streng som er byen han bur i.
For å få tilgang til medlemmar av objektet bruker vi 'dot' (.)-operatoren. Dette lar oss kalle 
funksjonar eller få tilgang til variablar som høyrer til objektet.

Eksempel på bruk av 'dot'-operatoren:
  frank.alder; // retunerer alderen til frank 
  frank.by; // retunerer byen frank bur i
*/
Car car("NTNU-IOT", "");


/*
Initialiser variablar her
  Eksempel:
  - Set minimum hastigheit for hjula. Ein for låg verdi kan føre til udefinert oppførsel eller stoppe bilen.
    int minSpeed = 30;

  - Initialiser eit flagg. Flag brukast ofte til å bestemme om ein betingelse er oppfylt.
    bool flag = false;
*/


// Generell setup: initialisering av seriel kommunikasjon og kalibrering av bil
void setup() {
  Serial.begin(115200);  // Start seriel kommunikasjon med 115200 baud rate (antall bits per sekund)
  car.initCar();         // Initialiserer bil-objektet

  /*Kalibrering av sensora skjer her, les "Calibrating" seksjonen i ReadMe fila*/
}


void loop() {
  // Kode som kjøres kontinuerleg
  /*
  Først følg oppgåve teksten, så kan ein følge ein slik struktur:
   1. Logikk som bestemmer om ein skal kjøre manuelt eller automatisk, 
      gjerne aktivert av ein knapp. Les "Buttons and Driving"
   2. Skaff nødvendig sensordata, les "Sensor data" i ReadMe
   3. Send data til graf / scope, les "Graphing data" i ReadME
   4. Finn ein måte å regulere bilen ved bruk av sensordataen
      (Anbefaler å ta ein titt på PID-eksempel for linjefølging)

    VISST EIN FÅR TID!
   - Logikk for å handtere feil, som tap av linja, f.eks.:
      - Ein sekvens som hugser kva side av linja bilen var på sist,
        og utifrå det gjer bilen ein bestemt manøver for å finne linja
      - Random kjøring med begrensning i eit desperat forsøk på å finne linja
  */
}

void w(bool button) {
  if (button == DOWN) {
    car.drive(50, 50);
  }
  if (button == UP) {
    car.drive(0, 0);
  }
}

void a(bool button) {  //Sving venstre
  // button a
}

void s(bool button) {
  // button s
}

void d(bool button) {
  // button d
}

void e(bool button) {
  // button e
}

void q(bool button) {
  // button q
}

void triangle(bool button) {
  // button triangle
}

void circle(bool button) {
  // button circle
}

void square(bool button) {
  // button square
}
