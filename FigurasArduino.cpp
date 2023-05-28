// Definir los pines de conexión para el registro de desplazamiento
const int latchPin = 3;  // Pin ST_CP (RCLK) del registro
const int clockPin = 4; // Pin SH_CP (SRCLK) del registro
const int dataPin = 2;  // Pin DS (SER) del registro
const int nivel0=5;
int t=10;

int niveles[8]={5,6,7,8,9,10,11,12};
// Definir la cantidad total de LEDs
const int numLEDs = 64;

// Crear un arreglo para almacenar los estados de los LEDs
byte leds[numLEDs];

void setup() {
  // Configurar los pines como salidas
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  for(int i=0;i<8;i++){
    pinMode(niveles[i],OUTPUT);
  }
}

void loop() {

for(int i=0;i<3;i++)figura1();


}

// Función para encender un LED específico
void encenderLED(int ledIndex) {
  // Verificar el índice del LED
  if (ledIndex < 0 || ledIndex >= numLEDs) {
    return; // Salir si el índice está fuera de rango
  }
  
  // Encender el LED correspondiente en el arreglo
  leds[ledIndex] = HIGH;

  // Actualizar los registros de desplazamiento
  actualizarRegistros();
}

// Función para apagar un LED específico
void apagarLED(int ledIndex) {
  // Verificar el índice del LED
  if (ledIndex < 0 || ledIndex >= numLEDs) {
    return; // Salir si el índice está fuera de rango
  }
  
  // Apagar el LED correspondiente en el arreglo
  leds[ledIndex] = LOW;

  // Actualizar los registros de desplazamiento
  actualizarRegistros();
}

// Función para actualizar los registros de desplazamiento
void actualizarRegistros() {
  // Desactivar la salida de los registros de desplazamiento
  digitalWrite(latchPin, LOW);

  // Enviar los datos de los LEDs a los registros de desplazamiento
  for (int i = numLEDs - 1; i >= 0; i--) {
    // Desplazar el bit correspondiente al LED actual
    digitalWrite(clockPin, LOW);
    digitalWrite(dataPin, leds[i]);
    digitalWrite(clockPin, HIGH);
  }

  // Activar la salida de los registros de desplazamiento
  digitalWrite(latchPin, HIGH);
}
void corazon1(){

         encenderLED(12);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(12);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(10);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(10);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(21);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(21);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(19);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(19);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(17);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(17);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(29);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(29);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(25);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(25);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(36);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(36);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(34);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(34);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(43);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(43);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);
    
    
    
    
    

}
void corazon2(){

         encenderLED(12);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(12);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

        encenderLED(10);
         digitalWrite(niveles[2],HIGH);
          delayMicroseconds(t);
         apagarLED(10);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

        encenderLED(21);
         digitalWrite(niveles[5],HIGH);
          delayMicroseconds(t);
         apagarLED(21);
         digitalWrite(niveles[5],LOW);
       delayMicroseconds(t);

        encenderLED(19);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(19);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(17);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(17);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

        encenderLED(29);
         digitalWrite(niveles[5],HIGH);
          delayMicroseconds(t);
         apagarLED(29);
         digitalWrite(niveles[5],LOW);
       delayMicroseconds(t);

        encenderLED(25);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(25);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

        encenderLED(36);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(36);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

        encenderLED(34);
         digitalWrite(niveles[2],HIGH);
          delayMicroseconds(t);
         apagarLED(34);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

        encenderLED(43);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(43);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);
    
    
    
    
    

}
void corazon3(){

         encenderLED(12);
         digitalWrite(niveles[2],HIGH);
          delayMicroseconds(t);
         apagarLED(12);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

        encenderLED(10);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(10);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

        encenderLED(21);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(21);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

        encenderLED(19);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(19);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(17);
         digitalWrite(niveles[5],HIGH);
          delayMicroseconds(t);
         apagarLED(17);
         digitalWrite(niveles[5],LOW);
       delayMicroseconds(t);

        encenderLED(29);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(29);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

        encenderLED(25);
         digitalWrite(niveles[5],HIGH);
          delayMicroseconds(t);
         apagarLED(25);
         digitalWrite(niveles[5],LOW);
       delayMicroseconds(t);

        encenderLED(36);
         digitalWrite(niveles[2],HIGH);
          delayMicroseconds(t);
         apagarLED(36);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

        encenderLED(34);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(34);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

        encenderLED(43);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(43);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);
    
    
    
    
    

}

