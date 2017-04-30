int pulso=0;
int pulmin;
int x;

void setup (){ 
  Serial.begin(9600);
  pinMode(A5,INPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop (){
  
  pulso= analogRead (A5);
  
  if (pulso>=660){
    digitalWrite (11,HIGH);
    delay  (30);
    digitalWrite(11,LOW);
  }  
  if (pulso>=200){
    digitalWrite (12,HIGH);
    delay  (30);
    digitalWrite(12,LOW); 

 delay(50);
 Serial.println(pulso);
  }   }

