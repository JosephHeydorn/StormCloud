
long randnumber; 

//All Flashing LED's
int blinkLED2 = 2;
int blinkLED4 = 4;
int blinkLED7 = 7;
int blinkLED8 = 8;
int blinkLED12 = 12;
int blinkLED13 = 13; 
//All Dim LED's
int dimLED3 = 3;
int dimLED5 = 5;
int dimLED6 = 6; 
int dimLED9 = 9;
int dimLED10 = 10;
int dimLED11 = 11;

int brightness = 5; 



void setup() {
pinMode(blinkLED2,OUTPUT);
pinMode(blinkLED4,OUTPUT);
pinMode(blinkLED7,OUTPUT);
pinMode(blinkLED8,OUTPUT);
pinMode(blinkLED12,OUTPUT);
pinMode(blinkLED13,OUTPUT);
pinMode(dimLED3,OUTPUT); 
pinMode(dimLED5,OUTPUT); 
pinMode(dimLED6,OUTPUT); 
pinMode(dimLED9,OUTPUT); 
pinMode(dimLED10,OUTPUT); 
pinMode(dimLED11,OUTPUT); 
randomSeed(analogRead(0));
}
void loop() {
analogWrite(dimLED3,brightness);
analogWrite(dimLED5,brightness);
analogWrite(dimLED6,brightness);
analogWrite(dimLED9,brightness);
analogWrite(dimLED10,brightness);
analogWrite(dimLED11,brightness);

randnumber = random(10000);
digitalWrite(blinkLED2,1);
delay(5);
digitalWrite(blinkLED2,0);
delay(100); //Adds double flash for cooler effect.a
digitalWrite(blinkLED2,1);
delay(5);
digitalWrite(blinkLED2,0);
delay(randnumber);
randnumber = random(10000);
digitalWrite(blinkLED7,1);
delay(5);
digitalWrite(blinkLED7,0);
delay(randnumber);
randnumber = random(10000);
digitalWrite(blinkLED12,1);
delay(5);
digitalWrite(blinkLED12,0);
delay(100);
digitalWrite(blinkLED12,1);
delay(5);
digitalWrite(blinkLED12,0);
delay(100);
digitalWrite(blinkLED12,1);
delay(5);
digitalWrite(blinkLED12,0);
delay(randnumber);
randnumber = random(10000);
digitalWrite(blinkLED4,1);
delay(5);
digitalWrite(blinkLED4,0);
delay(randnumber);
randnumber = random(10000);
digitalWrite(blinkLED8,1);
delay(5);
digitalWrite(blinkLED8,0);
delay(randnumber);
}