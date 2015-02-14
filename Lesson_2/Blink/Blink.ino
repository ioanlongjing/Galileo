int led = 13;

void setup(void)
{
    pinMode(led, OUTPUT);     	
}


void loop(void)
{
    digitalWrite(led, HIGH);   
    delay(100);               
    digitalWrite(led, LOW);    
    delay(100);            
}
