#ifndef TEMPERATURA_H_
#define TEMPERATURA_H_
class Temperatura
{
	private:
	float Tempkelvin;
	public:
	void setTempKelvin(float);
	void setTempFahrenheit(float);
	void setTempCelsius(float);
	void showTempKelvin();
	void showTempFahrenheit();
	void showTempCelsius();

};
#endif