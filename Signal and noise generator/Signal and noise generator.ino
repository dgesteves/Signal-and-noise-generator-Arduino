#define N 360

int AmpSinal=5;
int AmpRuido=1;
float SinalRuido[N];

//=================================================================

void setup() {
 Serial.begin(9600);
 
//========================== //RAD angle calculation start

 float rad[N];
 for(int i=0; i<360 ;i++){
  rad[i]=i*PI*2/360;
  
//===========================  //Signal and noise generator

  float sinal[N];
  sinal[i]=(40+AmpSinal*sin(rad[i]));
  Serial.print(sinal[i]);
    float ruido= AmpRuido*AmpSinal;
    float ruido1= ruido*(random(-100,100)/100.0);
    Serial.print(",");
    Serial.print( ruido1);
      SinalRuido[i]=sinal[i]+ruido1;
      Serial.print(",");
      Serial.println(SinalRuido[i]);
 }

  
 }
 

void loop() {
}
