#include "stdafx.h"
#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(shared_ptr<Subject> weatherData)
	:statisticsWeatherData(weatherData), maxTemp(0), minTemp(200), tempSum(0), numReadings(0)
{
	statisticsWeatherData->registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay()
{

}

void StatisticsDisplay::update(float temp, float humidity, float pressure)
{
		tempSum += temp;
		numReadings++;

		if (temp > maxTemp) {
			maxTemp = temp;
		}
 
		if (temp < minTemp) {
			minTemp = temp;
		}

		display();
}

void StatisticsDisplay::display()
{
	float avTemp = tempSum/numReadings;
	cout << setprecision(1) << fixed << "Avg/Max/Min temperature = " 
					<< avTemp << "/" << maxTemp << "/" << minTemp << endl;
	
}
