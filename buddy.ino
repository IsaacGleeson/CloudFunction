void myHandler(const char *event, const char *data);
int led = D7;

void setup() {
    pinMode(led, OUTPUT); //In built LED Output
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", myHandler);
    
    
}

void loop() 
{
    //Particle.publish("Isaacs_Phantastic_Photon", "wave", PUBLIC); 
    //delay(10000);
}

void myHandler(const char *event, const char *data){
    if (0 == strcmp(data, "wave"))
    {
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
        digitalWrite(led, HIGH);
        delay(1000);
        digitalWrite(led, LOW);
        delay(1000);
    }
    
        if (0 == strcmp(data, "pat"))
    {
        digitalWrite(led, HIGH);
        delay(250);
        digitalWrite(led, LOW);
        delay(250);
        digitalWrite(led, HIGH);
        delay(250);
        digitalWrite(led, LOW);
        delay(250);
        digitalWrite(led, HIGH);
        delay(250);
        digitalWrite(led, LOW);
        delay(250);
    }
}
