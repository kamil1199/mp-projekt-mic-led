int ledPin1=13;
int ledPin2=12;
int ledPin3=11;
int ledPin4=10;
int ledPin5=7;
int ledPin6=6;
int ledPin7=5;
int ledPin8=4;
int ledPin9=3;
int mikroPin=8;

int val =0;
const int SAMPLE_TIME = 10;
unsigned long millisCurrent;
unsigned long millisLast = 0;
unsigned long millisElapsed = 0;

int sampleBufferValue = 0;

void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  Serial.begin (9600);
}

void loop (){
  val =digitalRead(mikroPin);
  millisCurrent = millis();
  millisElapsed = millisCurrent - millisLast;

  if (val == HIGH)
  {
    sampleBufferValue++;
  }

  if (millisElapsed > SAMPLE_TIME)
  {
    Serial.println(sampleBufferValue);
    sampleBufferValue = 0;
    millisLast = millisCurrent;
  }
   //1       
   if (sampleBufferValue >= 10) {
    digitalWrite(ledPin1, HIGH); 
  }
  else {
    digitalWrite(ledPin1, LOW);
  }

  //2
   if (sampleBufferValue >= 25) {
    digitalWrite(ledPin2, HIGH);
  }
  else {
    digitalWrite(ledPin2, LOW);
  }

   //3
   if (sampleBufferValue >= 30) {
    digitalWrite(ledPin3, HIGH);
  }
  else {
    digitalWrite(ledPin3, LOW);
  }

  //4
  if (sampleBufferValue >= 45) {
    digitalWrite(ledPin4, HIGH);
  }
  else {
    digitalWrite(ledPin4, LOW);
  }
 //5
 if (sampleBufferValue >= 60) {
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin5, LOW);
  }
  //6
   if (sampleBufferValue >= 70) {
    digitalWrite(ledPin6, HIGH);
  }
  else {
    digitalWrite(ledPin6, LOW);
  }
  //7
   if (sampleBufferValue >= 80) {
    digitalWrite(ledPin7, HIGH);
  }
  else {
    digitalWrite(ledPin7, LOW);
  }
  //8
   if (sampleBufferValue >= 90) {
    digitalWrite(ledPin8, HIGH);
  }
  else {
    digitalWrite(ledPin8, LOW);
  }
  //9
   if (sampleBufferValue >= 100) {
    digitalWrite(ledPin9, HIGH);
  }
  else {
    digitalWrite(ledPin9, LOW);
  }
}