void corazon4(){

         encenderLED(19);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(19);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

        encenderLED(27);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(27);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

         encenderLED(19);
         digitalWrite(niveles[5],HIGH);
          delayMicroseconds(t);
         apagarLED(19);
         digitalWrite(niveles[5],LOW);
       delayMicroseconds(t);

        encenderLED(27);
         digitalWrite(niveles[5],HIGH);
          delayMicroseconds(t);
         apagarLED(27);
         digitalWrite(niveles[5],LOW);
       delayMicroseconds(t);
       

        encenderLED(11);
         digitalWrite(niveles[2],HIGH);
          delayMicroseconds(t);
         apagarLED(11);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

        encenderLED(35);
         digitalWrite(niveles[2],HIGH);
          delayMicroseconds(t);
         apagarLED(35);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

        encenderLED(19);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(19);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(43);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(43);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);

        encenderLED(11);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(11);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

        encenderLED(35);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(35);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

    

        encenderLED(43);
         digitalWrite(niveles[3],HIGH);
          delayMicroseconds(t);
         apagarLED(43);
         digitalWrite(niveles[3],LOW);
       delayMicroseconds(t);
    
    
    
    
    

}
void corazon(){

  int h=10;

  for(int i=0;i<h;i++)corazon1();
  for(int i=0;i<h;i++)corazon2();
  for(int i=0;i<h;i++)corazon4();
  for(int i=0;i<h;i++)corazon3();
}

void frame1(int fila){
  int led=11;

 

  encenderLED(led);
         digitalWrite(niveles[4],HIGH);
         delayMicroseconds(t);
           apagarLED(led);
         digitalWrite(niveles[4],LOW);
     delayMicroseconds(t);

     for(int i=1;i<=3;i++){

       
  encenderLED(led+i*8+i);
         digitalWrite(niveles[4],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8+i);
         digitalWrite(niveles[4],LOW);
     delayMicroseconds(t);
     encenderLED(led+i*8-i);
         digitalWrite(niveles[4],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8-i);
         digitalWrite(niveles[4],LOW);
     delayMicroseconds(t);


     }

     led=led+8*3;
     int n=2;
    for(int i=1;i<=2;i++){

      

        encenderLED(led+i*8+n);
         digitalWrite(niveles[4],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8+n);
         digitalWrite(niveles[4],LOW);
     delayMicroseconds(t);
     encenderLED(led+i*8-n);
         digitalWrite(niveles[4],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8-n);
         digitalWrite(niveles[4],LOW);
     delayMicroseconds(t);
     n--;


    }
     led=led+8*3;

     encenderLED(led);
         digitalWrite(niveles[4],HIGH);
         delayMicroseconds(t);
           apagarLED(led);
         digitalWrite(niveles[4],LOW);
     delayMicroseconds(t);
//
   led=11;

 

  encenderLED(led);
         digitalWrite(niveles[0],HIGH);
         delayMicroseconds(t);
           apagarLED(led);
         digitalWrite(niveles[0],LOW);
     delayMicroseconds(t);

     for(int i=1;i<=3;i++){

       
  encenderLED(led+i*8+i);
         digitalWrite(niveles[0],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8+i);
         digitalWrite(niveles[0],LOW);
     delayMicroseconds(t);
     encenderLED(led+i*8-i);
         digitalWrite(niveles[0],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8-i);
         digitalWrite(niveles[0],LOW);
     delayMicroseconds(t);


     }

     led=led+8*3;
     n=2;
    for(int i=1;i<=2;i++){

      

        encenderLED(led+i*8+n);
         digitalWrite(niveles[0],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8+n);
         digitalWrite(niveles[0],LOW);
     delayMicroseconds(t);
     encenderLED(led+i*8-n);
         digitalWrite(niveles[0],HIGH);
         delayMicroseconds(t);
           apagarLED(led+i*8-n);
         digitalWrite(niveles[0],LOW);
     delayMicroseconds(t);
     n--;


    }
     led=led+8*3;

     encenderLED(led);
         digitalWrite(niveles[0],HIGH);
         delayMicroseconds(t);
           apagarLED(led);
         digitalWrite(niveles[0],LOW);
     delayMicroseconds(t);

  for(int i=3;i>0;i--){
    encenderLED(fila);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(fila);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

  }


        

       
          
         
}


