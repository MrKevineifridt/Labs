package com.company;

import java.util.Random;

public class Compartment extends Carriage{
    Compartment(){
        Random rnd = new Random();
        levelOfComfort = rnd.nextInt(8 - 6 + 1) + 4;
        maxPassengers = 36;
        passengers = rnd.nextInt(maxPassengers - 1 + 1) + 1;
        WeightOfLuggage = passengers * 12.3;
    }
}
