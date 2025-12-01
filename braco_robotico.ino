#include <VarSpeedServo.h>

#define ANGULO_INICIAL_MOTOR 90
int auxBase = ANGULO_INICIAL_MOTOR;
// --- Mapeamento dos joysticks ---
#define joystick1X A0
#define joystick1Y A1
//segundo joystick
#define joystick2X A2
#define joystick2Y A3

// --- Mapeamento dos Servos ---
VarSpeedServo MB1;
VarSpeedServo MB2;
VarSpeedServo Garra;
VarSpeedServo motorBase;


void setup() {
  setPinMotors();
  inicializaAnguloDosMotores();
  mapearjoysticksComoInput();
}

void loop() 
{
  moverBase();
  moverMB1();
  moverMB2();
  moverGarra();
  delay(100);
}

void setPinMotors()
{
  motorBase.attach(5);
  MB1.attach(9);
  MB2.attach(10);
  Garra.attach(11);
}

void inicializaAnguloDosMotores()
{
  motorBase.write(ANGULO_INICIAL_MOTOR);
  MB1.write(ANGULO_INICIAL_MOTOR);
  MB2.write(ANGULO_INICIAL_MOTOR);
  Garra.write(ANGULO_INICIAL_MOTOR);
}

void mapearjoysticksComoInput() 
{
  pinMode(joystick1X, INPUT);
  pinMode(joystick1Y, INPUT);
  pinMode(joystick2X, INPUT);
  pinMode(joystick2Y, INPUT);
}

void moverBase()
{
  int posY = analogRead(joystick1Y);
  posY = map(posY, 0, 1023, 0, 180);
  if(posY > 100){
    auxBase+=10;
    motorBase.write(auxBase,50);
  }else if(posY < 80){
    auxBase-=10;
    motorBase.write(auxBase,50);   
  }
}

void moverMB1()
{
  int posX = analogRead(joystick1X);
  posX = map(posX, 0, 1023, 35, 180);
  MB1.write(posX, 60);
}

void moverMB2()
{
  int posX = analogRead(joystick2X);
  posX = map(posX, 0, 1023, 180, 100);

  MB2.write(posX, 60);
}

void moverGarra()
{
  int posY = analogRead(joystick2Y);
  posY = map(posY, 0, 1023, 60, 180);
  Garra.write(posY, 60);
}

