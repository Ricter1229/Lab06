int Frequency = 440;
int speakerPin = 5;
char *morse[] = {
  "01","1000","1010","100",
  "0","0010","110","0000",
  "00","0111","101","0100",
  "11","10","111","0110",
  "1101","010","000","1",
  "001","0001","11","1001",
  "1011","1100"
};
void setup() {
  Serial.begin(9600);
  pinMode(speakerPin,OUTPUT);
}
char chr;
char *ptr;
int index;
void loop() {
  if(Serial.available()) {
    chr = Serial.read();
    Serial.println(chr);
    if((chr>='A' && chr <= 'Z')||(chr>='a' && chr <= 'z')) {
      (chr>='A' && chr <= 'Z')?index=chr-'A':index=chr-'a';
      ptr=morse[index];
      while(*ptr!='\0') {
        if(*ptr=='0') {
          tone(speakerPin,Frequency,100);
          delay(100);
        }
        else if(*ptr=='1') {
          tone(speakerPin,Frequency,300);
          delay(100);
        }
        ptr++;
        delay(100);
      }
      delay(300);
    }
  }
}
