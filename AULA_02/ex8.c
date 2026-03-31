/*
Leia usuC!rio e senha:
UsuC!rio correto: admin
Senha correta: 1234
Informe se o login foi bem-sucedido ou nC#o.
*/

#include <stdio.h>
#include <string.h>

int main() {
	//DECLARA VARIAVEL;
	char usuario[20];
	char senha[20];

	//PERGUNTA O USUARIO
	printf("Qual C) o usuario: ");
	scanf("%s", usuario);

	printf("Qual C) a senha: ");
	scanf("%s", senha);

	//VERIFICA O usuario e senha
	if(strcmp(usuario,"admin") == 0 && strcmp(senha, "1234") == 0) {

		printf("Usuario correto\n");
	}
	else {
		printf("Usuario incorreto\n");
	}






}


