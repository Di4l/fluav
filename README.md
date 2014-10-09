fluav
=====

  Fuzzy Logic based UAV in C++ (for Raspberry Pi and Arduino)


The project's intention is to create an UAV autopilot system, flexible and modular. The following lists the goals for this project:

  * Autonomous take-off, flight and landing manouvers.
  * GPS navigation via pre-defined, configurable waypoints.
  * Autopilot based on Fuzzy Logic models.
  * Autonomous learning.
  * Highly configurable.
  * Easy target swap (quadcopter, airplane, helicopter).
  * Simulation via PC-based simulators (Flight Simulator, Flight Gear, ...).


The project is aimed at RC hobbiests that wish to add UAV capabilities to their different aircrafts. As such, the hardware this project is intended to run on is a Raspberry Pi connected to an Arduino via serial line. The Raspberry Pi shall be the "brains" of the autopilot and the Arduino the interface with the sensors and actuators (servos) of the aircraft. It may be possible to set a sipler configuration (just one RPi or one Arduino) but, for the time being this will not be the focus of the project.

We are aware the project is quite ambitious, but we are commite to, at least give it a try. To be able to achieve all of the tasks, the project shall be divided into different stages, each having its main goals of increasing complexity.
  
  * Stage 1: Initial connectivity. Provide the necessary framework to communicate the RPi with an Arduino and transfer data between them
  * Stage 2: Reading sensors and moving actuators.
  * Stage 3: Connecting to a simulator.
  * Stage 4: Modelling autopilot via fuzzy logic (simple stuff).
  * Stage 5: Implement fuzzy logic autonomous learning.


Many more stages can be added and will be added, but for the time being this should suffice.


Repository structure
====================

The project (so far) involves compiling for different architectues (ARM for RPi, Atmel for Arduino, x86 for PC...), all of which share common parts. We have, therefore, created different folders as modules within the src directory that recreate/point to the different architecture builds. The strcuture then, looks like:

src         (source code folder)

  |
  
  + rpi     (module that points to fluav-rpi)
  
  |
  
  \ arduino (module pointing to fluav-arduino)

  