package com.company;

public class Carriage {
    int passengers, maxPassengers, levelOfComfort;
    double WeightOfLuggage;
    Carriage(){
        super();
    }

    public int getPassengers() {
        return passengers;
    }

    public int getMaxPassengers() {
        return maxPassengers;
    }

    public double getWeightOfLuggage() {
        return WeightOfLuggage;
    }

    public int getLevelOfComfort() {
        return levelOfComfort;
    }

    @Override
    public String toString() {
        return "Carriage{" +
                "passengers=" + passengers +
                ", maxPassengers=" + maxPassengers +
                ", levelOfComfort=" + levelOfComfort +
                ", WeightOfLuggage=" + WeightOfLuggage +
                '}';
    }
}
