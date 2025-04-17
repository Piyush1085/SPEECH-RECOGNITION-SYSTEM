#include <SoftwareSerial.h>

// Define relay pins
#define RELAY1 8
#define RELAY2 9
SoftwareSerial mySerial(2, 3);

void setup() {
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  digitalWrite(RELAY1, HIGH); 
  digitalWrite(RELAY2, HIGH);

  Serial.begin(9600);
  mySerial.begin(9600);
  Serial.println("Initializing...");

  mySerial.println("Train commands like 'Turn on light', 'Turn off fan'");
}
void loop() {
  if (mySerial.available()) {
    String command = mySerial.readStringUntil('\n');
    Serial.println("Command: " + command);

    if (command == "Turn on light") {
      digitalWrite(RELAY1, LOW);
      Serial.println("Light is ON");
    } else if (command == "Turn off light") {
      digitalWrite(RELAY1, HIGH);
      Serial.println("Light is OFF");
    } else if (command == "Turn on fan") {
      digitalWrite(RELAY2, LOW);
      Serial.println("Fan is ON");
    } else if (command == "Turn off fan") {
      digitalWrite(RELAY2, HIGH);
      Serial.println("Fan is OFF");
    } else {
      Serial.println("Unknown Command");
    }
  }
}
