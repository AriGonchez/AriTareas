
public class Circulo extends FiguraGeometrica {

	private double Radio;
	
	protected Circulo(String Color, double Radio){
		super(Color);
		this.Radio=Radio;
	}
	protected double getRadio(){
		return Radio;
	}
	protected void setRadio(double Radio){
		this.Radio=Radio;
	}
	protected double getArea(){
		return (Radio)*(Radio)*3.14;
	}
	
}
