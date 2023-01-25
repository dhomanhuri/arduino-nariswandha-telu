// BLYNK_WRITE(V3) {
//   if(controllerState==false){
//       servo(currentstate, param.asInt());
//       currentstate = param.asInt();
//   }
// }
BLYNK_WRITE(V4) {
  if(controllerState==false){
    digitalWrite(openPin,HIGH);
    delay(1000);
    digitalWrite(openPin,LOW);
  }
}
BLYNK_WRITE(V5) {
  if(controllerState==false){
    digitalWrite(closePin,HIGH);
    delay(1000);
    digitalWrite(closePin,LOW);
  }
}