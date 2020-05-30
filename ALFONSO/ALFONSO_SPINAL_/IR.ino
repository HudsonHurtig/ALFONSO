int IRledPin =  20;    // LED connected to digital pin 13

// The setup() method runs once, when the sketch starts

void InitIR()   {               
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);     
  pinMode(7, OUTPUT);
  
}



// This procedure sends a 38KHz pulse to the IRledPin
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  cli();  // this turns off any background interrupts

  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds

   // so 26 microseconds altogether
   microsecs -= 26;
  }

  sei();  // this turns them back on
}

void projectorPower(){
   delayMicroseconds(14748);
pulseIR(9200);
delayMicroseconds(4600);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(540);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(540);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(42240);
pulseIR(9240);
delayMicroseconds(4600);
pulseIR(680);
delayMicroseconds(1620);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(42220);
pulseIR(9240);
delayMicroseconds(4600);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(620);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(48120);
pulseIR(980);
delayMicroseconds(6840);
pulseIR(41144); 
}
void tvOn(){
delayMicroseconds(43292);
pulseIR(9260);
delayMicroseconds(4580);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(42020);
pulseIR(9260);
delayMicroseconds(2280);
pulseIR(600);
delayMicroseconds(32944);
pulseIR(9300);
delayMicroseconds(2240);
pulseIR(740);
delayMicroseconds(32784);
pulseIR(9300);
delayMicroseconds(2260);
pulseIR(600);
delayMicroseconds(32924);
pulseIR(9280);
delayMicroseconds(2280);
pulseIR(620);
}

void PROJECTOR_MUTE(){

  delayMicroseconds(57136);
pulseIR(9260);
delayMicroseconds(4560);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(480);
delayMicroseconds(1760);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(640);
pulseIR(580);
delayMicroseconds(520);
pulseIR(540);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(1740);
pulseIR(620);
delayMicroseconds(520);
pulseIR(540);
delayMicroseconds(1800);
pulseIR(480);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(600);
pulseIR(600);
delayMicroseconds(560);
pulseIR(520);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(620);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(540);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(42180);
pulseIR(9240);
delayMicroseconds(4560);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1700);
pulseIR(520);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(1760);
pulseIR(600);
delayMicroseconds(520);
pulseIR(560);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(660);
pulseIR(480);
delayMicroseconds(660);
pulseIR(480);
delayMicroseconds(660);
pulseIR(500);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(660);
pulseIR(500);
delayMicroseconds(1780);
pulseIR(560);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(1720);
pulseIR(480);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(660);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(42240);
pulseIR(9260);
delayMicroseconds(4560);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(500);
delayMicroseconds(640);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(660);
pulseIR(480);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(520);
delayMicroseconds(1780);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(660);
pulseIR(500);
delayMicroseconds(640);
pulseIR(500);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(620);
pulseIR(520);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(1760);
pulseIR(540);
delayMicroseconds(43000);
pulseIR(900);
delayMicroseconds(6900);
pulseIR(41084);
}

void LEDS_DISCO(){
  delayMicroseconds(31040);
pulseIR(180);
delayMicroseconds(52900);
pulseIR(260);
delayMicroseconds(360);
pulseIR(220);
delayMicroseconds(20080);
pulseIR(120);
delayMicroseconds(24384);
pulseIR(120);
delayMicroseconds(10484);
pulseIR(160);
delayMicroseconds(27540);
pulseIR(300);
delayMicroseconds(560);
pulseIR(360);
delayMicroseconds(48144);
pulseIR(140);
delayMicroseconds(11480);
pulseIR(120);
delayMicroseconds(40492);
pulseIR(9420);
delayMicroseconds(4620);
pulseIR(580);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(520);
pulseIR(620);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(520);
pulseIR(660);
delayMicroseconds(520);
pulseIR(620);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(600);
pulseIR(620);
delayMicroseconds(520);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1740);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(640);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(660);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(560);
delayMicroseconds(620);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(600);
pulseIR(600);
delayMicroseconds(540);
pulseIR(640);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(620);
pulseIR(600);
delayMicroseconds(540);
pulseIR(660);
delayMicroseconds(500);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(680);
delayMicroseconds(500);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(640);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(620);
delayMicroseconds(41200);
pulseIR(9580);
delayMicroseconds(2240);
pulseIR(660);
delayMicroseconds(33764);
pulseIR(9420);
delayMicroseconds(2260);
pulseIR(700);
delayMicroseconds(59568);
pulseIR(160);
}



