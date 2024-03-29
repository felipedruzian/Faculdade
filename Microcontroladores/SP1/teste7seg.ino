#define pinA 3  //de cima
#define pinB 2  //cima direita
#define pinC 7  //baixo direita
#define pinD 8  //de baixo
#define pinE 9  //baixo esquerda
#define pinF 4  //cima esquerda
#define pinG 5  //meio
#define pinDP 6 //bolinha

void interrupt()
{
  turnOff();
  delay(1000);
  turnOn(); 
  delay(1000);
  turnOff();
  delay(1000);
  turnOn(); 
  delay(1000);
  turnOff();
  delay(1000);
}


void turnOn()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinDP, LOW);
}

void turnOff()
{
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, HIGH);
    digitalWrite(pinF, HIGH);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, HIGH);
}

void turnH()
{
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, HIGH);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinDP, HIGH);
}

void turnE()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, LOW);
    digitalWrite(pinDP, HIGH);
}

void turnL()
{
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    digitalWrite(pinC, HIGH);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, HIGH);
}

void turnO()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    digitalWrite(pinC, LOW);
    digitalWrite(pinD, LOW);
    digitalWrite(pinE, LOW);
    digitalWrite(pinF, LOW);
    digitalWrite(pinG, HIGH);
    digitalWrite(pinDP, HIGH);
}


void setup()
{
    pinMode(21, INPUT); //entrada int0 mega2560
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
    pinMode(pinC, OUTPUT);
    pinMode(pinD, OUTPUT);
    pinMode(pinE, OUTPUT);
    pinMode(pinF, OUTPUT);
    pinMode(pinG, OUTPUT);
    pinMode(pinDP, OUTPUT);

    attachInterrupt(digitalPinToInterrupt(21), interrupt, RISING);
}
//1->0 FALLING
//0->1 RISING
//1->0 CHANGE
//0->1 CHANGE

void loop()
{
    turnOn();
    delay(1000);
    turnH();
    delay(1000);  
    turnE();
    delay(1000);
    turnL();
    delay(2000);
    turnO();
    delay(1000);
}