void frame2(int fila){

  for(int i=17;i<=21;i++){
      encenderLED(i);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(i);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

  }

  for(int i=0;i<5;i++){
 encenderLED(17+8*i);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(17+8*i);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

  }

    for(int i=0;i<5;i++){
 encenderLED(21+8*i);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(21+8*i);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

  }

   for(int i=49;i<=53;i++){
      encenderLED(i);
         digitalWrite(niveles[4],HIGH);
          delayMicroseconds(t);
         apagarLED(i);
         digitalWrite(niveles[4],LOW);
       delayMicroseconds(t);

  }
//

  for(int i=17;i<=21;i++){
      encenderLED(i);
         digitalWrite(niveles[0],HIGH);
          delayMicroseconds(t);
         apagarLED(i);
         digitalWrite(niveles[0],LOW);
       delayMicroseconds(t);

  }

  for(int i=0;i<5;i++){
 encenderLED(17+8*i);
         digitalWrite(niveles[0],HIGH);
          delayMicroseconds(t);
         apagarLED(17+8*i);
         digitalWrite(niveles[0],LOW);
       delayMicroseconds(t);

  }

    for(int i=0;i<5;i++){
 encenderLED(21+8*i);
         digitalWrite(niveles[0],HIGH);
          delayMicroseconds(t);
         apagarLED(21+8*i);
         digitalWrite(niveles[0],LOW);
       delayMicroseconds(t);

  }

   for(int i=49;i<=53;i++){
      encenderLED(i);
         digitalWrite(niveles[0],HIGH);
          delayMicroseconds(t);
         apagarLED(i);
         digitalWrite(niveles[0],LOW);
       delayMicroseconds(t);

  }

  for(int i=3;i>0;i--){
    encenderLED(fila);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(fila);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

  }


}


void figura1(){
   int f1=10;
  int f2=10;

  for(int i=0;i<f1;i++)frame1(11);
  for(int i=0;i<f2;i++)frame2(17);
  
  for(int i=0;i<f1;i++)frame1(32);
  for(int i=0;i<f2;i++)frame2(49);

    for(int i=0;i<f1;i++)frame1(59);
  for(int i=0;i<f2;i++)frame2(53);


  for(int i=0;i<f1;i++)frame1(38);
  for(int i=0;i<f2;i++)frame2(21);
  
}

void frame3(){

  for(int i=2;i<=5;i++){
    encenderLED(11);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(11);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

          encenderLED(25);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(25);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

 encenderLED(43);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(43);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

        encenderLED(29);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(29);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);


  }

  

    int pos=11;
          for(int i=0;i<5;i++){
                  encenderLED(pos+8*i);
         digitalWrite(niveles[6],HIGH);
          delayMicroseconds(t);
         apagarLED(pos+8*i);
         digitalWrite(niveles[6],LOW);
       delayMicroseconds(t);

          }

               for(int i=25;i<=29;i++){
                  encenderLED(i);
         digitalWrite(niveles[6],HIGH);
          delayMicroseconds(t);
         apagarLED(i);
         digitalWrite(niveles[6],LOW);
       delayMicroseconds(t);

          }
 pos=11;
          for(int i=0;i<5;i++){
                  encenderLED(pos+8*i);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(pos+8*i);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

          }

               for(int i=25;i<=29;i++){
                  encenderLED(i);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(i);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

          }

  

  

         

}

void frame4(){

   for(int i=2;i<=5;i++){
    encenderLED(9);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(9);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

          encenderLED(41);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(41);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

 encenderLED(13);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(13);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);

        encenderLED(45);
         digitalWrite(niveles[i],HIGH);
          delayMicroseconds(t);
         apagarLED(45);
         digitalWrite(niveles[i],LOW);
       delayMicroseconds(t);


  }




      int pos=13;

           for(int i=0;i<5;i++){
                  encenderLED(pos+7*i);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(pos+7*i);
         digitalWrite(niveles[2],LOW);
       delayMicroseconds(t);

          }
          pos=45;

           for(int i=0;i<5;i++){
                  encenderLED(pos-9*i);
         digitalWrite(niveles[1],HIGH);
          delayMicroseconds(t);
         apagarLED(pos-9*i);
         digitalWrite(niveles[1],LOW);
       delayMicroseconds(t);

          }
     pos=13;

           for(int i=0;i<5;i++){
                  encenderLED(pos+7*i);
         digitalWrite(niveles[6],HIGH);
          delayMicroseconds(t);
         apagarLED(pos+7*i);
         digitalWrite(niveles[6],LOW);
       delayMicroseconds(t);

          }
          pos=45;

           for(int i=0;i<5;i++){
                  encenderLED(pos-9*i);
         digitalWrite(niveles[6],HIGH);
          delayMicroseconds(t);
         apagarLED(pos-9*i);
         digitalWrite(niveles[6],LOW);
       delayMicroseconds(t);

          }
  
 
}

void figura2(){

  int tp=10;

  for(int i=0;i<tp;i++)frame3();
for(int i=0;i<tp;i++)frame4();

}
