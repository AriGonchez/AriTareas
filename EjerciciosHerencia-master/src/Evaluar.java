import static org.junit.Assert.*;

import org.junit.Test;

public class Evaluar {

	@Test
	public void cuerpoEstelarTest() {
		CuerpoEstelar cuerpo_estelar = new CuerpoEstelar(10, 20);
		assertEquals("", 10, cuerpo_estelar.posicion);
		assertEquals("", 20, cuerpo_estelar.masa);
		
		CuerpoEstelar cuerpo_estelar2 = new CuerpoEstelar(100, 200);
		assertEquals("", 100, cuerpo_estelar2.posicion);
		assertEquals("", 200, cuerpo_estelar2.masa);
	}
	
	@Test
	public void estrellaTest() {
		Estrella estrella = new Estrella(10, 20,30);
		assertEquals("", 10, estrella.posicion);
		assertEquals("", 20, estrella.masa);
		assertEquals("", 30, estrella.luminosidad);
		
		Estrella estrella2 = new Estrella(100, 200,300);
		assertEquals("", 100, estrella2.posicion);
		assertEquals("", 200, estrella2.masa);
		assertEquals("", 300, estrella2.luminosidad);
	}
	
	@Test
	public void planetaTest() {
		Planeta planeta = new Planeta(10, 20, true, 40);
		assertEquals("", 10, planeta.posicion);
		assertEquals("", 20, planeta.masa);
		assertEquals("", true, planeta.es_habitable);
		assertEquals("", 40, planeta.especies_conocidas);
		
		Planeta planeta2 = new Planeta(100, 200, false, 400);
		assertEquals("", 100, planeta2.posicion);
		assertEquals("", 200, planeta2.masa);
		assertEquals("", false, planeta2.es_habitable);
		assertEquals("", 400, planeta2.especies_conocidas);
	}
	
	@Test
	public void planetaAsteroide() {
		Asteroide asteroide = new Asteroide(10, 20, 30);
		assertEquals("", 10, asteroide.posicion);
		assertEquals("", 20, asteroide.masa);
		assertEquals("", 30, asteroide.direccion);
		
		Asteroide asteroide2 = new Asteroide(100, 200, 300);
		assertEquals("", 100, asteroide2.posicion);
		assertEquals("", 200, asteroide2.masa);
		assertEquals("", 300, asteroide2.direccion);
	}

}
