#define LED_BUILTIN 2

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(115200);
  Serial.println("ESP32 initialization completed!");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  Serial.printf("Running time : %.1f s\n", millis() / 1000.0f);
}
