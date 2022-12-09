void sendLux()
{
  int rainValMain = hujan();
  float luxValMain = lumen();
  Blynk.virtualWrite(V1, luxValMain); 
  Blynk.virtualWrite(V2, rainValMain); 
  if(controllerState==true){
    autoo(rainValMain, luxValMain);
  }else{
    Serial.println("manualllop");
  }
}