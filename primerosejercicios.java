import java.util.Scanner;

public class ejercicio {
		public static void main(String[] args) {
		System.out.println("Bienvenido a los primeros ejercios de java");
		System.out.println("¿Cual quiere elegir?");
		Scanner scanner = new Scanner(System.in);
        int ejer = scanner.nextInt(); 

		switch (ejer) {
		case 1:
			System.out.println("elegio numeros pares del 0 al 100");
		for(int i = 0 ; i <=100 ; i++ ) {
			if(i%2== 0) {
				System.out.println(i);
			}
		}
		case 2:
			System.out.println("elegio numeros primos del 50 al 100 y sus divisores");
			int num
			for(int i = 0 ; 50 <=100 ; i++ ) {
				
				for (int j = 2; j <= Math.sqrt(num); j++) {
		            if (num % j == 0) {
		                esPrimo = false;
		                break;
		            }
		        }
			}
		
		
		}
			
		}
		}

