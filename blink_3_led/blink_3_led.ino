#define BUTTON_PIN 7
#define BUTTON_LED_1 8
#define BUTTON_LED_2 9
#define BUTTON_LED_3 10
int cout = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_LED_1, OUTPUT);
  pinMode(BUTTON_LED_2, OUTPUT);
  pinMode(BUTTON_LED_3, OUTPUT);

  pinMode(BUTTON_PIN,  INPUT);

  Serial.begin(9600);

}

void loop() {

 int sate = digitalRead(BUTTON_PIN);

 if(sate == 1){
  cout++;
  if (cout >2) {
  cout = 0;
  }
 }
Serial.println(cout);
 if (cout==0) {
    digitalWrite(BUTTON_LED_1,  HIGH);
    digitalWrite(BUTTON_LED_2,  LOW);
    digitalWrite(BUTTON_LED_3,  LOW);
 }
  if (cout==1) {
    digitalWrite(BUTTON_LED_2,  HIGH);
    digitalWrite(BUTTON_LED_3,  LOW);
    digitalWrite(BUTTON_LED_1,  LOW);
    
 }
 if (cout==2) {
    digitalWrite(BUTTON_LED_3,  HIGH);
    digitalWrite(BUTTON_LED_1,  LOW);
    digitalWrite(BUTTON_LED_2,  LOW);
 }
 delay(100);
}