void LEDS_WHITE(){
  delayMicroseconds(15784);
pulseIR(140);
delayMicroseconds(25336);
pulseIR(120);
delayMicroseconds(24264);
pulseIR(220);
delayMicroseconds(6244);
pulseIR(9700);
delayMicroseconds(4420);
pulseIR(680);
delayMicroseconds(480);
pulseIR(720);
delayMicroseconds(460);
pulseIR(680);
delayMicroseconds(480);
pulseIR(800);
delayMicroseconds(380);
pulseIR(760);
delayMicroseconds(400);
pulseIR(640);
delayMicroseconds(520);
pulseIR(760);
delayMicroseconds(400);
pulseIR(760);
delayMicroseconds(420);
pulseIR(660);
delayMicroseconds(1680);
pulseIR(740);
delayMicroseconds(1580);
pulseIR(740);
delayMicroseconds(1580);
pulseIR(760);
delayMicroseconds(1600);
pulseIR(760);
delayMicroseconds(1580);
pulseIR(680);
delayMicroseconds(1620);
pulseIR(740);
delayMicroseconds(1600);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(760);
delayMicroseconds(400);
pulseIR(660);
delayMicroseconds(480);
pulseIR(700);
delayMicroseconds(1660);
pulseIR(740);
delayMicroseconds(400);
pulseIR(720);
delayMicroseconds(460);
pulseIR(720);
delayMicroseconds(440);
pulseIR(780);
delayMicroseconds(1580);
pulseIR(680);
delayMicroseconds(460);
pulseIR(740);
delayMicroseconds(1620);
pulseIR(680);
delayMicroseconds(1640);
pulseIR(660);
delayMicroseconds(480);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(660);
delayMicroseconds(1660);
pulseIR(740);
delayMicroseconds(1620);
pulseIR(700);
delayMicroseconds(440);
pulseIR(760);
delayMicroseconds(1600);
pulseIR(640);
delayMicroseconds(41180);
pulseIR(9480);
delayMicroseconds(2240);
pulseIR(680);
delayMicroseconds(33784);
pulseIR(9480);
delayMicroseconds(2380);
pulseIR(520);
}



void LEDS_BLUE(){
  delayMicroseconds(18264);
pulseIR(9460);
delayMicroseconds(4540);
pulseIR(620);
delayMicroseconds(580);
pulseIR(660);
delayMicroseconds(520);
pulseIR(660);
delayMicroseconds(480);
pulseIR(560);
delayMicroseconds(600);
pulseIR(680);
delayMicroseconds(480);
pulseIR(680);
delayMicroseconds(480);
pulseIR(680);
delayMicroseconds(500);
pulseIR(560);
delayMicroseconds(580);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(660);
delayMicroseconds(1640);
pulseIR(680);
delayMicroseconds(1680);
pulseIR(660);
delayMicroseconds(1640);
pulseIR(680);
delayMicroseconds(1620);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(680);
delayMicroseconds(1640);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(700);
delayMicroseconds(460);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(700);
delayMicroseconds(480);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(600);
pulseIR(680);
delayMicroseconds(1660);
pulseIR(660);
delayMicroseconds(480);
pulseIR(700);
delayMicroseconds(460);
pulseIR(560);
delayMicroseconds(1780);
pulseIR(680);
delayMicroseconds(480);
pulseIR(660);
delayMicroseconds(1640);
pulseIR(700);
delayMicroseconds(1660);
pulseIR(540);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(620);
pulseIR(660);
delayMicroseconds(1660);
pulseIR(660);
delayMicroseconds(41140);
pulseIR(9460);
delayMicroseconds(2240);
pulseIR(680);
delayMicroseconds(33724);
pulseIR(9440);
delayMicroseconds(2220);
pulseIR(580);
delayMicroseconds(33804);
pulseIR(9460);
delayMicroseconds(2260);
pulseIR(660);
}
void LEDS_RED() {
  delayMicroseconds(35160);
pulseIR(220);
delayMicroseconds(64800);
pulseIR(260);
delayMicroseconds(52620);
pulseIR(140);
delayMicroseconds(17892);
pulseIR(180);
delayMicroseconds(64024);
pulseIR(120);
delayMicroseconds(864);
pulseIR(280);
delayMicroseconds(140);
pulseIR(220);
delayMicroseconds(25640);
pulseIR(220);
delayMicroseconds(30348);
pulseIR(140);
delayMicroseconds(10120);
pulseIR(180);
delayMicroseconds(10060);
pulseIR(180);
delayMicroseconds(11340);
pulseIR(140);
delayMicroseconds(34804);
pulseIR(120);
delayMicroseconds(32160);
pulseIR(120);
delayMicroseconds(1268);
pulseIR(120);
delayMicroseconds(1300);
pulseIR(140);
delayMicroseconds(27276);
pulseIR(120);
delayMicroseconds(26296);
pulseIR(9420);
delayMicroseconds(4600);
pulseIR(620);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(520);
pulseIR(620);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(560);
pulseIR(620);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(620);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(620);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(660);
delayMicroseconds(520);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(660);
delayMicroseconds(500);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(620);
delayMicroseconds(41220);
pulseIR(9440);
delayMicroseconds(2280);
pulseIR(580);
delayMicroseconds(33844);
pulseIR(9480);
delayMicroseconds(2200);
pulseIR(600);
delayMicroseconds(33844);
pulseIR(9480);
delayMicroseconds(2200);
pulseIR(580);
delayMicroseconds(44624);
pulseIR(120);
delayMicroseconds(280);
pulseIR(160);
delayMicroseconds(6248);
pulseIR(180);

}








