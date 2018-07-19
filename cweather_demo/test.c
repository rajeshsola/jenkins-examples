#include<stdio.h>
#include<stdlib.h>


#include "common.h"
#include "weather.h"

int cityCount;

int main(int argc,char* argv[])
{
  
  if(argc < 2)
  {
    fprintf(stderr,"Usage::%s <numCities>\n",argv[0]);
    exit(1);
  }
  int initialCityCount=strtoul(argv[1],NULL,10);
  cityCount=initialCityCount;

  if(cityCount > max_number_of_cities)
    cityCount=max_number_of_cities;
     
  struct weather *wArray = NULL;
  wArray=malloc(cityCount * sizeof(struct weather));  //calloc usage
  wAssert(NULL !=  wArray, "malloc failed");

  struct weather *pDummy=malloc(sizeof(struct weather));
  display(pDummy);
 
  char choice;			//block scope
  double tval;
  double hval;
  double pval;
  int additionalCount;
  int newCount;
  double avgTemperature;
  double minHumidity;
  double maxPressure;
  char city[20];

  while(true)
  {
    printf("Enter your choice\n");
    printf("1.Enter a new record\n");
    printf("2.Display all details\n");
    printf("3.Find entry by city name\n");
    printf("4.Find average temperature\n");
    printf("5.Find minimum humidity level\n");
    printf("6.Find maximum pressure value\n");
    printf("7.Expand the array size\n");
    printf("0.Exit the loop\n");
    
    scanf(" %c",&choice); 		//__fpurge(stdin) or space before %c
    switch(choice)
    {
      case '1': printf("enter the city name for weather record\n");
              scanf(" %s",city);  	//__fpurge(stdin)
	      tval=getRandomTemperatureValue();
              hval=getRandomHumidityValue();
              pval=getRandomPressureValue();
              //printf("going to add %s, %lf, %lf, %lf\n",city,tval,hval,pval);
	      addNewRecord(wArray,city,tval,hval,pval);
              
              break;
      case '2': displayAll(wArray);
                break;
      case '3': findByCityName(wArray,city);
                break;
      case '4': avgTemperature=findAverageTemperature(wArray);
                printf("Average Temperature is:%lf\n",avgTemperature);
                break;
      case '5': minHumidity=findMinimumHumidity(wArray); 
                printf("Minimum Humidity is:%lf\n",minHumidity);
                break;
      case '6': maxPressure=findMaximumPressure(wArray);
                printf("Maximum Pressure is:%lf\n",maxPressure);
                break;
      case '7': printf("Enter the additonal size of the array\n");
                scanf("%d",&additionalCount);
	        newCount = cityCount + additionalCount;
                wArray=realloc(wArray,newCount);
	        wAssert(NULL != wArray, "realloc failed");	//asset(NULL != wArray)
	        cityCount=newCount;
                break;
      case '0': //free(wArray);		//omission causes memory leak
	        wArray=NULL;		//no accidental usage after free
                exit(0);
    }
  }
  return 0;
}
