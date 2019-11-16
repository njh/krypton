# Krypton

![Version](https://img.shields.io/badge/version-0.0.1-green?style=for-the-badge)
![Build](http://img.shields.io/badge/build-passing-brightgreen?style=for-the-badge)
![Boards](https://img.shields.io/badge/boards-latest-blue?style=for-the-badge)

A library that makes use of Krypton ion thruster controller.
Change voltage of the pumps, speed and fuel flow to your ion krypton, argon, xenon or neon thruster.

  - Compatible with all **Krypton Development** boards
  - Compatible with **Gallilei3, Argon3, Xe3 and Neon** thrusters

# Example code
```cpp
#include "Krypton.h" 

Krypton krypton(11); // Board common pin

void setup()
{
    Serial.begin(9600); // Default baud rate for
}

void loop()
{
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
```


# Help
If you need any help, you can join our [**Discord**](https://discord.gg/nMRjUDQ) server, or contact me directly via mail which can be found on my [**Github**](https://github.com/deyyanl) profile.

# Contributor
This library was made by me, [deyyanl](https://github.com/deyyanl).

You can find me on:
- GitHub ([deyyanl](https://github.com/deyyanl))
- Instagram ([deyyanl](https://instagram.com/deyyanl))
- Twitter ([deyyanl](https://twitter.com/deyyanl))
- Reddit ([deyyandev](https://reddit.com/u/deyyandev))
- Discord ([deyyan#4670](https://discordapp.com/channels/@me))

# License
This library is licensed under the MIT license.

(c) 2019, OberonSPACE
