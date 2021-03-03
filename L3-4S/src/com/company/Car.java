package com.company;

/**
 * Class Car
 */
public class Car {
    /**
     * ID
     */
    int ID;
    /**
     * Марка
     */
    String Brand;
    /**
     * Модель
     */
    String Model;
    /**
     * Год Выпуска
     */
    int Year;
    /**
     * Цвет
     */
    String Color;
    /**
     * Цена
     */
    int Price;
    /**
     * Регистрационный Номер
     */
    String RegNum;

    /**
     * Конструктор
     */
    public Car(){
        super();
    }

    /**
     * сеттер ID
     * @param ID ID машины
     */
    public void setID(int ID) {
        this.ID = ID;
    }

    /**
     * Сеттер Brand
     * @param brand Brand Машины
     */
    public void setBrand(String brand) {
        Brand = brand;
    }

    /**
     * Сеттер Model
     * @param model Model Машины
     */
    public void setModel(String model) {
        Model = model;
    }

    /**
     * Сеттер Year
     * @param year Год Выпуска Машины
     */
    public void setYear(int year) {
        Year = year;
    }

    /**
     * Сеттер Color
     * @param color Цвет Машины
     */
    public void setColor(String color) {
        Color = color;
    }

    /**
     * Сеттер Price
     * @param price Цена Машины
     */
    public void setPrice(int price) {
        Price = price;
    }

    /**
     * Сеттер RegNum
     * @param regNum регистрационный номер машины
     */
    public void setRegNum(String regNum) {
        RegNum = regNum;
    }

    /**
     * Геттер ID
     * @return возврат ID
     */
    public int getID() {
        return ID;
    }

    /**
     * Геттер Brand
     * @return Возврат Brand
     */
    public String getBrand() {
        return Brand;
    }

    /**
     * Геттер Model
     * @return Возврат Model
     */
    public String getModel() {
        return Model;
    }

    /**
     * Геттер Year
     * @return Возврат Year
     */
    public int getYear() {
        return Year;
    }

    /**
     * Геттер Price
     * @return Возврат Price
     */
    public int getPrice() {
        return Price;
    }

    /**
     * Геттер Color
     * @return Возврат Color
     */
    public String getColor() {
        return Color;
    }

    /**
     * Геттер RegNum
     * @return Возврат RegNum
     */
    public String getRegNum() {
        return RegNum;
    }

    /**
     * Вывод информации
     * @return Возврат информации
     */
    @Override
    public String toString(){
        return "Car{"
                + "ID = " + ID
                + ", Brand = '" + Brand
                + "', Model = '" + Model
                + "', Year = " + Year
                + ", Color = '" + Color
                + "', Price = " + Price
                + ", RegNum = '" + RegNum
                + "'}";
    }
}
