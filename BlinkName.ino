// ------------
// Blink an LED
// ------------

// Red LED
int led1 = D7;
// Orange LED
int led2 = D4;
 

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

};


void flash(int led, int timer) {
    digitalWrite(led, HIGH);
    delay(timer);
    digitalWrite(led, LOW);
    delay(250);
};


void firstName() {
    
// L   
    flash(led1, 150);
    flash(led1, 500);
    flash(led1, 150);
    flash(led1, 150);
    
    delay(500);
    
// U   
    flash(led1, 150);
    flash(led1, 150);
    flash(led1, 500);
    
    delay(500);
    
 // K
    flash(led1, 500);
    flash(led1, 150);
    flash(led1, 500);
    
    delay(500);
    
 // E   
    flash(led1, 150);
    
    delay(500);

    delay(500);
}

void lastName() {
// L   
    flash(led2, 150);
    flash(led2, 500);
    flash(led2, 150);
    flash(led2, 150);
    
    delay(500);

// O   
    flash(led2, 500);
    flash(led2, 500);
    flash(led2, 500);
    
    delay(500);

// V   
    flash(led2, 150);
    flash(led2, 150);
    flash(led2, 150);
    flash(led2, 500);
    
    delay(500);
    
// E   
    flash(led2, 150);
    
    delay(500);
    
// K   
    flash(led2, 500);
    flash(led2, 150);
    flash(led2, 500);
    
    delay(500);
    
// I   
    flash(led2, 150);
    flash(led2, 150);
    
    delay(500);
    
// N   
    flash(led2, 500);
    flash(led2, 150);
    
    delay(500);
};


void loop() {
    
    firstName();
    lastName();
    
};
