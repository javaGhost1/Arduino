int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int bright = 255;
int medium = 125;
int dim = 5;
int wait = 50;
int longWait =1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //pin 8
  analogWrite(pin8,dim);
  analogWrite(pin9,dim);
  delay(wait);

  analogWrite(pin8,medium);
  analogWrite(pin9,medium);
  delay(wait);
  analogWrite(pin8,bright);
  analogWrite(pin9,bright);
  delay(wait);
  analogWrite(pin8,dim);
  analogWrite(pin9,dim);
    analogWrite(pin8,dim);
  analogWrite(pin9,dim);
  delay(wait);

  analogWrite(pin8,medium);
  analogWrite(pin9,medium);
  delay(wait);
  analogWrite(pin8,bright);
  analogWrite(pin9,bright);
  delay(wait);
  analogWrite(pin8,dim);
  analogWrite(pin9,dim);
  // delay(longWait);

  //pin10 and 11
  analogWrite(pin10,dim);
  analogWrite(pin11,dim);
  delay(wait);
  analogWrite(pin10,medium);
  analogWrite(pin11,medium);
  delay(wait);
  
  analogWrite(pin10,bright);
  analogWrite(pin11,bright);
  delay(wait);
  analogWrite(pin10,dim);
  analogWrite(pin11,dim);
    analogWrite(pin10,dim);
  analogWrite(pin11,dim);
  delay(wait);
  analogWrite(pin10,medium);
  analogWrite(pin11,medium);
  delay(wait);
  
  analogWrite(pin10,bright);
  analogWrite(pin11,bright);
  delay(wait);
  analogWrite(pin10,dim);
  analogWrite(pin11,dim);
  // delay(longWait);
}
