#include <Arduino.h>

int capteur =0;
int sortie;

void setup(){

}

void loop(){
  sortie =analogRead(capteur);
  printf(sortie);
  delay(1000);
}