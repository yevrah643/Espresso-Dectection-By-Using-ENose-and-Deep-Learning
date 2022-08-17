/*
 *
 *
 *
 *
 *
 */
#ifdef _SENSORS_FAMILY_H
#define _SENSORS_FAMILY_H
#endif
#ifdef _DEBUG
#define _GLIBCXX_DEBUG
#endif

#ifndef _SENSORS
#include <algorithm>
#include <cmath>
#include <iostream>
#include <time.h>
#include <vector>
#endif

typedef enum sensor_using_list {
  Thermal_sensor = 1,
  Presure_sensor = 2,
  Light_sensor = 3,
  Humidity_sensor = 4,
  Distance_sensor = 5,
  //*****//
} sensor_types;

typedef struct sensor_specific {
  std::string name;
  std::string version;
  std::string id;
  sensor_types type;
  /** Manufacturer Values **/
  double max_value;
  double min_value;
  float res;
  int32_t time_delay;
} sensor_infor;

typedef struct sensor_reading_value {
  sensor_infor sensor_in4;
  /** Container for storing data from Sensors **/
  std::vector<double> got_data;
  std::vector<double> temperature;
  std::vector<double> pressure;
  std::vector<double> distance;
  std::vector<double> humidity;
  std::vector<double> current;
} sensor_return;

class My_Sensor {
public:
  My_Sensor() {}
  virtual ~My_Sensor(){};

  virtual bool get_Value(sensor_return) = 0;
  virtual void get_Infor(sensor_infor) = 0;

  void print_Infor(void);
};
