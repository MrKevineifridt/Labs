package test.flex;

import com.company.Square;
import org.testng.Assert;
import org.testng.annotations.Test;

public class SquareTest {
    @Test (description = "Проверка Stretch()")
    public void isStretched(){
        Square square = new Square();
        square.generateSquare(5, 1, 2);
        square.Stretch(3);
        double actual, expected;
        expected = 16;
        actual = square.segments[1].points[1].getX();
        Assert.assertEquals(actual, expected);
    }
    @Test (description = "Проверка Compress()")
    public void isCompressed(){
        Square square = new Square();
        square.generateSquare(5, 1, 2);
        square.Compress(3);
        double actual, expected;
        expected = 5.0/3.0+1;
        actual = square.segments[1].points[1].getX();
        Assert.assertEquals(actual, expected);
    }
    @Test (description = "Проверка Rotate()")
    public void isRotated(){
        Square square = new Square();
        square.generateSquare(5, 1, 2);
        square.Rotate(30);
        double actual, expected;
        expected = 3.5 + (6 - 3.5) * Math.cos(30) - (7 - 4.5) * Math.sin(30);
        actual = square.segments[1].points[1].getX();
        Assert.assertEquals(actual, expected);
    }
    @Test (description = "Проверка Color()")
    public void isColored(){
        Square square = new Square();
        square.generateSquare(5, 1, 2);
        square.setColor("Green");
        String actual, expected;
        expected = "Green";
        actual = square.getColor();
        Assert.assertEquals(actual, expected);
    }
}
