package com.company;

/**
 * class point
 */
public class Point {
    /**
     * Re, Im - действительная и мнимая часть
     *
     */
    double Re, Im;

    /**
     * сеттер действительной части
     * @param re действительная часть
     */
    public void setRe(double re) {
        Re = re;
    }

    /**
     * сеттер мнимой части
     * @param im мнимая часть
     */
    public void setIm(double im) {
        Im = im;
    }

    /**
     * геттер действительной части
     * @return возврат действительной части
     */
    public double getRe() {
        return Re;
    }

    /**
     * геттер мнимой части
     * @return возврат мнимой части
     */
    public double getIm() {
        return Im;
    }
}

