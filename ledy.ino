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

int val =0; 
const int czas_probkowania = 10; //czas próbkowania
unsigned long millisCurrent; 
unsigned long millisLast = 0; 
unsigned long millisElapsed = 0; 

int sampleBufferValue = 0; 

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

void loop (){
  val =digitalRead(mikroPin); //odczytanie wartości z czujnika dźwięku przechowywaną w zmiennej
  millisCurrent = millis(); //obecny czas
  millisElapsed = millisCurrent - millisLast; //czas jaki upłynał

  if (val == HIGH) // stan wysoki (1)
  {
    sampleBufferValue++;
  }

  if (millisElapsed > czas_probkowania) 
  {
    Serial.println(sampleBufferValue);
    sampleBufferValue = 0;
    millisLast = millisCurrent;
  }
   //1       
   if (sampleBufferValue >= 10) 
  {
    digitalWrite(ledPin1, HIGH); 
  }
  else 
  {
    digitalWrite(ledPin1, LOW);
  }

  //2
   if (sampleBufferValue >= 25) 
  {
    digitalWrite(ledPin2, HIGH);
  }
  else 
  {
    digitalWrite(ledPin2, LOW);
  }

   //3
   if (sampleBufferValue >= 30) 
  {
    digitalWrite(ledPin3, HIGH);
  }
  else 
  {
    digitalWrite(ledPin3, LOW);
  }

  //4
  if (sampleBufferValue >= 45) 
  {
    digitalWrite(ledPin4, HIGH);
  }
  else 
  {
    digitalWrite(ledPin4, LOW);
  }
 //5
 if (sampleBufferValue >= 60) 
  {
    digitalWrite(ledPin5, HIGH);
  }
  else 
  {
    digitalWrite(ledPin5, LOW);
  }
  //6
   if (sampleBufferValue >= 70) 
  {
    digitalWrite(ledPin6, HIGH);
  }
  else 
  {
    digitalWrite(ledPin6, LOW);
  }
  //7
   if (sampleBufferValue >= 80) 
  {
    digitalWrite(ledPin7, HIGH);
  }
  else 
  {
    digitalWrite(ledPin7, LOW);
  }
  //8
   if (sampleBufferValue >= 90) 
  {
    digitalWrite(ledPin8, HIGH);
  }
  else 
  {
    digitalWrite(ledPin8, LOW);
  }
  //9
   if (sampleBufferValue >= 100) 
  {
    digitalWrite(ledPin9, HIGH);
  }
  else 
  {
    digitalWrite(ledPin9, LOW);
  }
}
