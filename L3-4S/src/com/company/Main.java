package com.company;

import java.util.Scanner;

/**
 * Main Class
 */
public class Main {
    /**
     * Количество Объектов
     */
    public static int n;
    /**
     * Массив объектов
     */
    public static Car[] cars;

    /**
     * case 1
     * @param in Scanner
     */
    public static void case1(Scanner in){
        String Brand;
        System.out.print("Введите Марку: ");
        Brand = in.next();
        for(int i = 0; i < n; i++){
            if(cars[i].getBrand().equals(Brand)){
                System.out.println(cars[i].toString());
            }
        }
    }

    /**
     * case 2
     * @param in Scanner
     */
    public static void case2(Scanner in){
        String Model;
        int Year;
        System.out.print("Введите Модель: ");
        Model = in.next();
        System.out.print("Введите Год: ");
        Year = in.nextInt();
        for(int i = 0; i < n; i++) {
            if (cars[i].getModel().equals(Model)) {
                if(2021 - cars[i].getYear()>Year){
                    System.out.println(cars[i].toString());
                }
            }
        }
    }

    /**
     * case 3
     * @param in Scanner
     */
    public static void case3(Scanner in){
        int Price;
        int Year;
        System.out.print("Введите Год: ");
        Year = in.nextInt();
        System.out.print("Введите Сравниваемую Цену: ");
        Price = in.nextInt();
        for(int i = 0; i < n; i++) {
            if (cars[i].getYear() == Year) {
                if(cars[i].getPrice() > Price){
                    System.out.println(cars[i].toString());
                }
            }
        }
    }
    /**
     * main
     * @param args Параметр Строки
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Введите количество машин: ");
        n = in.nextInt();
        cars = new Car[n];
        for(int i = 0; i < n; i++){
            cars[i] = new Car();
            System.out.print("ID: ");
            cars[i].setID(in.nextInt());
            System.out.print("Brand: ");
            cars[i].setBrand(in.next());
            System.out.print("Model: ");
            cars[i].setModel(in.next());
            System.out.print("Year: ");
            cars[i].setYear(in.nextInt());
            System.out.print("Color: ");
            cars[i].setColor(in.next());
            System.out.print("Price: ");
            cars[i].setPrice(in.nextInt());
            System.out.print("RegNum: ");
            cars[i].setRegNum(in.next());
        }
        boolean flag = true;
        int choice;
        while(flag){
            System.out.print("""
                    0.Выход
                    1.Список Автомобилей Заданной Марки
                    2.список автомобилей заданной модели, которые эксплуатируются больше n лет
                    3.список автомобилей заданного года выпуска, цена которых больше указанной.
                    """);
            choice = in.nextInt();
            switch (choice) {
                case 0 -> flag = false;
                case 1 -> case1(in);
                case 2 -> case2(in);
                case 3 -> case3(in);
            }
        }
    }
}
