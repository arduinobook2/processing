//Processing Sketch to Read Value and Change Color on the Screen


//Import and initialize serial port library

import processing.serial.*;
Serial port;

//For holding value from pot
float brightness = 0;



void setup()
{
   //Window size
   size(500,500);
  
   //Set up serial
   port = new Serial(this, "COM7", 9600); 
   
   //Set up port to read until newline
   port.bufferUntil('\n');
   
   
}

void draw()
{
    //Updates the window
    background(0,0,brightness);
    
}

void serialEvent (Serial port)
{
    //Gets value
    brightness = float(port.readStringUntil('\n')); 
  
}
