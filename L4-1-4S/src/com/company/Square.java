package com.company;

import java.util.Locale;
import java.util.Scanner;

public class Square {
    static Scanner in = new Scanner(System.in);
    String color;
    public LineSegment[] segments = new LineSegment[4];
    public Square(){
        super();
    }

    public void generateSquare(double length, double x, double y){

        for(int i = 0; i < 4; i++) {
            segments[i] = new LineSegment();
            segments[i].points[0] = new Point();
            segments[i].points[1] = new Point();
        }
        in.useLocale(Locale.US);
        segments[0].setLength(length);
        segments[0].points[0].setX(x);
        segments[0].points[0].setY(y);
        segments[0].points[1].setX(segments[0].points[0].getX());
        segments[0].points[1].setY(segments[0].points[0].getY() + segments[0].getLength());
        segments[1].setLength(segments[0].getLength());
        segments[1].points[0].setX(segments[0].points[1].getX());
        segments[1].points[0].setY(segments[0].points[1].getY());
        segments[1].points[1].setX(segments[1].points[0].getX() + segments[1].getLength());
        segments[1].points[1].setY(segments[1].points[0].getY());
        segments[2].setLength(segments[0].getLength());
        segments[2].points[0].setX(segments[1].points[1].getX());
        segments[2].points[0].setY(segments[1].points[1].getY());
        segments[2].points[1].setX(segments[1].points[0].getX());
        segments[2].points[1].setY(segments[1].points[0].getY() - segments[2].getLength());
        segments[3].setLength(segments[0].getLength());
        segments[3].points[0].setX(segments[1].points[1].getX());
        segments[3].points[0].setY(segments[1].points[1].getY());
        segments[3].points[1].setX(segments[1].points[0].getX() - segments[3].getLength());
        segments[3].points[1].setY(segments[1].points[0].getY());
    }

    public void Stretch(double coefficient){
        double length = segments[0].getLength();
        segments[0].setLength(length * coefficient);
        segments[1].setLength(length * coefficient);
        segments[2].setLength(length * coefficient);
        segments[3].setLength(length * coefficient);
        segments[0].points[1].setX(segments[0].points[0].getX());
        segments[0].points[1].setY(segments[0].points[0].getY() + segments[0].getLength());
        segments[1].points[0].setX(segments[0].points[1].getX());
        segments[1].points[0].setY(segments[0].points[1].getY());
        segments[1].points[1].setX(segments[1].points[0].getX() + segments[1].getLength());
        segments[1].points[1].setY(segments[1].points[0].getY());
        segments[2].points[0].setX(segments[1].points[1].getX());
        segments[2].points[0].setY(segments[1].points[1].getY());
        segments[2].points[1].setX(segments[1].points[0].getX());
        segments[2].points[1].setY(segments[1].points[0].getY() - segments[2].getLength());
        segments[3].points[0].setX(segments[1].points[1].getX());
        segments[3].points[0].setY(segments[1].points[1].getY());
        segments[3].points[1].setX(segments[1].points[0].getX() - segments[3].getLength());
        segments[3].points[1].setY(segments[1].points[0].getY());
    }

    public void Compress(double coefficient){
        double length = segments[0].getLength();
        segments[0].setLength(length / coefficient);
        segments[1].setLength(length / coefficient);
        segments[2].setLength(length / coefficient);
        segments[3].setLength(length / coefficient);
        segments[0].points[1].setX(segments[0].points[0].getX());
        segments[0].points[1].setY(segments[0].points[0].getY() + segments[0].getLength());
        segments[1].points[0].setX(segments[0].points[1].getX());
        segments[1].points[0].setY(segments[0].points[1].getY());
        segments[1].points[1].setX(segments[1].points[0].getX() + segments[1].getLength());
        segments[1].points[1].setY(segments[1].points[0].getY());
        segments[2].points[0].setX(segments[1].points[1].getX());
        segments[2].points[0].setY(segments[1].points[1].getY());
        segments[2].points[1].setX(segments[1].points[0].getX());
        segments[2].points[1].setY(segments[1].points[0].getY() - segments[2].getLength());
        segments[3].points[0].setX(segments[1].points[1].getX());
        segments[3].points[0].setY(segments[1].points[1].getY());
        segments[3].points[1].setX(segments[1].points[0].getX() - segments[3].getLength());
        segments[3].points[1].setY(segments[1].points[0].getY());
    }

    public void Rotate(double angle){
        double x0, y0, x, y;
        x0 = segments[0].getLength() / 2 + segments[0].points[0].getX();
        y0 = segments[0].getLength() / 2 + segments[0].points[0].getY();

        x = segments[0].points[0].getX();
        y = segments[0].points[0].getY();
        segments[0].points[0].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[0].points[0].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));
        x = segments[0].points[1].getX();
        y = segments[0].points[1].getY();
        segments[0].points[1].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[0].points[1].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));

        x = segments[1].points[0].getX();
        y = segments[1].points[0].getY();
        segments[1].points[0].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[1].points[0].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));
        x = segments[1].points[1].getX();
        y = segments[1].points[1].getY();
        segments[1].points[1].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[1].points[1].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));

        x = segments[2].points[0].getX();
        y = segments[2].points[0].getY();
        segments[2].points[0].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[2].points[0].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));
        x = segments[2].points[1].getX();
        y = segments[2].points[1].getY();
        segments[2].points[1].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[2].points[1].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));

        x = segments[3].points[0].getX();
        y = segments[3].points[0].getY();
        segments[3].points[0].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[3].points[0].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));
        x = segments[3].points[1].getX();
        y = segments[3].points[1].getY();
        segments[3].points[1].setX(x0 + (x - x0) * Math.cos(angle) - (y - y0) * Math.sin(angle));
        segments[3].points[1].setY(y0 + (y - y0) * Math.cos(angle) + (x - x0) * Math.sin(angle));
    }

    public void setColor(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }
}
