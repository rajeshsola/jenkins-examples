#ifndef __WEATHER_H
#define __WEATHER_H

#include "sensor.h"
#include "temperature.h"
#include "humidity.h"
#include "pressure.h"

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>

static const int max_number_of_cities=20;

struct weather
{
  Temperature temperature;
  sensor humidity;
  sensor pressure;
  char cityName[20];  //char *cityName
  time_t tstamp;
};

bool isFull();
void addNewRecord(struct weather*,const char*,double, double, double);
void displayAll(const struct weather* );
void display(const struct weather*);
void findByCityName(const struct weather*,const char*);
double findAverageTemperature(const struct weather*);
double findMinimumHumidity(const struct weather*);
double findMaximumPressure(const struct weather*);

#endif
