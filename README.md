# BaiMon

ESP8266 - based monitoring device for Vaillant TurboTec boilers.

Periodically monitors boiler internal state, water temperature and pressure.

Publishes measured results to HomeAssistant automation server, via MQTT protocol.

Has its own web interface for viewing measured data and debugging EBus activity.

This version supports Vaillant TurboTec Pro. It can be adapted to other
boiler models using EBus interace. However, this requires knowledge of proprietary
commands to read parameter values.

Requires Arduino IDE with ESP8266 support to compile and upload to ESP8266-based controller (I run it on ESP-07S with custom PCB design board). 

Controller comminicates to the boiler using UART. Adapter is needed to adjust signal levels (EBus uses 9-20 volts).

EBus-adapter.pdf contains schematics of a simple EBus adapter.
It can be connected directly to ESP8266 outputs due to optical decoupling.

**New mainpage:**

![image](https://github.com/user-attachments/assets/cd86eedd-aba3-494f-99c4-bde7c88e4f8f)

**Firmware update page:**

![image](https://github.com/user-attachments/assets/2021a2ee-b122-4d1e-919d-b187ea10e9b8)

TODO: 
- chengable MQTT settings (host, login. password, port, topic) via web interface;
- chengable web interface password (and maybe login).
