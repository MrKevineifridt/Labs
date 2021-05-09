package com.company;

import java.util.Random;

public class BusinessClass extends Carriage{
    BusinessClass(){
        Random rnd = new Random();
        levelOfComfort = rnd.nextInt(10 - 8 + 1) + 8;
        maxPassengers = 8;
        passengers = rnd.nextInt(maxPassengers - 1 + 1) + 1;
        WeightOfLuggage = passengers * 5.1;
    }
}
