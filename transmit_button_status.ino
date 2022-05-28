const int inputPin = 2;
const int outputPin = 13;

int buttonPushCounter;
int buttonState = 0;
int lastButtonState = 0;


void setup() {
  // put your setup code here, to run once:

  pinMode(inputPin, INPUT);
  pinMode(outputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(inputPin);
  if (buttonState == HIGH){

    Serial.println(1);
    
   } else {

    Serial.println(0);
    
   }
  delay(1);
  
}
