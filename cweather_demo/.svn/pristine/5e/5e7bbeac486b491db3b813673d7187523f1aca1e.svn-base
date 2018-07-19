#ifndef __TEMPERATURE_H
#define __TEMPERATURE_H

#include<stdlib.h>

typedef enum TemperatureMetric
{
  celsius,
  fahrenheat
}TemperatureMetric;

typedef struct //Temperature
{
  double reading;
  enum TemperatureMetric metric;
}Temperature;


typedef enum TemperatureMode
{
  cool,
  medium,
  hot
}TemperatureMode;

double convertToCelsius(Temperature*);

double convertToFahrenHeat(Temperature*);

TemperatureMode checkTemperature(const Temperature*);

double getRandomTemperatureValue();

#endif
