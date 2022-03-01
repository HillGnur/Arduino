//Sensor de presenca com modulo PIR
//Leonardo Nepomuceno, Ricardo Rodrigues, Murilo Melo
int emite = 7; //Base para emissão
int pir = 13; //PIR
int sensor; //Acionamento de sensor
 
void setup(){
	pinMode(emite, OUTPUT); //Emissão de saída
	pinMode(pir, INPUT); //Sinal PIR de entrada no arduino
	Serial.begin(9600);
}
 
void loop(){
	sensor = digitalRead(pir); //valor atual do sensor PIR
	if(sensor == LOW){
    	//Desligado
		digitalWrite(emite, LOW);
	}else{
    	//Ligado
		digitalWrite(emite, HIGH);
	};
}