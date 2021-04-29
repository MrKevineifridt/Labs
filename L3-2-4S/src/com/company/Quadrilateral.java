package com.company;

/**
 * Quadrilateral class
 */
public class Quadrilateral {
    /**
     * Массив вершин
     */
    double[][] vertex = new double[4][2];
    /**
     * Площадь
     */
    double area = 0;
    /**
     * Периметр
     */
    double perimeter = 0;
    /**
     * Тип четырёхугольника
     */
    int type;// 1 - квадрат, 2 - прямоугольник, 3 - ромб, 4 - произвольный

    int i;

    /**
     * Конструктор
     */
    Quadrilateral(){
    super();
    }

    /**
     * Сеттер периметра
     * @param perimeter периметр
     */
    public void setPerimeter(double perimeter) {
        this.perimeter = perimeter;
    }

    /**
     * Сеттер площади
     * @param area площадь
     */
    public void setArea(double area) {
        this.area = area;
    }

    /**
     * Сеттер типа
     * @param type тип
     */
    public void setType(int type) {
        this.type = type;
    }

    /**
     * Геттер периметра
     * @return периметр
     */
    public double getPerimeter() {
        return perimeter;
    }

    /**
     * Геттер площади
     * @return площадь
     */
    public double getArea() {
        return area;
    }

    /**
     * Геттер типа
     * @return тип
     */
    public int getType() {
        return type;
    }
    public void setX(int i, double x){
        this.vertex[i][0] = x;
    }
    public void setY(int i, double y){
        this.vertex[i][0] = y;
    }

    public double getX(int i){
        return vertex[i][0];
    }

    public double getY(int i){
        return vertex[i][1];
    }

    @Override
    public String toString(){
        return "Quadrilateral " + i + " { "
                + "type=" + type
                + "; area=" + area
                + "; perimeter=" + perimeter
                + "; }";
    }
}