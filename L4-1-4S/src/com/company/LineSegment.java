package com.company;

public class LineSegment {
    public Point[] points = new Point[2];
    double length;

    LineSegment(){
        super();
    }

    public void setLength(double length) {
        this.length = length;
    }

    public double getLength() {
        return length;
    }
}

