package com.company;

import java.net.SocketTimeoutException;
import java.sql.SQLOutput;
import java.util.Scanner;

public class Main {
    static Scanner in = new Scanner(System.in);
    static Train train = new Train();
    static int passengers = 0;
    static double weight = 0;

    static void countPassengers(){
        for (int i = 0; i < train.numOfBusiness; i++){
            passengers += train.businessClasses[i].getPassengers();
        }
        for (int i = 0; i < train.numOfCompartment; i++){
            passengers += train.compartments[i].getPassengers();
        }
        for (int i = 0; i < train.numOfSitting; i++){
            passengers += train.sittings[i].getPassengers();
        }
        System.out.println("Общее количество пассажиров равно " + passengers);
    }

    static void outCarriage(){
        for (int i = 0; i < train.numOfBusiness; i++){
            System.out.println(train.businessClasses[i].toString());
        }
        for (int i = 0; i < train.numOfCompartment; i++){
            System.out.println(train.compartments[i].toString());
        }
        for (int i = 0; i < train.numOfSitting; i++){
            System.out.println(train.sittings[i].toString());
        }
    }

    static void luggageWeight(){
        for (int i = 0; i < train.numOfBusiness; i++){
            weight += train.businessClasses[i].getWeightOfLuggage();
        }
        for (int i = 0; i < train.numOfCompartment; i++){
            weight += train.compartments[i].getWeightOfLuggage();
        }
        for (int i = 0; i < train.numOfSitting; i++){
            weight += train.sittings[i].getWeightOfLuggage();
        }
        System.out.println("Общий вес багажа во всех вагонах " + weight + " кг");
    }

    static void sort(){
        for (int i = 0; i < train.numOfBusiness - 1; i++){
            for (int j = 0; j < train.getNumOfBusiness() - i - 1; j++){
                if (train.businessClasses[j].getLevelOfComfort() > train.businessClasses[j + 1].getLevelOfComfort()){
                    BusinessClass temp;
                    temp = train.businessClasses[j];
                    train.businessClasses[j] = train.businessClasses[j + 1];
                    train.businessClasses[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < train.numOfCompartment - 1; i++){
            for (int j = 0; j < train.getNumOfCompartment() - i - 1; j++){
                if (train.compartments[j].getLevelOfComfort() > train.compartments[j + 1].getLevelOfComfort()){
                    Compartment temp;
                    temp = train.compartments[j];
                    train.compartments[j] = train.compartments[j + 1];
                    train.compartments[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < train.numOfSitting - 1; i++){
            for (int j = 0; j < train.getNumOfSitting() - i - 1; j++){
                if (train.sittings[j].getLevelOfComfort() > train.sittings[j + 1].getLevelOfComfort()){
                    Sitting temp;
                    temp = train.sittings[j];
                    train.sittings[j] = train.sittings[j + 1];
                    train.sittings[j + 1] = temp;
                }
            }
        }
        outCarriage();
    }

    static void findTrain(){
        int idBusiness = -1, idCompartment = -1, idSitting = -1;
        int maxPassengers, minPassengers;
        System.out.println("Введите диапазон числа пассажиров: ");
        minPassengers = in.nextInt();
        maxPassengers = in.nextInt();
        for (int i = 0; i < train.numOfBusiness; i++){
            if(train.businessClasses[i].getPassengers() > minPassengers && train.businessClasses[i].getPassengers() < maxPassengers){
                idBusiness = i;
            }
            if (idBusiness != -1)
                break;
        }
        for (int i = 0; i < train.numOfCompartment; i++){
            if(train.compartments[i].getPassengers() > minPassengers && train.compartments[i].getPassengers() < maxPassengers){
                idCompartment = i;
            }
            if (idCompartment != -1)
                break;
        }
        for (int i = 0; i < train.numOfSitting; i++){
            if(train.sittings[i].getPassengers() > minPassengers && train.sittings[i].getPassengers() < maxPassengers){
                idSitting = i;
            }
            if (idSitting != -1)
                break;
        }
        if (idBusiness != -1){
            System.out.println("Среди вагонов заданного числа пассажиров");
            System.out.println(train.businessClasses[idBusiness].toString() + "\n");
        }
        else
            System.out.println("Среди вагонов бизнесс-класса нет заданного количества пассажиров");

        if (idCompartment != -1){
            System.out.println("Среди вагонов заданного числа пассажиров");
            System.out.println(train.compartments[idCompartment].toString() + "\n");
        }
        else
            System.out.println("Среди вагонов класса купе нет заданного количества пассажиров");

        if (idSitting != -1){
            System.out.println("Среди вагонов заданного числа пассажиров");
            System.out.println(train.sittings[idSitting].toString() + "\n");
        }
        else
            System.out.println("Среди сидячих вагонов нет заданного количества пассажиров");
        }

    public static void main(String[] args) {

        System.out.println("Введите количество вагонов бизнесс-класса: ");
        train.setNumOfBusiness(in.nextInt());
        System.out.println("Введите количество вагонов - купе: ");
        train.setNumOfCompartment(in.nextInt());
        System.out.println("Введите количество сидячих вагонов: ");
        train.setNumOfSitting(in.nextInt());
        train.CreateTrain();
        boolean flag = true;
        int choice;
        while(flag){
            System.out.println("""
                    0.Выход
                    1.Вывод Вагонов
                    2.Вычисление количества пассажиров
                    3.Сортировка вагонов по уровню комфортности
                    4.Вычисление веса багажа
                    5.Вагоны по диапазону пассажиров 
                    """);
            choice = in.nextInt();
            switch (choice){
                case 0 -> flag = false;
                case 1 -> outCarriage();
                case 2 -> countPassengers();
                case 3 -> sort();
                case 4 -> luggageWeight();
                case 5 -> findTrain();
            }
        }
    }
}
