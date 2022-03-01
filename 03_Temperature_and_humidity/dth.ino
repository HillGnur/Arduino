//Necessário importar um módulo do sensor para leitura de temperatura e humidade
#include <dht.h> 
define dht_dpin A1 //Pino DATA na entrada analógica
 dht DHT; //Inicializa o sensor

void setup()
{
  Serial.begin(9600);
  delay(1000); //Aguarda antes de acessar as informações do sensor
}

void loop()
{
  DHT.readll(dht_pin);//Recolhe as informações
  Serial.print("Humidade: ");
  Serial.print(DHT.humidity);//Imprime a humidade
  Serial.print("%  |  ");
  Serial.print("Temperatura: ");
  Serial.print(DHT.temperature);//Imprime a temperatura
  Serial.println(" Celsius");
  
  delay(2000);
}