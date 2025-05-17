///C++ code
//el codigo debe evaluar el numero introducido por el usuario via 
//monitor serie y saber si es mayor, igual o menor al que se programo 
//en el codigo

int numero;

void setup()
{
  Serial.begin(9600);
}



void loop()
{
    //Se realiza conversion a entero para almacenar el numero 
    numero = Serial.read();
    if(numero == 7){
      Serial.println("num igual a 7");
     
    }else if(numero > 7){
         
      Serial.println("num mayor a 7");
    }else if (numero < 7 || numero == 0){
      
      Serial.println("num menor a 7");
      
    }else if(!numero){
      Serial.println("introduce un numero");
    }
    delay(1000);
}
