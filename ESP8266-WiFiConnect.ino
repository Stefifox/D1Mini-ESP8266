#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>

const char* ssid = "YOURWIFINAME";             //
const char* password = "YOURWIFIPASSWORD";     //Modify this and previus line

void setup() {
  Serial.begin(115200);
  delay(10);
 
  // Connect to WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
 
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  
  // Print the IP address
  Serial.print("Arduino IP: ");
  Serial.println(WiFi.localIP());
}

void loop(){
    //Write your code here
}