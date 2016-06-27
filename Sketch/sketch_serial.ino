

void setup() {
	const int analogInPin = A0;
	int sensorValue = 0;
	Serial.begin(9600);
}

void loop() {
	sensorValue = analogRead(analogInPin);
	Serial.print("%");
	Serial.print(sensorValue);
	Serial.println("%");
}


