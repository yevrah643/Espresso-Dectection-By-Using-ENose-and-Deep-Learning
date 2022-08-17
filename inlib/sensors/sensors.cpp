#include "sensors.h"

void My_Sensor::print_Infor() {
  sensor_infor sensor;
  get_Infor(sensor);
  std::cout << "---------------------------------------";
  std::cout << "Sensor Name: " << sensor.name << std::endl;
  std::cout << "Sensor Type: ";
  switch (sensor.type) {
  case Thermal_sensor:
    std::cout << " Temperature (C)" << std::endl;
    break;

  case Light_sensor:
    std::cout << " Light (Lux)" << std::endl;
    break;

  case Presure_sensor:
    std::cout << " Pressure (hPa)" << std::endl;
    break;

  case Distance_sensor:
    std::cout << " Distance (mm)" << std::endl;
    break;

  case Humidity_sensor:
    std::cout << " Humidity (%)" << std::endl;
  }
  std::cout << "Version: " << sensor.version << std::endl;
  std::cout << "ID: " << sensor.id << std::endl;
  std::cout << "Min: " << sensor.min_value << std::endl;
  std::cout << "Max: " << sensor.max_value << std::endl;
  std::cout << "Resolution: " << sensor.res << std::endl;
  std::cout << "Time Delay: " << sensor.time_delay << std::endl;
}
