/* 
  Krypton.cpp - Library for Krypton ion thruser control board
  Created by Dejan Lukić @ OberonSPACE, November 15, 2019.
  MIT License
  (C) 2019, OberonSPACE.
*/
#include "Arduino.h"
#include "Krypton.h"

Krypton::Krypton(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;  
}

void Krypton::thrust()
{
  int thrust = analogRead(A2);
  Serial.println(thrust);
  delay(1);  
}

void Krypton::fuel_ctrl(int flow_speed, int rpm)
{
  pinMode(5, OUTPUT);
  pinMode(9, INPUT);
  Serial.write(5, [flow_speed, rpm]);    
  digitalRead(9, [flow_speed, rpm]);
}

void Krypton::pump_ctrl(int rpm)
{
  pinMode(6, OUTPUT);
  Serial.write(6, rpm);    
}

void Krypton::voltage_ctrl(int voltage)
{
  pinMode(7, OUTPUT);
  Serial.write(7, voltage);    
}

void Krypton::altitude(int alt)
{
  pinMode(10, INPUT);
  int altitude = analogRead(A5);
  Serial.println("Altitude: ", altitude);
  delay(1);
}