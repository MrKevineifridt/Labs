package com.company;

import java.util.Random;

public class Sitting extends Carriage{
    Sitting(){
        Random rnd = new Random();
        levelOfComfort = rnd.nextInt(6 - 3 + 1) + 3;
        maxPassengers = 60;
        passengers = rnd.nextInt(maxPassengers - 1 + 1) + 1;
        WeightOfLuggage = passengers * 8.7;
    }
}
