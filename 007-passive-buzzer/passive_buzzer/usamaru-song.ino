//www.elegoo.com
//2016.12.08

#include "pitches.h"
 
// notes in the melody:
int melody[] = {
  NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 125;  // 500 miliseconds

// usamaru song
int usamaru[] = {
  // first part
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5,
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_F5,
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5,

  // second part
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5,
  NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_D5, NOTE_C5,
  
  // u-sa usamaru to
  NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5,
  NOTE_C5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_G5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5,

  // last part
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5,
  // usamaru hajimaruyo
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6,
};

int delays[] = {
  // first part
  250, 125, 250, 125, 250, 125, 250, 125, 250, 
  125, 250, 125, 5 * 125,
  250, 375, 125, 250, 250, 250, 250, 125, 250, 125,

  6 * 125,
  // second part
  250, 125, 250, 125, 250, 125, 250, 125, 250, 
  125, 250, 125, 5 * 125,
  125, 250, 125, 250, 125, 375, 375,

  12 * 125,
  // u-sa
  6*125, 6*125, 250, 125, 250, 125, 500,
  125, 375, 250, 125, 6*125, 250, 125, 250, 125,

  6 * 125,
  // last part
  250, 125, 250, 125, 250, 125, 250, 125, 250, 
  125, 250, 125, 6 * 125,

  250, 125, 250, 125, 250, 125, 250, 125, 250
};

 
void setup() {
 
}
 
void loop() {  
  int melodyLength = sizeof(usamaru) / sizeof(usamaru[0]);
  for (int thisNote = 0; thisNote < melodyLength; thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, usamaru[thisNote], duration);
     
    // Output the voice after several minutes
    delay(1.5 * delays[thisNote]);
  }
   
  // restart after two seconds 
  delay(2000);
}
