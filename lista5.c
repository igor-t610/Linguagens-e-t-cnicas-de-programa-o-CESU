#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void exercicio1() {
    int v[100];
    int i, j, aux;

    printf("\n EXERCICIO 1 \n");

    for (i = 0; i < 100; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nOrdem inversa da leitura:\n");
    for (i = 99; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    printf("\n\nOrdem decrescente:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");
}

void exercicio2() {
    double numero;
    int expoente = 0;

    printf("\nEXERCICIO 2\n");
    printf("Digite um numero positivo: ");
    scanf("%lf", &numero);

    while (numero >= 10) {
        numero = numero / 10;
        expoente++;
    }

    while (numero < 1) {
        numero = numero * 10;
        expoente--;
    }

    printf("Notacao cientifica: %.2lf x 10^%d\n", numero, expoente);
}

void exercicio3() {
    int n, binario[10];
    int i = 0;

    printf("\n EXERCICIO 3 \n");

    do {
        printf("Digite um numero positivo menor ou igual a 64: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 64);

    while (n > 0) {
        binario[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Numero em binario: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }

    printf("\n");
}

int maiorAB(int a, int b) {
    return (a + b + abs(a - b)) / 2;
}

void exercicio4() {
    int i, numero, maior;

    printf("\n--- EXERCICIO 4 ---\n");

    printf("Digite o numero 1: ");
    scanf("%d", &maior);

    for (i = 2; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        maior = maiorAB(maior, numero);
    }

    printf("%d eh o maior\n", maior);
}

int ehPrimo(int numero) {
    int i;

    if (numero <= 1) {
        return 0;
    }

    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }

    return 1;
}

void exercicio5() {
    int v[100];
    int i;

    printf("\n--- EXERCICIO 5 ---\n");

    for (i = 0; i < 100; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < 100; i++) {
        printf("\nNumero %d: ", v[i]);

        if (v[i] % 2 == 0) {
            printf("par e ");
        } else {
            printf("impar e ");
        }

        if (ehPrimo(v[i]) == 1) {
            printf("primo");
        } else {
            printf("nao primo");
        }
    }

    printf("\n");
}

void exercicio6() {
    double x1[10], y1[10], x2[10], y2[10];
    double distancia;
    int i;

    printf("\n--- EXERCICIO 6 ---\n");

    for (i = 0; i < 10; i++) {
        printf("\nPar de pontos %d\n", i + 1);

        printf("Digite x1: ");
        scanf("%lf", &x1[i]);

        printf("Digite y1: ");
        scanf("%lf", &y1[i]);

        printf("Digite x2: ");
        scanf("%lf", &x2[i]);

        printf("Digite y2: ");
        scanf("%lf", &y2[i]);

        distancia = sqrt((x2[i] - x1[i]) * (x2[i] - x1[i]) +
                         (y2[i] - y1[i]) * (y2[i] - y1[i]));

        printf("Distancia: %.2lf\n", distancia);
    }
}

void exercicio7() {
    int v[100];
    int i;
    int encontrou = 0;

    printf("\n--- EXERCICIO 7 ---\n");

    for (i = 0; i < 100; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nValores consecutivos encontrados:\n");

    for (i = 0; i < 99; i++) {
        if (v[i] + 1 == v[i + 1]) {
            printf("%d e %d\n", v[i], v[i + 1]);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nao foram encontrados valores consecutivos.\n");
    }
}

int main() {
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();

    return 0;
}
