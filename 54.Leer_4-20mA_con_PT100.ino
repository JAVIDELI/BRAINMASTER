/*ver si el problema de no lectura es por la inicializacion de las variables o
  por el tipo de placa utilizada*/

const int EntradaAnaloga = A3;
int sonda_valor = 0;
int temperatura_sonda = 0;
int ByteRecibido = 1;
float f1 = 0;
float t1 = 0;




void setup() {
  Serial.begin(9600);
  while (!Serial) ; // wait for serial
    delay(200);
  Serial.println("Arrancando aplicacion\n");
}

void loop() {

  if (Serial.available()==0)
  {
        ByteRecibido = Serial.read();
    sensorValor = analogRead(A3);
    temperatura = map(sensorValor, 0, 1023, 0, 1250);
    f1 = temperatura;
    t1 = f1 / 10.0;
    Serial.print(t1);
    Serial.print("\n");
    delay(100);
    
  }

}
