#define NOTE_STOP 0
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_D6  1175
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_G6  1568

#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4; 
char keys[ROWS][COLS] = {{'F', 'B', 'A', '0'}, {'E','3','2', '1'},
{'D', '6', '5', '4'}, {'C', '9', '8', '7'}};

byte rowPins[ROWS] = {8,9,10,11};

byte colPins[COLS] = {12,13,14,15};
Keypad keypad = Keypad( makeKeymap(keys), rowPins,colPins, ROWS, COLS );

int speakerPin = 5;
int tempo = 300;

void setup() {
  pinMode(speakerPin,OUTPUT);
}

int melody=0;

void loop() {
  char key=keypad.getKey();
  if(key != NO_KEY) {
    if(key == '0')
      melody = NOTE_F4;
    else if(key == '1')
      melody = NOTE_G4;
    else if(key == '4')
      melody = NOTE_A4;
    else if(key == '7')
      melody = NOTE_B4;
    else if(key == 'A')
      melody = NOTE_C5;
    else if(key == '2')
      melody = NOTE_D5;
    else if(key == '5')
      melody = NOTE_E5;
    else if(key == '8')
      melody = NOTE_F5;
    else if(key == 'B')
      melody = NOTE_G5;
    else if(key == '3')
      melody = NOTE_A5;
    else if(key == '6')
      melody = NOTE_B5;
    else if(key == '9')
      melody = NOTE_C6;
    else if(key == 'F')
      melody = NOTE_D6;
    else if(key == 'E')
      melody = NOTE_E6;
    else if(key == 'D')
      melody = NOTE_F6;
    else if(key == 'C')
      melody = NOTE_G6;
        
    tone(speakerPin,melody,300);
  }
}
