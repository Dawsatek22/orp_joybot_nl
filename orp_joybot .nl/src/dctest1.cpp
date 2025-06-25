
// dit is een code om L9110S motor driver te testen.

#include <iostream> // standaard input output header.
#include <wiringPi.h> // for meer info over  wiringPi(the gpio library)
//link is hier : https://github.com/WiringPi/WiringPi
// engelse documentatie is hier: https://github.com/WiringPi/WiringPi/blob/master/documentation/english/functions.md
// als je problemen hebt met toegang tot gpios dit kan helpen: https://www.reddit.com/r/raspberry_pi/comments/194qhwc/gpionext_error_no_access_todevmem/

//dit zijn de output pins voor de hbridge hieronder.
int ia2 = 14;
int ib2 = 15;
int ia1 = 18;
int ib1 = 23;




using namespace std; // om de code korter te maken.

//hieronder zijn de functies voor de  motor directies.

void right(){

    digitalWrite(ia1,LOW);
    digitalWrite(ia2,LOW);
    digitalWrite(ib1,LOW);
    digitalWrite(ib2,HIGH);
    cout << "Robot moves rightwards"<< '\n';
}


void left(){

    digitalWrite(ia1,HIGH);
    digitalWrite(ia2,LOW);
    digitalWrite(ib1,LOW);
    digitalWrite(ib2,LOW);
    cout << "Robot moves leftwards"<< '\n';
}

void backward(){

    digitalWrite(ia1,HIGH);
    digitalWrite(ia2,LOW);
    digitalWrite(ib1,LOW);
    digitalWrite(ib2,HIGH);
    cout << "Robot moves backwards"<< '\n';
}

void forward(){

    digitalWrite(ia1,LOW);
    digitalWrite(ia2,HIGH);
    digitalWrite(ib1,HIGH);
    digitalWrite(ib2,LOW);
    cout << "Robot moves forward"<< '\n';
}


void stop(){

    digitalWrite(ia1,LOW);
    digitalWrite(ia2,LOW);
    digitalWrite(ib1,LOW);
    digitalWrite(ib2,LOW);
    cout << "Robot stops"<< '\n';
}
int main() {

wiringPiSetupGpio(); // gpio pins zijn setup in de bcm numbering.

// de pins zijn gezet in  output pins.
pinMode(ia1,OUTPUT);
pinMode(ia2,OUTPUT);
pinMode(ib1,OUTPUT);
pinMode(ib2,OUTPUT);

// nu de motor directies worden getest.

   forward();

   delay(500);
   stop();
   delay(2000);
   backward();

   delay(500);
   stop();
   delay(2000);


   left();

   delay(500);
   stop();
   delay(2000);


   right();

   delay(500);
   stop();
   delay(2000);

}


