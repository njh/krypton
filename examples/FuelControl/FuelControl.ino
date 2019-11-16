/* 
 * Krypton.h - Library for Krypton ion thruser control board
 * Created by Dejan Lukić @ OberonSPACE, November 15, 2019.
 * MIT License
 * (C) 2019, OberonSPACE.
 *
 * 
 * 
 * FuelControl.ino - sketch
*/
void setup() {
  Krypton krypton(8); // Define the Krypton board communications pin

  Serial.begin(9600); // Start serial communication with 9600 baud rate
}

void loop() {
  // Check the fuel flow (metric)
  int fuel_speed = Krypton.fuel_ctrl(flow_speed);
  digitalRead(fuel_speed);
  delay(1);

  /* Check the fuel flow (imperial)
   * int fuel_speed = Krypton.fuel_ctrl(flow_speed) / 3.785;
   * digitalRead(fuel_speed);
   * delay(1);
   */
  
}
