void setup() {
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
digitalWrite(8, LOW); 
digitalWrite(9, HIGH); //Clockwise
digitalWrite(10, LOW); 
digitalWrite(11, HIGH); //Counter clockwise
}
