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

**Factory made PCB:**

![photo_2024-10-15_11-24-23](https://github.com/user-attachments/assets/2dc630aa-241f-49d6-a961-c7841dcdcdc7)
![photo_2024-10-15_11-24-25](https://github.com/user-attachments/assets/675da22a-cb2a-457a-8124-40a7b2fb43ae)

**New mainpage:**

![image](https://github.com/user-attachments/assets/39f02201-f54d-4785-a5b2-33afb850300e)

**Firmware update page:**

![image](https://github.com/user-attachments/assets/2021a2ee-b122-4d1e-919d-b187ea10e9b8)

**Now you can enter MQTT and other settings at the WiFi connection state (no need to edit and compile firmware!):**

![image](https://github.com/user-attachments/assets/be4cfc1c-918c-4535-b4b7-3540921f56d7)

**Home Assistant configuration:**
```
mqtt:
  sensor:
    - name: "Температура теплоносителя"
      state_topic: "ebus/vaillant/tempcurr" 
      value_template: '{{ value }}'
      unit_of_measurement: "°C"
      availability_topic: "ebus/vaillant/status"
      payload_available: "Online"
      payload_not_available: "Offline"

    - name: "Уставка температуры"
      state_topic: "ebus/vaillant/tempset" 
      value_template: '{{ value }}'
      unit_of_measurement: "°C"
      availability_topic: "ebus/vaillant/status"
      payload_available: "Online"
      payload_not_available: "Offline"
    
    - name: "Давление воды"
      state_topic: "ebus/vaillant/pressure" 
      value_template: '{{ value }}'
      unit_of_measurement: "bar"
      availability_topic: "ebus/vaillant/status"
      payload_available: "Online"
      payload_not_available: "Offline"
    
    - name: "Режим работы"
      state_topic: "ebus/vaillant/mode" 
      value_template: '{{ value }}'
      unit_of_measurement: "mode"
      availability_topic: "ebus/vaillant/status"
      payload_available: "Online"
      payload_not_available: "Offline"
```
