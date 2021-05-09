package com.company;

public class Train {
    int numOfBusiness, numOfCompartment, numOfSitting;
    BusinessClass[] businessClasses;
    Compartment[] compartments;
    Sitting[] sittings;
    Train(){
        super();
    }

    public void setNumOfBusiness(int numOfBusiness) {
        this.numOfBusiness = numOfBusiness;
    }

    public void setNumOfCompartment(int numOfCompartment) {
        this.numOfCompartment = numOfCompartment;
    }

    public void setNumOfSitting(int numOfSitting) {
        this.numOfSitting = numOfSitting;
    }

    public int getNumOfBusiness() {
        return numOfBusiness;
    }

    public int getNumOfCompartment() {
        return numOfCompartment;
    }

    public int getNumOfSitting() {
        return numOfSitting;
    }
    void CreateTrain(){
        businessClasses = new BusinessClass[numOfBusiness];
        compartments = new Compartment[numOfCompartment];
        sittings = new Sitting[numOfSitting];
        for (int i = 0; i < numOfBusiness; i++){
            businessClasses[i] = new BusinessClass();
        }
        for (int i = 0; i < numOfSitting; i++){
            sittings[i] = new Sitting();
        }
        for (int i = 0; i < numOfCompartment; i++){
            compartments[i] = new Compartment();
        }
    }
}
