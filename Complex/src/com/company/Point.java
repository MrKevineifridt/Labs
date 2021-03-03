package com.company;

public class Point {
    double Re, Im;

    public void setRe(double re) {
        Re = re;
    }

    public void setIm(double im) {
        Im = im;
    }

    public double getRe() {
        return Re;
    }

    public double getIm() {
        return Im;
    }

    @Override
    public String toString()
    {
        return "Point(" + Re + "," + Im + "i" + ")";
    }
}

