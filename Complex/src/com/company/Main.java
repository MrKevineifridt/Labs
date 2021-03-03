package com.company;
import java.util.Scanner;
import java.util.Locale;

public class Main {
    /**
     *Количество точек
     */
    public static int n;

    public static double Calc(int i)
    {
        double dist = 0;
        dist = Math.sqrt(Math.pow(point[i].getRe(), 2) + Math.pow(point[i].getIm(), 2));
        return dist;
    }

    public static void case1 (){
        for(int i = 0; i < n; i++) {
            System.out.println("Расстояние до начала координат " + (i+1) + " точки = " + Calc(i));
        }
    }

    public static void CalcPoints(Scanner in)
    {
        int num1, num2;
        double distance;
        System.out.print("Введите номера двух точек: ");
        num1 = in.nextInt() - 1;
        num2 = in.nextInt() - 1;
        distance = Math.sqrt(Math.pow(point[num1].getRe() - point[num2].getRe(), 2)
               + Math.pow(point[num1].getIm() - point[num2].getIm(), 2));
        System.out.print(distance);
    }

    public static Point[] point;
    /**
     * main
     * @param args параметр строки
     */
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.useLocale(Locale.US);
        System.out.print("Введите количество точек: ");
        n = in.nextInt();
        point = new Point[n];
        for(int i = 0; i < n; i++){
            point[i] = new Point();
            System.out.print("Действительная часть " + (i+1) + " числа = ");
            point[i].setRe(in.nextDouble());
            System.out.print("Мнимая часть " + (i+1) + " числа = ");
            point[i].setIm(in.nextDouble());
        }

        boolean flag = true;
        int choice;
        while(flag) {
            System.out.println("""
                    0.Выход
                    1.Расстояние всех точек до начала координат
                    2.Расстояние между двумя заданными точками
                    """);
            choice = in.nextInt();
            switch (choice) {
                case 0 -> flag = false;
                case 1 -> case1();
                case 2 -> CalcPoints(in);
            }
        }
    }
}