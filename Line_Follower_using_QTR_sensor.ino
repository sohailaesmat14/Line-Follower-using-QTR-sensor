/* 
 * File: Line_Follower_using_QTR_sensor.ino 
 * Author: Sohaila Esmat
 *
 * Created on  ‎October ‎9, ‎2022
 */

#include <QTRSensors.h>

QTRSensors qtr;

const uint8_t SensorCount = 6;
uint16_t sensorValues[SensorCount];

void setup()
{
  delay (500);
  qtr.setTypeAnalog();
  qtr.setSensorPins((const uint8_t[]){A0, A1, A2, A3, A4, A5}, SensorCount);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  
}


void loop()
{
  qtr.read(sensorValues);
 
  for (uint8_t i = 0; i < SensorCount; i++)
  {
    if(sensorValues[i]>=1000)
    {
      sensorValues[i]=1;
      Serial.print("B");
    }
    else if(sensorValues[i]<1000)
    {
      sensorValues[i]=0;
      Serial.print("W");
    }
    //Serial.print(sensorValues[i]);
    Serial.print('\t');
  }
  Serial.println();
  //forward1
  if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==1 && sensorValues[3]==1 && sensorValues[4]==0 && sensorValues[5]==0)
  {
    analogWrite(3,250);
    analogWrite(6,0);
    analogWrite(10,255);
    analogWrite(11,0);
  }
//forward2
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==0 && sensorValues[3]==1 && sensorValues[4]==0 && sensorValues[5]==0)
  {
    analogWrite(3,255);
    analogWrite(6,0);
    analogWrite(10,255);
    analogWrite(11,0);
  }
  //forward3
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==1 && sensorValues[3]==0 && sensorValues[4]==0 && sensorValues[5]==0)
  {
    analogWrite(3,245);
    analogWrite(6,0);
    analogWrite(10,255);
    analogWrite(11,0);
  }
  
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  //slow Right1
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==0 && sensorValues[3]==1 && sensorValues[4]==1 && sensorValues[5]==0)
  {
    analogWrite(3,255);
    analogWrite(6,0);
    analogWrite(10,180);
    analogWrite(11,0);
  }
   //slow Right2
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==0 && sensorValues[3]==0 && sensorValues[4]==1 && sensorValues[5]==0)
  {
    analogWrite(3,255);
    analogWrite(6,0);
    analogWrite(10,140);
    analogWrite(11,0);
  }
  //fast Right 1
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==0 && sensorValues[3]==0 && sensorValues[4]==1 && sensorValues[5]==1)
  {
    analogWrite(3,255);
    analogWrite(6,0);
    analogWrite(10,30);
    analogWrite(11,0);
  }
  //fast Right 2
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==1 && sensorValues[3]==1 && sensorValues[4]==1 && sensorValues[5]==1)
  {
    analogWrite(3,255);
    analogWrite(6,0);
    analogWrite(10,0);
    analogWrite(11,150);
  }
  //fast Right 3
  else if(sensorValues[0]==0 && sensorValues[1]==0 && sensorValues[2]==0 && sensorValues[3]==1 && sensorValues[4]==1 && sensorValues[5]==1)
  {
    analogWrite(3,255);
    analogWrite(6,0);
    analogWrite(10,0);
    analogWrite(11,150);
  }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
  //slow Left1
  else if(sensorValues[0]==0 && sensorValues[1]==1 && sensorValues[2]==1 && sensorValues[3]==0 && sensorValues[4]==0 && sensorValues[5]==0)
  {
   
    analogWrite(3,180);
    analogWrite(6,0);
    analogWrite(10,255);
    analogWrite(11,0);
  }
  //slow Left2
  else if(sensorValues[0]==0 && sensorValues[1]==1 && sensorValues[2]==0 && sensorValues[3]==0 && sensorValues[4]==0 && sensorValues[5]==0)
  {
   
    analogWrite(3,140);
    analogWrite(6,0);
    analogWrite(10,255);
    analogWrite(11,0);
  }
  //fast Left 1
  else if (sensorValues[0]==1 && sensorValues[1]==1 && sensorValues[2]==0 && sensorValues[3]==0 && sensorValues[4]==0 && sensorValues[5]==0)
  {
    analogWrite(3,30);
    analogWrite(6,0);
    analogWrite(10,255);
    analogWrite(11,0);
  }
  //fast Left 2
  else if (sensorValues[0]==1 && sensorValues[1]==1 && sensorValues[2]==1 && sensorValues[3]==1 && sensorValues[4]==0 && sensorValues[5]==0)
  {
    analogWrite(3,0);
    analogWrite(6,150);
    analogWrite(10,255);
    analogWrite(11,0);
  }
   //fast Left 3
  else if (sensorValues[0]==1 && sensorValues[1]==1 && sensorValues[2]==1 && sensorValues[3]==0 && sensorValues[4]==0 && sensorValues[5]==0)
  {
    analogWrite(3,0);
    analogWrite(6,150);
    analogWrite(10,255);
    analogWrite(11,0);
  }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
}
