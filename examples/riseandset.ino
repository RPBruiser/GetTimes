#include GetTimes.h

void setup {
  GetTimes();
}
void loop {
  Serial.println("Sunrise is at: " + convertToTime(sunrise()));
  Serial.println("Sunset is at: " + convertToTime(sunset()));
  delay(79200000);
}
 