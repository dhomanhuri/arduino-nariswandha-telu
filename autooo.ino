
void autoo(int a, float b){
  int rainVal = a;
  float luxVal = b;
  Serial.println("Hujan = "+String(rainVal)+"      ||      lux = "+luxVal);
  if(rainVal>rainValMax){
    // closeroof
    servo(currentstate,closeroof);
    currentstate = closeroof;
  }else if(rainVal<rainValMin){
    if(luxVal>luxValMax){
      // openroof
      servo(currentstate, openroof);
      currentstate = openroof;
    }else if(luxVal<luxValMin){
      // closeroof
      servo(currentstate,closeroof);
      currentstate = closeroof;
    }else{
      // nothing
    }
  }else{
    // nothing
  }
  delay(1000);
}