/****************************************************************
**                                                             **
**                            TÍTOL:                           **
**                      Display 7 segments                     **
**                                                             **
**   NOM: Abel Picó                           Data:27/03/17    **
****************************************************************/
//************************** INCLUDE ****************************


//************************* VARIABLES ***************************
const int A = 5;
const int B = 6;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 10;
const int G = 11;

//*************************** SETUP *****************************

void setup() 
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);


}


//*************************** LOOP ******************************

void loop()
{
  /*numero 0*/
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, HIGH);
  delay (1000);
  
  /*numero 1*/
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(G, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(E, HIGH);
  digitalWrite(F, HIGH);
  delay(1000);
  
  /*numero 2*/
  digitalWrite(A, LOW);
  digitalWrite(E, LOW);
  digitalWrite(D, LOW);
  digitalWrite(G, LOW);
  digitalWrite(C, HIGH);
  delay(1000);
  
  /*numero 3*/
  digitalWrite(E, HIGH);
  digitalWrite(C, LOW);
  delay(1000);

  /*numero 4*/
  digitalWrite(D,HIGH);
  digitalWrite(A, HIGH);
  digitalWrite(F, LOW);
  delay(1000);

  /*numero 5*/
  digitalWrite(A, LOW);
  digitalWrite(D, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, HIGH);
  delay(1000);

  /*numero 6*/
  digitalWrite(E, LOW);
  delay(1000);

  /*numero 7*/
  digitalWrite(B, LOW);
  digitalWrite(E, HIGH);
  digitalWrite(D, HIGH);
  digitalWrite(F, HIGH);
  digitalWrite(G, HIGH);
  delay(1000);

  /*numero 8*/
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(G, LOW);
  digitalWrite(F, LOW);
  delay(1000);

  /*numero 9*/
  digitalWrite(E, HIGH);
  delay(1000);


}


//************************ FUNCIONS *****************************
