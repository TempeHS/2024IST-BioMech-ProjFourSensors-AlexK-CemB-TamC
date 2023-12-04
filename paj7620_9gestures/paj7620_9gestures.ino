
#include "Gesture.h"

/*
    Notice: When you want to recognize the Forward/Backward gestures, your gestures' reaction time must less than GES_ENTRY_TIME(0.8s).
        You also can adjust the reaction time according to the actual circumstance.
*/
#define GES_REACTION_TIME		500				// You can adjust the reaction time according to the actual circumstance.
#define GES_ENTRY_TIME			800				// When you want to recognize the Forward/Backward gestures, your gestures' reaction time must less than GES_ENTRY_TIME(0.8s). 
#define GES_QUIT_TIME			1000

paj7620 Gesture;

void setup() {
  cemSetup ();
  alexSetup ();
  tamSetup ();

    Serial.begin(9600);
    while(!Serial) {
        
    }
    Serial.println("\nPAJ7620U2 TEST DEMO: Recognize 7 gestures.");
    
    if(Gesture.init()) {
        Serial.println("PAJ7620U2 initialization failed");
    } else {
        Serial.println("PAJ7620U2 initialization success");
    }
    Serial.println("Please input your gestures:\n");
}

void loop() {
    paj7620_gesture_t result;
    if (Gesture.getResult(result)) {
        switch (result) {
        case UP:
           
            Gesture.getResult(result);
            if (result == PUSH) {
                Serial.println("Forward");
               
            } else if (result == POLL) {
                Serial.println("Backward");
                
            } else {
                Serial.println("Up");
            }
            break;
        case DOWN:
            
            Gesture.getResult(result);
            if (result == PUSH) {
                Serial.println("Forward");
                
            } else if (result == POLL) {
                Serial.println("Backward");
              
            } else {
                Serial.println("Down");
            }
            break;
        case LEFT:
            
            Gesture.getResult(result);
            if (result == PUSH) {
                Serial.println("Forward");
                
            } else if (result == POLL) {
                Serial.println("Backward");
                
            } else {
                Serial.println("Left");
            }
            break;
        case RIGHT:
           
            Gesture.getResult(result);
            if (result == PUSH) {
                Serial.println("Forward");
               
            } else if (result == POLL) {
                Serial.println("Backward");
                
            } else {
                Serial.println("Right");
            }
            break;
        case PUSH:
            Serial.println("Forward");
            
            break;
        case POLL:
            Serial.println("Backward");
            
            break;
        case CLOCKWISE:
            Serial.println("Clockwise");
            break;
        case ANTI_CLOCKWISE:
            Serial.println("anti-clockwise");
            break;
        case WAVE:
            Serial.println("wave");
            break;
        default:
            break;
        }
    }
    
}

