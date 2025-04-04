int redLED8 = 8;
int redLED9 = 9;
int redLED10 = 10;
int redLED11 = 11;
int redLED12 = 12;
int pin13 = 13;
int dit = 50;
int dah = 10;
int longWait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin13, HIGH);  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);
  delay(longWait);

  //pins: 8 9 10 11
  //number 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 1: 0 0 0 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);

  delay(dit);
  
  delay(longWait);
    
  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  // //number 2: 0 0 1 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);

  delay(dit);
  delay(longWait);
 
  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);


  // //Number 3: 0  1 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);
 
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //nUMBER 4: 0 0 1 0 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED11,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 5: 0 0 1 0 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 6: 0 0 1 1 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 7: 0 0 1 1 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 8: 0 1 0 0 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 9: 0 1 0 0 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 10: 0 1 1 0 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 11: 0 1 0 1 1
  digitalWrite(redLED8, LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 12: 0 1 1 0 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 13: 0 1 1 0 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);

  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 14: 0 1 1 1 0
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 15: 0 1 1 1 1
  digitalWrite(redLED8,LOW);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 16: 1 0 0 0 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 17: 1 0 0 0 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 18: 1 0 0 1 0 
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number19: 1 0 0 1 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 20: 1 0 1 0 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 21: 1 0 1 0 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 22: 1 0 1 1 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 23: 1 0 1 1 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,LOW);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 24: 1 1 0 0 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 25: 1 1 0 0 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 26: 1 1 0 1 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 27: 1 1 0 1 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,LOW);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 28: 1 1 1 0 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  // number 29: 1 1 1 0 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,LOW);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 30: 1 1 1 1 0
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,LOW);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);

  //number 31: 1 1 1 1 1
  digitalWrite(redLED8,HIGH);
  digitalWrite(redLED9,HIGH);
  digitalWrite(redLED10,HIGH);
  digitalWrite(redLED11,HIGH);
  digitalWrite(redLED12,HIGH);
  delay(dit);
  
  delay(longWait);

  digitalWrite(pin13, HIGH);
  delay(dit);
  digitalWrite(pin13, LOW);

  delay(longWait);
}
