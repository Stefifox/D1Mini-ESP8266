#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>

const char* ssid = "YOURWIFINAME";             //
const char* password = "YOURWIFIPASSWORD";     //Modify this and previus line

void setup() {
  Serial.begin(115200);
  delay(10);

  // Connect to WiFi network
  Serial.println();
  Serial.print("Generating: ");
  Serial.println(ssid);

  WiFi.softAP(ssid, password);

  if (WiFi.softAP(ssid, password)) {
    Serial.println("Ready");

    // Print the IP address
    Serial.print("Arduino IP: ");
    Serial.println(WiFi.softAPIP());
  } else {
    Serial.println("Error");
  }
}

void loop() {
  //Write your code here
}
