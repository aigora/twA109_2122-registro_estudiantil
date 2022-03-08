#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

typedef struct {
	int asig;
	int i;
	int op;
}Estudiante;

void menu_ppal(void);

int main() {
	setlocale(LC_CTYPE, "es-ES");
	Estudiante uno;
	menu_ppal();
}
void menu_ppal(void) {
	Estudiante uno;
	uno.op = 5;
	while (uno.op <= 5) {
		printf("=========Bienvenido a la ETSISDI=========\n\n");
		printf("\tSeleccione una opción: \n");
		printf("\n\t1.Perfil");
		printf("\n\t2.Asignaturas");
		printf("\n\t3.Entregas pendientes");
		printf("\n\t4.Expediente:");
		printf("\n\t5.Salir\n");
		scanf_s("%d", &uno.op);
		if (uno.op == 1) {
			system("cls");
			printf("Nombre: ");
			printf("\tNumero matricula: ");
			printf("\nClase: ");
			printf("\nCorreo institucional: \n\n");
		}
		if (uno.op == 2) {
			system("cls");
			printf("Seleccione la asignatura:");
			printf("\n1.Asignatura 1");
			printf("\n2.Asignatura 2");
			printf("\n3.Asignatura 3");
			printf("\n4.Asignatura 4");
			printf("\n5.Asignatura 5");
			scanf_s("%d", &uno.asig);
			if (uno.asig == 1) {
				printf("El siguiente examen es X\n");
				printf("No tienes tareas pendientes\n\n");
			}
			if (uno.asig == 2) {
				printf("El siguiente examen es X\n");
				printf("No tienes tareas pendientes\n\n");
			}
			if (uno.asig == 3) {
				printf("El siguiente examen es X\n");
				printf("No tienes tareas pendientes\n\n");
			}
			if (uno.asig == 4) {
				printf("El siguiente examen es X\n");
				printf("No tienes tareas pendientes\n\n");
			}
			if (uno.asig == 5) {
				printf("El siguiente examen es X\n");
				printf("No tienes tareas pendientes\n\n");
			}

		}
		if (uno.op == 3) {
			system("cls");
			printf("Tarea x --> fecha");
			printf("\nTarea y --> fecha\n\n");

		}
		if (uno.op == 4) {
			system("cls");
			printf("Créditos obtenidos: \n\n");

		}
		if (uno.op == 5) {
			printf("Hasta la próxima.\n\n");

		}
		if (uno.op > 5) {
			printf("\nIndique una opción de las indicadas: \n\n");
			uno.op = 5;
		}
	}
}