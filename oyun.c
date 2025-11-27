#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int saglik = 100;
    int enerji = 100;
    int yemek = 3;
    int signak = 0;

    char komut;

    printf("=== HAYATTA KALMA SIMULATORU ===\n");
    printf("Komutlar: A (Avlan), S (Siginak ara), E (Envanter), R (Dinlen), F (Tehlike), P (Sifreli ilerleme), X (Cikis)\n\n");

    do {
        printf("\nKomut girin: ");
        scanf(" %c", &komut);

        switch (komut) {

            case 'A': {
                int sans;
                printf("\n--- Avlaniyorsun ---\n");

                enerji -= 10;
                if (enerji < 0) enerji = 0;

                sans = rand() % 100;

                if (sans < 50) {
                    yemek++;
                    printf("Av basarili! Yemek +1\n");
                } else {
                    printf("Av basarisiz.\n");
                }

                if (sans < 20) {
                    saglik -= 10;
                    printf("Yaralandin! Saglik -10\n");
                }
            }
            break;

            case 'S': {
                printf("\n--- Siginak Ariyorsun ---\n");

                if (enerji > 20 && saglik > 30) {
                    signak = 1;
                    printf("Siginak bulundu!\n");
                } else {
                    printf("Durumun zayif, siginak bulamadýn...\n");
                }
            }
            break;

            case 'E': {
                printf("\n--- ENVANTER ---\n");
                printf("Saglik: %d\n", saglik);
                printf("Enerji: %d\n", enerji);
                printf("Yemek: %d\n", yemek);
                printf("Siginak: %s\n", signak ? "Var" : "Yok");
            }
            break;

            case 'R': {
                printf("\n--- Dinleniyorsun ---\n");

                enerji += 15;
                saglik += 10;

                if (enerji > 100) enerji = 100;
                if (saglik > 100) saglik = 100;

                printf("Dinlendin: Saglik +10, Enerji +15\n");
            }
            break;

            case 'F': {
                int i;
                printf("\n--- TEHLIKE DALGASI BASLIYOR ---\n");

                for (i = 1; i <= 3; i++) {
                    printf("%d. Dalga! Saglik -5, Enerji -5\n", i);

                    saglik -= 5;
                    enerji -= 5;

                    if (saglik <= 0) {
                        printf("Oldun! Simulasyon sona erdi.\n");
                        komut = 'X';
                        break;
                    }
                }
            }
            break;

            case 'P': {
                char giris;
                printf("\n--- SIFRELI KAPI ---\n");

                do {
                    printf("Kapiyi acmak icin 'K' harfini gir: ");
                    scanf(" %c", &giris);
                } while (giris != 'K');

                printf("Kapidan gectin!\n");
            }
            break;

            case 'X':
                printf("\nOyundan cikiliyor...\n");
                break;

            default:
                printf("Gecersiz komut!\n");
        }

        if (saglik <= 0) {
            printf("Sagligin tükendi... Oldun.\n");
            break;
        }

    } while (komut != 'X');

    return 0;
}





	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

