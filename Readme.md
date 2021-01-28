# Projekt TM

## Opis projektu
Układ ma na celu zapalanie diod od zielonych do czerwonych, w zależności od amplitudy sygnału. Im większa jest amplituda tym więcej diod się zaświeci. Do budowy tego układu użyto:

* Arduino Uno

* Czujnik dźwięku

* 9 diod LED

* 9 rezystorów 220 Ω

* przewody

* płytka stykowa

## Opis kodu
Zadeklarowane piny.
```cpp
int ledPin1=13; //zadeklarowny pin ledu 1
int ledPin2=12; //zadeklarowny pin ledu 2
int ledPin3=11; //zadeklarowny pin ledu 3
int ledPin4=10; //zadeklarowny pin ledu 4
int ledPin5=7; //zadeklarowny pin ledu 5
int ledPin6=6; //zadeklarowny pin ledu 6
int ledPin7=5; //zadeklarowny pin ledu 7
int ledPin8=4; //zadeklarowny pin ledu 8
int ledPin9=3; //zadeklarowny pin ledu 9
int mikroPin=8; //zadeklarowany pin czujnika dźwięku
```
Zadeklarowane zmienne.
```cpp
int wartosc = 0; 
const int czas_probkowania = 10; 
unsigned long biezacy_czas; 
unsigned long ostatni_czas = 0; 
unsigned long czas_upl = 0; 
int bufor_probkowania = 0;
```
Ustawiono tryby pinów jako wyjścia dla ledów.
```cpp
void setup(){
  pinMode(ledPin1, OUTPUT); //Tryb pinu = wyjście do ledu
  pinMode(ledPin2, OUTPUT); 
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin8, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  Serial.begin (9600); 
}
```
Zlicza ilość dźwięku próbkowanego w czasie, nastepnie wykreśla amplitudę w Serial Plotterze.
```cpp
void loop (){
  wartosc = digitalRead(mikroPin); //odczytanie wartości z czujnika dźwięku przechowywana w zmiennej
  biezacy_czas = millis(); //obecny czas
  czas_upl = biezacy_czas - ostatni_czas; //czas jaki upłynał

  if (wartosc == HIGH) // stan wysoki (1)
  {
    bufor_probkowania++;
  }

  if (czas_upl > czas_probkowania) 
  {
    Serial.println(bufor_probkowania);
    bufor_probkowania = 0;
    ostatni_czas = biezacy_czas;
  }
  ```
  Wraz ze zmianą amplitudy zapala się więcej ledów.
  ```cpp
   //1       
   if (bufor_probkowania >= 10) 
  {
    digitalWrite(ledPin1, HIGH); 
  }
  else 
  {
    digitalWrite(ledPin1, LOW);
  }

  //2
   if (bufor_probkowania >= 25) 
  {
    digitalWrite(ledPin2, HIGH);
  }
  else 
  {
    digitalWrite(ledPin2, LOW);
  }

   //3
   if (bufor_probkowania >= 30) 
  {
    digitalWrite(ledPin3, HIGH);
  }
  else 
  {
    digitalWrite(ledPin3, LOW);
  }

  //4
  if (bufor_probkowania >= 45) 
  {
    digitalWrite(ledPin4, HIGH);
  }
  else 
  {
    digitalWrite(ledPin4, LOW);
  }
 //5
 if (bufor_probkowania >= 60) 
  {
    digitalWrite(ledPin5, HIGH);
  }
  else 
  {
    digitalWrite(ledPin5, LOW);
  }
  //6
   if (bufor_probkowania >= 70) 
  {
    digitalWrite(ledPin6, HIGH);
  }
  else 
  {
    digitalWrite(ledPin6, LOW);
  }
  //7
   if (bufor_probkowania >= 80) 
  {
    digitalWrite(ledPin7, HIGH);
  }
  else 
  {
    digitalWrite(ledPin7, LOW);
  }
  //8
   if (bufor_probkowania >= 90) 
  {
    digitalWrite(ledPin8, HIGH);
  }
  else 
  {
    digitalWrite(ledPin8, LOW);
  }
  //9
   if (bufor_probkowania >= 100) 
  {
    digitalWrite(ledPin9, HIGH);
  }
  else 
  {
    digitalWrite(ledPin9, LOW);
  }
}
```
## Zdjęcia układu

![zdjecie_ukladu](zdjecie_ukladu.jpg)




