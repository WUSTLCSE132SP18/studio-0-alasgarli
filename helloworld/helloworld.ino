/* helloworld
 *
 * output simple hello message
 *
 */



//pinMode(13,OUTPUT);
//void setup() {
//
//Serial.begin(9600);
//Serial.println("Hello, world!");
//
//void loop() {

 
 int i=0;
void setup() {
   
  Serial.begin(9600);
  Serial.println("Hello, world!");
  
}

void loop() {

  Serial.println(i++,DEC);
  delay(1000);
  
  
}
