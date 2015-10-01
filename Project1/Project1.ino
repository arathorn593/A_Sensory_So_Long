
int reportDelay = 20; //(ms)
int pin1 = 4;
int minVal1 = 230;
int maxVal1 = 670;
int total1 = 0;
int numSamples = 0;
void setup() {
  Serial.begin(9600);

}

void loop() {
  int val1 = analogRead(pin1);
  float scaledVal1 = float(val1 - minVal1) / float(maxVal1 - minVal1);
  if(scaledVal1 > 1.0) {
    scaledVal1 = 1.0;
  } else if (scaledVal1 < 0.0) {
    scaledVal1 = 0.0;
  }
  Serial.println(int(scaledVal1 * 100));
}
