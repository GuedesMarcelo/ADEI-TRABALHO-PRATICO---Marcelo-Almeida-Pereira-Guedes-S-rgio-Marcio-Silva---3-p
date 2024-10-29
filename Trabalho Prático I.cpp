#include <stdio.h>
#include <math.h>

void soma() {
    double a, b;
    printf("Digite dois números para somar: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a + b);
}
void multiplicacao() {
    double a, b;
    printf("Digite dois números para multiplicar: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a * b);
}
void subtracao() {
    double a, b;
    printf("Digite dois números para subtrair: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", a - b);
}
void divisao() {
    double a, b;
    printf("Digite dois números para dividir: ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Resultado: %.2lf\n", a / b);
    } else {
        printf("Erro: divisão por zero não é permitida.\n");
    }
}
void exponenciacao() {
    double base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%lf %lf", &base, &expoente);
    printf("Resultado: %.2lf\n", pow(base, expoente));
}
void raiz_quadrada() {
    double num;
    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%lf", &num);
    if (num >= 0) {
        printf("Resultado: %.2lf\n", sqrt(num));
    } else {
        printf("Erro: número negativo não possui raiz quadrada real.\n");
    }
}
void modulo() {
    double a, b;
    printf("Digite dois números para calcular o módulo: ");
    scanf("%lf %lf", &a, &b);
    printf("Resultado: %.2lf\n", fmod(a, b));
}
void bhaskara() {
    double a, b, c, delta, raiz1, raiz2;
    printf("Digite os coeficientes a, b e c da equação (ax^2 + bx + c = 0): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;  
    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes da equação são: %.2lf e %.2lf\n", raiz1, raiz2);
    }
}
int main() {
    int opcao;  
    do {
        printf("\n--- Calculadora Interativa ---\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Exponenciação\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Módulo\n");
        printf("8. Bhaskara\n");
        printf("9. Sair\n");
        printf("Escolha uma operação: ");
        scanf("%d", &opcao);

          switch(opcao) {
            case 1: soma(); break;
            case 2: subtracao(); break;
            case 3: multiplicacao(); break;
            case 4: divisao(); break;
            case 5: exponenciacao(); break;
            case 6: raiz_quadrada(); break;
            case 7: modulo(); break;
            case 8: bhaskara(); break;
            case 9: printf("Saindo da calculadora.\n"); break;
            default: printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 9); 

    return 0;
}

