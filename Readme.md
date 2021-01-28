# Projekt TPM

## Opis projektu
Układ ma na celu zapalanie diod od zielonych do czerwonych, w zależności od amplitudy drgań. Im większa jest amplituda drgań tym więcej diod się zaświeci. Do budowy tego układu użyje:

* arduino uno

* Mikrofon

* 9 diod LED

* 9 rezystorów 220 ohm

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






