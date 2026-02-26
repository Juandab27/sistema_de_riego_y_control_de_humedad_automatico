int bomba = 8;              // Pin de control de la bomba
int humedad = 0;            // Variable para almacenar el valor analógico de humedad
int porcentajeHumedad = 0;   // Variable para almacenar el porcentaje de humedad
int humedadOptima = 50; //en caso de que sea cultivo de frijol (40-60%)

void setup() {
  Serial.begin(9600);       // Inicia la comunicación serial
  pinMode(bomba, OUTPUT);   // Configura el pin de la bomba como salida
}

void loop() {
  humedad = analogRead(A0);  // Lee el valor analógico de humedad del sensor
  
  // Mapea el valor de humedad a un rango de 100 a 0 para obtener el porcentaje
  porcentajeHumedad = map(humedad, 0, 1023, 100, 0); //estados = (v/vr) * 1023
  
  // Control de la bomba según el porcentaje de humedad
  if (porcentajeHumedad < humedadOptima ) {       // Activa la bomba si la humedad está por debajo del umbral
    digitalWrite(bomba, LOW);         
  } else {                         
    digitalWrite(bomba, HIGH);       
  }

  Serial.print("Humedad (%): ");
  Serial.println(porcentajeHumedad);
  
  delay(500);
}