void LEDS_POWER(){
  delayMicroseconds(8684);
pulseIR(180);
delayMicroseconds(42208);
pulseIR(220);
delayMicroseconds(40644);
pulseIR(120);
delayMicroseconds(42320);
pulseIR(140);
delayMicroseconds(40244);
pulseIR(9420);
delayMicroseconds(4580);
pulseIR(740);
delayMicroseconds(440);
pulseIR(620);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(500);
pulseIR(700);
delayMicroseconds(440);
pulseIR(800);
delayMicroseconds(400);
pulseIR(760);
delayMicroseconds(380);
pulseIR(660);
delayMicroseconds(500);
pulseIR(700);
delayMicroseconds(500);
pulseIR(620);
delayMicroseconds(1700);
pulseIR(640);
delayMicroseconds(1680);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(660);
delayMicroseconds(1660);
pulseIR(680);
delayMicroseconds(1640);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(660);
delayMicroseconds(1680);
pulseIR(660);
delayMicroseconds(1640);
pulseIR(720);
delayMicroseconds(440);
pulseIR(640);
delayMicroseconds(520);
pulseIR(740);
delayMicroseconds(440);
pulseIR(700);
delayMicroseconds(440);
pulseIR(640);
delayMicroseconds(540);
pulseIR(720);
delayMicroseconds(460);
pulseIR(720);
delayMicroseconds(1620);
pulseIR(700);
delayMicroseconds(420);
pulseIR(780);
delayMicroseconds(1580);
pulseIR(680);
delayMicroseconds(1620);
pulseIR(660);
delayMicroseconds(1680);
pulseIR(740);
delayMicroseconds(1580);
pulseIR(760);
delayMicroseconds(1560);
pulseIR(640);
delayMicroseconds(1700);
pulseIR(760);
delayMicroseconds(400);
pulseIR(640);
delayMicroseconds(1700);
pulseIR(740);
delayMicroseconds(41080);
pulseIR(9460);
delayMicroseconds(2260);
pulseIR(620);
delayMicroseconds(33844);
pulseIR(9440);
delayMicroseconds(2280);
pulseIR(620);
delayMicroseconds(25520);
pulseIR(180);
}

void LEDS_GREEN(){
  delayMicroseconds(34380);
pulseIR(140);
delayMicroseconds(51776);
pulseIR(140);
delayMicroseconds(20288);
pulseIR(180);
delayMicroseconds(36356);
pulseIR(180);
delayMicroseconds(16644);
pulseIR(140);
delayMicroseconds(21880);
pulseIR(220);
delayMicroseconds(37256);
pulseIR(240);
delayMicroseconds(12484);
pulseIR(140);
delayMicroseconds(6424);
pulseIR(240);
delayMicroseconds(64420);
pulseIR(180);
delayMicroseconds(24672);
pulseIR(9460);
delayMicroseconds(4540);
pulseIR(680);
delayMicroseconds(480);
pulseIR(700);
delayMicroseconds(480);
pulseIR(580);
delayMicroseconds(580);
pulseIR(680);
delayMicroseconds(480);
pulseIR(600);
delayMicroseconds(560);
pulseIR(680);
delayMicroseconds(500);
pulseIR(580);
delayMicroseconds(560);
pulseIR(700);
delayMicroseconds(460);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(680);
delayMicroseconds(1640);
pulseIR(680);
delayMicroseconds(1640);
pulseIR(700);
delayMicroseconds(1640);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(620);
pulseIR(560);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(560);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(600);
pulseIR(600);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(1760);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(600);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1800);
pulseIR(500);
delayMicroseconds(41880);
pulseIR(180);
delayMicroseconds(10896);
pulseIR(260);

}
