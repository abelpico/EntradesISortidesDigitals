/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                      Cruilla semafors                       **
**                                                             **
**   NOM: Abel Picó                           Data:13/03/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************


int a = 2000;

//*************************** SETUP *****************************

void setup() 
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

}


//*************************** LOOP ******************************

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  delay(a);

  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  delay(a);
  delay(a);
  delay(a);

  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(a);

  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(a);

  digitalWrite(7, LOW);
  digitalWrite(9, HIGH);
  delay(a);
  delay(a);
  delay(a);

  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(a);

  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  delay(a);


}


//************************ FUNCIONS *****************************
