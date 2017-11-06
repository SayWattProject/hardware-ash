char incoming_char=0;

void setup() {               
  // initialize the digital pin as an output.
  // Pin 13 connects to PS tail port
  // Grounds will also be connected
  Serial.begin(9600);
  pinMode(13, OUTPUT);   
  Serial.println("Setup has ended, entering loop()");
}

void loop() {
  if (Serial.available())
  {
  
  
    incoming_char=Serial.read(); // Get the incoming char
    if(incoming_char == '1')
    {
      digitalWrite(13, HIGH); // Turn the Powertail on
      Serial.println("Switch ON");
    }

    if(incoming_char == '0')
    {
      digitalWrite(13, LOW);    // turn the Powertail off
      Serial.println("Switch OFF");
    }
  }
}

