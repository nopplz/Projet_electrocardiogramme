#include <Arduino.h>

int capteur =0;
int led = 12;
int sortie;
int seuil;
int compteur;
int BPM;

int comptage(int a, int b){
  b=12 * a;
  Serial.println(b);
  a=0;
} 

void setup(){
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sortie =analogRead(capteur);
  if (sortie>seuil){
    digitalWrite(12,LOW); 
  }
  else{
    digitalWrite(12,HIGH);
    compteur++;
  }
  comptage(compteur,BPM);
  delay(1000);
}
