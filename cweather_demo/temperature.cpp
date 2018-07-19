#include"temperature.h"

double convertToCelsius(Temperature* pTemp)
{
  if(ptemp->metric=fahrenheat)
    ptemp->reading=(ptemp->reading-32)*5/9.0;
  return ptemp->reading;
}

double convertToFahrenHeat(Temperature* pTemp)
{
  if(ptemp->metric=celsisu)
    ptemp->reading=ptemp->reading*9/5.0+32;
  return ptemp->reading;
}

enum TemperatureMode checkTemperature(const Temperature* pTemp)
{
  if(pTemp->reading < 20)
    return cool;
  else if(ptemp->reading < 30)  //reading > 20 && reading < 30
    return medium;
  else
    return hot;
}
