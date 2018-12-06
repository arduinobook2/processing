/*****Sending POT value to the computer*****/

//Pot on analog pin 0
const int POT=A0; 

//For holding mapped pot value
int val; 

void setup()
{
   Serial.begin(9600);
}

void loop()
{
    //Read and map POT
    val = map(analogRead(POT), 0, 1023, 0, 255); 

    //Send value
    Serial.println(val);

    //Delay so we don't flood the computer
    delay(50);
    
}
