#define NOTE_STOP 0
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
#define NOTE_A6  1760
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_D7  2349
#define NOTE_E7  2637


int melody[]={
  NOTE_G6, NOTE_E6, NOTE_STOP, NOTE_G6, NOTE_D6, NOTE_STOP, NOTE_E6, NOTE_D6, NOTE_STOP,
  NOTE_C6, NOTE_STOP, NOTE_C6, NOTE_B5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_B5, NOTE_STOP, NOTE_C6, NOTE_D6, NOTE_E6,
  NOTE_STOP, NOTE_STOP, NOTE_G6, NOTE_E6, NOTE_STOP, NOTE_G6, NOTE_D7, NOTE_STOP, NOTE_C7, NOTE_B6,
  NOTE_STOP, NOTE_C7, NOTE_STOP, NOTE_C6, NOTE_B5, NOTE_A5, NOTE_B5, NOTE_C6, NOTE_B5, NOTE_STOP, NOTE_C6, NOTE_D6, NOTE_C6,
  NOTE_STOP, NOTE_G6, NOTE_A6, NOTE_B6, NOTE_C7, NOTE_B6, NOTE_C7, NOTE_B6, NOTE_A6, NOTE_G6, NOTE_A6, NOTE_STOP,
  NOTE_G6, NOTE_STOP, NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_C6,
  NOTE_D6, NOTE_E6, NOTE_STOP, NOTE_E6, NOTE_STOP, NOTE_G6, NOTE_A6, NOTE_B6, NOTE_C7, NOTE_B6,
  NOTE_C7, NOTE_D7, NOTE_C7, NOTE_D7, NOTE_E7, NOTE_STOP, NOTE_G6, NOTE_STOP, NOTE_C6, NOTE_D6,
  NOTE_E6, NOTE_F6, NOTE_E6, NOTE_F6, NOTE_E6, NOTE_D6, NOTE_C6, NOTE_B5, NOTE_C6, NOTE_STOP
};
double noteDurations[] = {
  0.5,0.5,1,0.5,0.5,1,0.5,0.5,0.5,
  2,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,
  2,1,0.5,0.5,1,0.5,0.5,1,0.5,0.5,
  0.5,2,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,2,
  0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,
  1.5,0.5,0.5,0.5,0.5,1,0.5,0.5,0.5,0.5,
  0.5,0.5,0.5,1.5,0.5,0.5,0.5,0.5,0.5,0.5,
  0.5,0.5,0.5,0.5,0.5,0.5,1.5,0.5,0.5,0.5,
  0.5,1,0.5,0.5,0.5,1,0.5,0.5,1.5,2
};

int speakerPin = 5;
int length = sizeof(melody); 
int tempo = 800;

void setup() {
  pinMode(speakerPin,OUTPUT);
}

void loop() {
  int i;
  for (i = 0; i < length; i++) {
      tone(speakerPin,melody[i],noteDurations[i]*tempo);
      delay(noteDurations[i]*tempo);
      noTone(speakerPin);
    }
    i=0;
}
