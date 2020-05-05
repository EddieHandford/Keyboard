
int rowOne    = 0;
int rowTwo    = 1;
int rowThree  = 2;
int rowFour   = 3;
int rowFive   = 4;


void setup() {

Serial.begin(9600);

pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
pinMode(14, OUTPUT);
pinMode(15, OUTPUT);
pinMode(16, OUTPUT);
pinMode(17, OUTPUT);
pinMode(20, OUTPUT);

pinMode(0, INPUT_PULLDOWN);
pinMode(1, INPUT_PULLDOWN);
pinMode(2, INPUT_PULLDOWN);
pinMode(3, INPUT_PULLDOWN);
pinMode(4, INPUT_PULLDOWN);

}

void loop() {
 
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(20, LOW);
  
  Serial.println(digitalRead(0));
  Serial.println(digitalRead(1));
  Serial.println(digitalRead(2));
  Serial.println(digitalRead(3));
  Serial.println(digitalRead(4));

  delay(1000);        // delay in between reads for stability

}
