import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int codigo, soma1, soma2, soma3;
		
		soma1 = 0;
	    soma2 = 0;
	    soma3 = 0;

		System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
		codigo = sc.nextInt();
		
		while (codigo != 4)
	    {
	        if (codigo == 1)
	        {
	            soma1 = soma1 + 1;
	        }
	        else if (codigo == 2)
	        {
	            soma2 = soma2 + 1;
	        }
	        else if (codigo == 3)
	        {
	            soma3 = soma3 + 1;
	        }
	        
	        System.out.print("Informe um codigo (1, 2, 3) ou 4 para parar: ");
			codigo = sc.nextInt();
			
	    }
		
		System.out.println("MUITO OBRIGADO");
		System.out.println("Alcool: " + soma1);
		System.out.println("Gasolina: " + soma2);
		System.out.println("Diesel: " + soma3);
		
		sc.close();
		

	}

}
