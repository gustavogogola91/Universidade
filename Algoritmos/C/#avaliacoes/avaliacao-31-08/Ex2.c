#include <stdio.h>

int main () {
	
	float distancia, consumo_medio, preco_gasolina, qtd_dinheiro, litros_necessarios, custo_estimado;
	
	printf("Insira a distancia da viagem em Km: ");
	scanf("%f", &distancia);
	
	printf("Insira o consumo medio de combustivel do carro(Km/l): ");
	scanf("%f", &consumo_medio);
	
	printf("Insira o preco do litro da gasolina: ");
	scanf("%f", &preco_gasolina);
	
	printf("Insira a quantidade de dinheiro disponivel: ");
	scanf("%f", &qtd_dinheiro);
	
	litros_necessarios = distancia / consumo_medio;
	
	custo_estimado = litros_necessarios * preco_gasolina;
	
	printf("Combustivel necessario: %.1f L\nCusto estimado para a viagem: R$ %.2f\n", litros_necessarios, custo_estimado);
	
	if (custo_estimado <= qtd_dinheiro) {
		printf("Voce tem dinheiro suficiente para esta viagem.\nBoas ferias!");
	} else {
		printf("Voce ainda nao tem dinheiro suficiente para viajar, faltam R$ %.2f", custo_estimado-qtd_dinheiro);
	}
}
