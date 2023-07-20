#pragma once

#include <iostream>
#include <cstdlib>
#include "Form2.h"

using namespace::std;
using namespace System::Runtime::InteropServices;

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	inline bool isNumber(const string& str)
	{
		for (char const& c : str) {
			if (std::isdigit(c) == 0) return false;
		}
		return true;
	}

	inline bool prob_true(float prob)	// Función prob_true booleana, se inserta la probabilidad y saldrá 1 el prob% de las veces. INSERTAR PROBABILIDAD, NO PORCENTAJE
	{
		return rand() % 100 < (prob * 100);
	}

	inline int generar_num(int rango)	// Generar número aleatorio entre 1 y /rango/ a probabilidades iguales
	{
		int resultado = 1 + (rand() % rango);
		return resultado;
	}

	inline int mainStatReloj()
	{
		int editable = 1;
		int seleccionarStat;
		int elegirMainStat;
		while (editable == 1)
		{
			int statsComprobados[5] = { 0, 0, 0, 0, 0 };

			for (int i = 0; i < 5; i++)
			{
				seleccionarStat = generar_num(5);	// 1 Vida%, 2 ATK%, 3 DEF%, 4 RdE%, 5 ME
				int numRepetido = 1;

				while (numRepetido > 0)		// Asegurarse de que todos los stats se comprueben
				{
					numRepetido = 0;
					for (int j = 0; j < 5; j++)
					{
						if (seleccionarStat == statsComprobados[j])
						{
							numRepetido++;
						}
					}
					if (numRepetido > 0)
					{
						seleccionarStat = generar_num(5);
					}
				}
				statsComprobados[i] = seleccionarStat;

				if (seleccionarStat == 1)	// Vida%
				{
					int vidaP_MS = prob_true(0.2668);

					if (vidaP_MS == 1 && editable == 1)
					{
						elegirMainStat = 4;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 2)	// ATK%
				{
					int atkP_MS = prob_true(0.2666);

					if (atkP_MS == 1 && editable == 1)
					{
						elegirMainStat = 5;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 3)	// DEF%
				{
					int defP_MS = prob_true(0.2666);

					if (defP_MS == 1 && editable == 1)
					{
						elegirMainStat = 6;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 4)	// Recarga de energía%
				{
					int recEnP_MS = prob_true(0.1);

					if (recEnP_MS == 1 && editable == 1)
					{
						elegirMainStat = 8;
						editable = 0;
						return elegirMainStat;
					}
				}
				else	// Maestría elemental
				{
					int maesElem_MS = prob_true(0.1);

					if (maesElem_MS == 1 && editable == 1)
					{
						elegirMainStat = 7;
						editable = 0;
						return elegirMainStat;
					}
				}
			}
		}
	}

	inline int mainStatCaliz()
	{
		int editable = 1;
		int seleccionarStat;
		int elegirMainStat;
		while (editable == 1)
		{
			int statsComprobados[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

			for (int i = 0; i < 11; i++)
			{
				seleccionarStat = generar_num(11);	// 1 Vida%, 2 ATK%, 3 DEF%, 4 Pyro%, 5 Electro%, 6 Cryo%, 7 Hydro%, 8 Anemo%, 9 Geo%, 10 Físico%, 11 EM
				int numRepetido = 1;

				while (numRepetido > 0)		// Asegurarse de que todos los stats se comprueben
				{
					numRepetido = 0;
					for (int j = 0; j < 11; j++)
					{
						if (seleccionarStat == statsComprobados[j])
						{
							numRepetido++;
						}
					}
					if (numRepetido > 0)
					{
						seleccionarStat = generar_num(11);
					}
				}
				statsComprobados[i] = seleccionarStat;

				if (seleccionarStat == 1)	// Vida%
				{
					int vidaP_MS = prob_true(0.2125);

					if (vidaP_MS == 1 && editable == 1)
					{
						elegirMainStat = 4;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 2)	// ATK%
				{
					int atkP_MS = prob_true(0.2125);

					if (atkP_MS == 1 && editable == 1)
					{
						elegirMainStat = 5;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 3)	// DEF%
				{
					int defP_MS = prob_true(0.2);

					if (defP_MS == 1 && editable == 1)
					{
						elegirMainStat = 6;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 4)	// Pyro%
				{
					int pyroP_MS = prob_true(0.05);

					if (pyroP_MS == 1 && editable == 1)
					{
						elegirMainStat = 12;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 5)	// Electro%
				{
					int electroP_MS = prob_true(0.05);

					if (electroP_MS == 1 && editable == 1)
					{
						elegirMainStat = 13;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 6)	// Cryo%
				{
					int cryoP_MS = prob_true(0.05);

					if (cryoP_MS == 1 && editable == 1)
					{
						elegirMainStat = 14;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 7)	// Hydro%
				{
					int hydroP_MS = prob_true(0.05);

					if (hydroP_MS == 1 && editable == 1)
					{
						elegirMainStat = 15;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 8)	// Anemo%
				{
					int anemoP_MS = prob_true(0.05);

					if (anemoP_MS == 1 && editable == 1)
					{
						elegirMainStat = 16;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 9)	// Geo%
				{
					int geoP_MS = prob_true(0.05);

					if (geoP_MS == 1 && editable == 1)
					{
						elegirMainStat = 17;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 10)	// Físico%
				{
					int fisicoP_MS = prob_true(0.05);

					if (fisicoP_MS == 1 && editable == 1)
					{
						elegirMainStat = 18;
						editable = 0;
						return elegirMainStat;
					}
				}
				else	// Maestría elemental
				{
					int maesElem_MS = prob_true(0.025);

					if (maesElem_MS == 1 && editable == 1)
					{
						elegirMainStat = 7;
						editable = 0;
						return elegirMainStat;
					}
				}
			}
		}
	}

	inline int mainStatTiara()
	{
		int editable = 1;
		int seleccionarStat;
		int elegirMainStat;
		while (editable == 1)
		{
			int statsComprobados[7] = { 0, 0, 0, 0, 0, 0, 0 };

			for (int i = 0; i < 7; i++)
			{
				seleccionarStat = generar_num(7);	// 1 Vida%, 2 ATK%, 3 DEF%, 4 Prob. CRIT%, 5 Daño CRIT%, 6 Bono de curación%, 7 EM
				int numRepetido = 1;

				while (numRepetido > 0)		// Asegurarse de que todos los stats se comprueben
				{
					numRepetido = 0;
					for (int j = 0; j < 7; j++)
					{
						if (seleccionarStat == statsComprobados[j])
						{
							numRepetido++;
						}
					}
					if (numRepetido > 0)
					{
						seleccionarStat = generar_num(7);
					}
				}
				statsComprobados[i] = seleccionarStat;

				if (seleccionarStat == 1)	// Vida%
				{
					int vidaP_MS = prob_true(0.22);

					if (vidaP_MS == 1 && editable == 1)
					{
						elegirMainStat = 4;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 2)	// ATK%
				{
					int atkP_MS = prob_true(0.22);

					if (atkP_MS == 1 && editable == 1)
					{
						elegirMainStat = 5;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 3)	// DEF%
				{
					int defP_MS = prob_true(0.22);

					if (defP_MS == 1 && editable == 1)
					{
						elegirMainStat = 6;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 4)	// Prob. CRIT%
				{
					int pCritP_MS = prob_true(0.1);

					if (pCritP_MS == 1 && editable == 1)
					{
						elegirMainStat = 9;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 5)	// Daño CRIT%
				{
					int dCritP_MS = prob_true(0.1);

					if (dCritP_MS == 1 && editable == 1)
					{
						elegirMainStat = 10;
						editable = 0;
						return elegirMainStat;
					}
				}
				else if (seleccionarStat == 6)	// Bono de curación%
				{
					int curaP_MS = prob_true(0.1);

					if (curaP_MS == 1 && editable == 1)
					{
						elegirMainStat = 11;
						editable = 0;
						return elegirMainStat;
					}
				}
				else	// Maestría elemental
				{
					int maesElem_MS = prob_true(0.04);

					if (maesElem_MS == 1 && editable == 1)
					{
						elegirMainStat = 7;
						editable = 0;
						return elegirMainStat;
					}
				}
			}
		}
	}

	inline int generadorSubstats(int* elegirSubstatsAnteriores, int elegirMainStat)
	{
		if (elegirMainStat == 1 || elegirMainStat == 2)		// Si el main stat es vida o ATK (flor o pluma)
		{
			int editable = 1;
			int seleccionarStat;
			int elegirSubStat;
			while (editable == 1)
			{
				int statsComprobados[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
				int statsCorrectos = 0;

				for (int i = 0; i < 9; i++)
				{
					seleccionarStat = generar_num(9);	// 1 ATK || 1 Vida, 2 DEF, 3 Vida%, 4 ATK%, 5 DEF%, 6 RdE%, 7 EM, 8 Prob. CRIT% y 9 Daño CRIT%
					int numRepetido = 1;
					int ind = 0;
					int acabarBucle = 0;

					while (numRepetido > 0 && acabarBucle == 0)		// Asegurarse de que todos los stats se comprueben
					{
						numRepetido = 0;
						for (int j = 0; j < 9; j++)
						{
							if (seleccionarStat == statsComprobados[j])
							{
								numRepetido++;
							}
							else if (seleccionarStat == elegirSubstatsAnteriores[ind])	// Comprobar substats anteriores
							{
								numRepetido++;
							}
							if (ind < 3)
							{
								ind++;
							}
						}
						if (numRepetido > 0)
						{
							seleccionarStat = generar_num(9);
							ind = 0;
						}
						for (int k = 0; k < 9; k++)
						{
							if (statsComprobados[k] == 1 || statsComprobados[k] == 2 || statsComprobados[k] == 3 || statsComprobados[k] == 4 || statsComprobados[k] == 5 || statsComprobados[k] == 6 || statsComprobados[k] == 7 || statsComprobados[k] == 8 || statsComprobados[k] == 9)
							{
								statsCorrectos++;
							}
							if (k <= 3)
							{
								if (elegirSubstatsAnteriores[k] == 1 || elegirSubstatsAnteriores[k] == 2 || elegirSubstatsAnteriores[k] == 3 || elegirSubstatsAnteriores[k] == 4 || elegirSubstatsAnteriores[k] == 5 || elegirSubstatsAnteriores[k] == 6 || elegirSubstatsAnteriores[k] == 7 || elegirSubstatsAnteriores[k] == 8 || elegirSubstatsAnteriores[k] == 9)
								{
									statsCorrectos++;
								}
							}
						}
						if (statsCorrectos == 9)
						{
							acabarBucle = 1;
							statsCorrectos = 0;
							seleccionarStat = 0;
							numRepetido = 0;
						}
						else
						{
							statsCorrectos = 0;
						}
					}
					if (acabarBucle == 0)
					{
						statsComprobados[i] = seleccionarStat;
					}
					if (seleccionarStat == 1)	// ATK || Vida (ATK si es flor y Vida si es pluma, eso se arregla en otra función)
					{
						int atkVida_SS = prob_true(0.1579);

						if (atkVida_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 2)	// DEF
					{
						int def_SS = prob_true(0.1579);

						if (def_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 3)	// Vida%
					{
						int vidaP_SS = prob_true(0.1053);

						if (vidaP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 4)	// ATK%
					{
						int atkP_SS = prob_true(0.1053);

						if (atkP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 5)	// DEF%
					{
						int defP_SS = prob_true(0.1053);

						if (defP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 6)	// RdE%
					{
						int recEnP_SS = prob_true(0.1053);

						if (recEnP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 7)	// Maestría elemental
					{
						int maesElem_SS = prob_true(0.1053);

						if (maesElem_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 8)	// Prob. CRIT%
					{
						int pCritP_SS = prob_true(0.0789);

						if (pCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 9)	// Daño CRIT%
					{
						int dCritP_SS = prob_true(0.0789);

						if (dCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
				}
			}
		}
		else if (elegirMainStat == 4 || elegirMainStat == 5 || elegirMainStat == 6 || elegirMainStat == 8 || elegirMainStat == 7)	// Si el main stat es Vida%, ATK%, DEF%, RdE% o EM (reloj, cáliz o tiara)
		{
			int editable = 1;
			int seleccionarStat;
			int elegirSubStat;
			while (editable == 1)
			{
				int statsComprobados[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
				int statsCorrectos = 0;

				for (int i = 0; i < 9; i++)
				{
					seleccionarStat = generar_num(9);	// 1 Vida, 2 ATK, 3 DEF, 4 ATK% || Vida% (ATK% si MS=Vida%, Vida% si todo lo demás), 5 DEF% || ATK% (DEF% si MS=Vida% o ATK%, ATK% si todo lo demás), 6 RdE% || DEF% (DEF% si MS=RdE% o EM, RdE% si todo lo demás), 7 EM || RdE% (RdE% si MS=EM, EM si todo lo demás), 8 Prob. CRIT% y 9 Daño CRIT%
					int numRepetido = 1;
					int ind = 0;
					int acabarBucle = 0;

					while (numRepetido > 0 && acabarBucle == 0)		// Asegurarse de que todos los stats se comprueben
					{
						numRepetido = 0;
						for (int j = 0; j < 9; j++)
						{
							if (seleccionarStat == statsComprobados[j])
							{
								numRepetido++;
							}
							else if (seleccionarStat == elegirSubstatsAnteriores[ind])	// Comprobar substats anteriores
							{
								numRepetido++;
							}
							if (ind < 3)
							{
								ind++;
							}
						}
						if (numRepetido > 0)
						{
							seleccionarStat = generar_num(9);
							ind = 0;
						}
						for (int k = 0; k < 9; k++)
						{
							if (statsComprobados[k] == 1 || statsComprobados[k] == 2 || statsComprobados[k] == 3 || statsComprobados[k] == 4 || statsComprobados[k] == 5 || statsComprobados[k] == 6 || statsComprobados[k] == 7 || statsComprobados[k] == 8 || statsComprobados[k] == 9)
							{
								statsCorrectos++;
							}
							if (k <= 3)
							{
								if (elegirSubstatsAnteriores[k] == 1 || elegirSubstatsAnteriores[k] == 2 || elegirSubstatsAnteriores[k] == 3 || elegirSubstatsAnteriores[k] == 4 || elegirSubstatsAnteriores[k] == 5 || elegirSubstatsAnteriores[k] == 6 || elegirSubstatsAnteriores[k] == 7 || elegirSubstatsAnteriores[k] == 8 || elegirSubstatsAnteriores[k] == 9)
								{
									statsCorrectos++;
								}
							}
						}
						if (statsCorrectos == 9)
						{
							acabarBucle = 1;
							statsCorrectos = 0;
							seleccionarStat = 0;
							numRepetido = 0;
						}
						else
						{
							statsCorrectos = 0;
						}
					}
					if (acabarBucle == 0)
					{
						statsComprobados[i] = seleccionarStat;
					}
					if (seleccionarStat == 1)	// Vida
					{
						int vida_SS = prob_true(0.15);

						if (vida_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 2)	// ATK
					{
						int atk_SS = prob_true(0.15);

						if (atk_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 3)	// DEF
					{
						int def_SS = prob_true(0.15);

						if (def_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 4)	// ATK% || Vida% (ATK% si MS=Vida%, Vida% si todo lo demás)
					{
						int atkPvidaP_SS = prob_true(0.1);

						if (atkPvidaP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 5)	// DEF% || ATK% (DEF% si MS=Vida% o ATK%, ATK% si todo lo demás)
					{
						int defPatkP_SS = prob_true(0.1);

						if (defPatkP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 6)	// RdE% || DEF% (DEF% si MS=RdE% o EM, RdE% si todo lo demás)
					{
						int recEnPdefP_SS = prob_true(0.1);

						if (recEnPdefP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 7)	// EM || RdE% (RdE% si MS=EM, EM si todo lo demás)
					{
						int maesElemRecEnP_SS = prob_true(0.1);

						if (maesElemRecEnP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 8)	// Prob. CRIT%
					{
						int pCritP_SS = prob_true(0.075);

						if (pCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 9)	// Daño CRIT%
					{
						int dCritP_SS = prob_true(0.075);

						if (dCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
				}
			}
		}
		else if (elegirMainStat == 11 || elegirMainStat == 12 || elegirMainStat == 13 || elegirMainStat == 14 || elegirMainStat == 15 || elegirMainStat == 16 || elegirMainStat == 17 || elegirMainStat == 18)	// Si el main stat es Bono de daño elemental, físico o curativo (cáliz o tiara)
		{
			int editable = 1;
			int seleccionarStat;
			int elegirSubStat;
			while (editable == 1)
			{
				int statsComprobados[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
				int statsCorrectos = 0;

				for (int i = 0; i < 10; i++)
				{
					seleccionarStat = generar_num(10);	// 1 Vida, 2 ATK, 3 DEF, 4 Vida%, 5 ATK%, 6 DEF%, 7 RdE%, 8 EM, 9 Prob. CRIT% y 10 Daño CRIT%
					int numRepetido = 1;
					int ind = 0;
					int acabarBucle = 0;

					while (numRepetido > 0 && acabarBucle == 0)		// Asegurarse de que todos los stats se comprueben
					{
						numRepetido = 0;
						for (int j = 0; j < 10; j++)
						{
							if (seleccionarStat == statsComprobados[j])
							{
								numRepetido++;
							}
							else if (seleccionarStat == elegirSubstatsAnteriores[ind])	// Comprobar substats anteriores
							{
								numRepetido++;
							}
							if (ind < 3)
							{
								ind++;
							}
						}
						if (numRepetido > 0)
						{
							seleccionarStat = generar_num(10);
							ind = 0;
						}
						for (int k = 0; k < 10; k++)
						{
							if (statsComprobados[k] == 1 || statsComprobados[k] == 2 || statsComprobados[k] == 3 || statsComprobados[k] == 4 || statsComprobados[k] == 5 || statsComprobados[k] == 6 || statsComprobados[k] == 7 || statsComprobados[k] == 8 || statsComprobados[k] == 9 || statsComprobados[k] == 10)
							{
								statsCorrectos++;
							}
							if (k <= 3)
							{
								if (elegirSubstatsAnteriores[k] == 1 || elegirSubstatsAnteriores[k] == 2 || elegirSubstatsAnteriores[k] == 3 || elegirSubstatsAnteriores[k] == 4 || elegirSubstatsAnteriores[k] == 5 || elegirSubstatsAnteriores[k] == 6 || elegirSubstatsAnteriores[k] == 7 || elegirSubstatsAnteriores[k] == 8 || elegirSubstatsAnteriores[k] == 9 || elegirSubstatsAnteriores[k] == 10)
								{
									statsCorrectos++;
								}
							}
						}
						if (statsCorrectos == 10)
						{
							acabarBucle = 1;
							statsCorrectos = 0;
							seleccionarStat = 0;
							numRepetido = 0;
						}
						else
						{
							statsCorrectos = 0;
						}
					}
					if (acabarBucle == 0)
					{
						statsComprobados[i] = seleccionarStat;
					}
					if (seleccionarStat == 1)	// Vida
					{
						int vida_SS = prob_true(0.1364);

						if (vida_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 2)	// ATK
					{
						int atk_SS = prob_true(0.1364);

						if (atk_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 3)	// DEF
					{
						int def_SS = prob_true(0.1364);

						if (def_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 4)	// Vida%
					{
						int vidaP_SS = prob_true(0.0909);

						if (vidaP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 5)	// ATK%
					{
						int atkP_SS = prob_true(0.0909);

						if (atkP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 6)	// DEF%
					{
						int defP_SS = prob_true(0.0909);

						if (defP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 7)	// RdE%
					{
						int recEnP_SS = prob_true(0.0909);

						if (recEnP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 8)	// Maestría Elemental
					{
						int maesElem_SS = prob_true(0.0909);

						if (maesElem_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 9)	// Prob. CRIT%
					{
						int pCritP_SS = prob_true(0.0682);

						if (pCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 10)	// Daño CRIT%
					{
						int dCritP_SS = prob_true(0.0782);

						if (dCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
				}
			}
		}
		else if (elegirMainStat == 9 || elegirMainStat == 10)	// Si el main stat es prob. CRIT% o daño CRIT% (tiara)
		{
			int editable = 1;
			int seleccionarStat;
			int elegirSubStat;
			while (editable == 1)
			{
				int statsComprobados[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
				int statsCorrectos = 0;

				for (int i = 0; i < 9; i++)
				{
					seleccionarStat = generar_num(9);	// 1 Vida, 2 ATK, 3 DEF, 4 Vida%, 5 ATK%, 6 DEF%, 7 RdE%, 8 EM y 9 Prob. CRIT% || Daño CRIT (Prob. CRIT% si MS=Daño CRIT%, Daño CRIT% si todo lo demás)
					int numRepetido = 1;
					int ind = 0;
					int acabarBucle = 0;

					while (numRepetido > 0 && acabarBucle == 0)		// Asegurarse de que todos los stats se comprueben
					{
						numRepetido = 0;
						for (int j = 0; j < 9; j++)
						{
							if (seleccionarStat == statsComprobados[j])
							{
								numRepetido++;
							}
							else if (seleccionarStat == elegirSubstatsAnteriores[ind])	// Comprobar substats anteriores
							{
								numRepetido++;
							}
							if (ind < 3)
							{
								ind++;
							}
						}
						if (numRepetido > 0)
						{
							seleccionarStat = generar_num(9);
							ind = 0;
						}
						for (int k = 0; k < 9; k++)
						{
							if (statsComprobados[k] == 1 || statsComprobados[k] == 2 || statsComprobados[k] == 3 || statsComprobados[k] == 4 || statsComprobados[k] == 5 || statsComprobados[k] == 6 || statsComprobados[k] == 7 || statsComprobados[k] == 8 || statsComprobados[k] == 9)
							{
								statsCorrectos++;
							}
							if (k <= 3)
							{
								if (elegirSubstatsAnteriores[k] == 1 || elegirSubstatsAnteriores[k] == 2 || elegirSubstatsAnteriores[k] == 3 || elegirSubstatsAnteriores[k] == 4 || elegirSubstatsAnteriores[k] == 5 || elegirSubstatsAnteriores[k] == 6 || elegirSubstatsAnteriores[k] == 7 || elegirSubstatsAnteriores[k] == 8 || elegirSubstatsAnteriores[k] == 9)
								{
									statsCorrectos++;
								}
							}
						}
						if (statsCorrectos == 9)
						{
							acabarBucle = 1;
							statsCorrectos = 0;
							seleccionarStat = 0;
							numRepetido = 0;
						}
						else
						{
							statsCorrectos = 0;
						}
					}
					if (acabarBucle == 0)
					{
						statsComprobados[i] = seleccionarStat;
					}
					if (seleccionarStat == 1)	// Vida
					{
						int vida_SS = prob_true(0.1463);

						if (vida_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 2)	// ATK
					{
						int atk_SS = prob_true(0.1463);

						if (atk_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 3)	// DEF
					{
						int def_SS = prob_true(0.1463);

						if (def_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 4)	// Vida%
					{
						int vidaP_SS = prob_true(0.0976);

						if (vidaP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 5)	// ATK%
					{
						int atkP_SS = prob_true(0.0976);

						if (atkP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 6)	// DEF%
					{
						int defP_SS = prob_true(0.0976);

						if (defP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 7)	// RdE%
					{
						int recEnP_SS = prob_true(0.0976);

						if (recEnP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 8)	// Maestría Elemental
					{
						int maesElem_SS = prob_true(0.0976);

						if (maesElem_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
					else if (seleccionarStat == 9)	// Prob. CRIT% || Daño CRIT (Prob. CRIT% si MS=Daño CRIT%, Daño CRIT% si todo lo demás)
					{
						int pdCritP_SS = prob_true(0.0732);

						if (pdCritP_SS == 1 && editable == 1)
						{
							elegirSubStat = seleccionarStat;
							editable = 0;
							return elegirSubStat;
						}
					}
				}
			}
		}
	}

	inline int generarIDsVerdaderos(int indice, int* substatsFalsos, int elegirMainStat)
	{
		int subStatReal;

		if (elegirMainStat == 1 || elegirMainStat == 2)		// Si el main stat es vida o ATK (flor o pluma)
		{
			if (substatsFalsos[indice] == 1)	// 1 ATK || 1 Vida, 2 DEF, 3 Vida%, 4 ATK%, 5 DEF%, 6 RdE%, 7 EM, 8 Prob. CRIT% y 9 Daño CRIT%
			{
				if (elegirMainStat == 1)
				{
					subStatReal = 2;
					return subStatReal;
				}
				else if (elegirMainStat == 2)
				{
					subStatReal = 1;
					return subStatReal;
				}
			}
			else if (substatsFalsos[indice] == 2)
			{
				subStatReal = 3;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 3)
			{
				subStatReal = 4;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 4)
			{
				subStatReal = 5;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 5)
			{
				subStatReal = 6;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 6)
			{
				subStatReal = 8;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 7)
			{
				subStatReal = 7;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 8)
			{
				subStatReal = 9;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 9)
			{
				subStatReal = 10;
				return subStatReal;
			}
		}
		else if (elegirMainStat == 4 || elegirMainStat == 5 || elegirMainStat == 6 || elegirMainStat == 8 || elegirMainStat == 7)	// Si el main stat es Vida%, ATK%, DEF%, RdE% o EM (reloj, cáliz o tiara)
		{
			if (substatsFalsos[indice] == 1)	// 1 Vida, 2 ATK, 3 DEF, 4 ATK% || Vida% (ATK% si MS=Vida%, Vida% si todo lo demás), 5 DEF% || ATK% (DEF% si MS=Vida% o ATK%, ATK% si todo lo demás), 6 RdE% || DEF% (DEF% si MS=RdE% o EM, RdE% si todo lo demás), 7 EM || RdE% (RdE% si MS=EM, EM si todo lo demás), 8 Prob. CRIT% y 9 Daño CRIT%
			{
				subStatReal = 1;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 2)
			{
				subStatReal = 2;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 3)
			{
				subStatReal = 3;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 4)
			{
				if (elegirMainStat == 4)
				{
					subStatReal = 5;
					return subStatReal;
				}
				else
				{
					subStatReal = 4;
					return subStatReal;
				}
			}
			else if (substatsFalsos[indice] == 5)
			{
				if (elegirMainStat == 4 || elegirMainStat == 5)
				{
					subStatReal = 6;
					return subStatReal;
				}
				else
				{
					subStatReal = 5;
					return subStatReal;
				}
			}
			else if (substatsFalsos[indice] == 6)
			{
				if (elegirMainStat == 7 || elegirMainStat == 8)
				{
					subStatReal = 6;
					return subStatReal;
				}
				else
				{
					subStatReal = 8;
					return subStatReal;
				}
			}
			else if (substatsFalsos[indice] == 7)
			{
				if (elegirMainStat == 7)
				{
					subStatReal = 8;
					return subStatReal;
				}
				else
				{
					subStatReal = 7;
					return subStatReal;
				}
			}
			else if (substatsFalsos[indice] == 8)
			{
				subStatReal = 9;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 9)
			{
				subStatReal = 10;
				return subStatReal;
			}
		}
		else if (elegirMainStat == 11 || elegirMainStat == 12 || elegirMainStat == 13 || elegirMainStat == 14 || elegirMainStat == 15 || elegirMainStat == 16 || elegirMainStat == 17 || elegirMainStat == 18)	// Si el main stat es Bono de daño elemental, físico o curativo (cáliz o tiara)
		{
			if (substatsFalsos[indice] == 1)	// 1 Vida, 2 ATK, 3 DEF, 4 Vida%, 5 ATK%, 6 DEF%, 7 RdE%, 8 EM, 9 Prob. CRIT% y 10 Daño CRIT%
			{
				subStatReal = 1;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 2)
			{
				subStatReal = 2;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 3)
			{
				subStatReal = 3;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 4)
			{
				subStatReal = 4;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 5)
			{
				subStatReal = 5;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 6)
			{
				subStatReal = 6;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 7)
			{
				subStatReal = 8;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 8)
			{
				subStatReal = 7;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 9)
			{
				subStatReal = 9;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 10)
			{
				subStatReal = 10;
				return subStatReal;
			}
		}
		else if (elegirMainStat == 9 || elegirMainStat == 10)	// Si el main stat es prob. CRIT% o daño CRIT% (tiara)
		{
			if (substatsFalsos[indice] == 1)	// 1 Vida, 2 ATK, 3 DEF, 4 Vida%, 5 ATK%, 6 DEF%, 7 RdE%, 8 EM y 9 Prob. CRIT% || Daño CRIT (Prob. CRIT% si MS=Daño CRIT%, Daño CRIT% si todo lo demás)
			{
				subStatReal = 1;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 2)
			{
				subStatReal = 2;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 3)
			{
				subStatReal = 3;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 4)
			{
				subStatReal = 4;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 5)
			{
				subStatReal = 5;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 6)
			{
				subStatReal = 6;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 7)
			{
				subStatReal = 8;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 8)
			{
				subStatReal = 7;
				return subStatReal;
			}
			else if (substatsFalsos[indice] == 9)
			{
				if (elegirMainStat == 10)
				{
					subStatReal = 9;
					return subStatReal;
				}
				else if (elegirMainStat == 9)
				{
					subStatReal = 10;
					return subStatReal;
				}
			}
		}
	}

	inline void traduccionArtefactos(int elegirSet, int elegirPieza, int elegirMainStat, int elegirNumSubstats, int* elegirSubStats, int* elegirSubTiers, System::Windows::Forms::TextBox^ textBox1, int soloConclusion)
	{
		if (soloConclusion == 1)
		{
			return;
		}

		int porcFinal = 0;	// Imprimir un % al final
		textBox1->AppendText("( Set " + elegirSet + " | ");		// Imprimir set

		if (elegirPieza == 1)	// Imprimir pieza
		{
			textBox1->AppendText("Flor");
		}
		else if (elegirPieza == 2)
		{
			textBox1->AppendText("Pluma");
		}
		else if (elegirPieza == 3)
		{
			textBox1->AppendText("Reloj");
		}
		else if (elegirPieza == 4)
		{
			textBox1->AppendText("Cáliz");
		}
		else
		{
			textBox1->AppendText("Tiara");
		}

		textBox1->AppendText(" | ");

		if (elegirMainStat == 1)	// Imprimir main stat
		{
			textBox1->AppendText("Vida");
		}
		else if (elegirMainStat == 2)
		{
			textBox1->AppendText("ATQ");
		}
		else if (elegirMainStat == 4)
		{
			textBox1->AppendText("Vida%");
		}
		else if (elegirMainStat == 5)
		{
			textBox1->AppendText("ATQ%");
		}
		else if (elegirMainStat == 6)
		{
			textBox1->AppendText("DEF%");
		}
		else if (elegirMainStat == 7)
		{
			textBox1->AppendText("Maestría Elemental");
		}
		else if (elegirMainStat == 8)
		{
			textBox1->AppendText("Recarga de Energía%");
		}
		else if (elegirMainStat == 9)
		{
			textBox1->AppendText("Prob. CRIT%");
		}
		else if (elegirMainStat == 10)
		{
			textBox1->AppendText("Daño CRIT%");
		}
		else if (elegirMainStat == 11)
		{
			textBox1->AppendText("Bono de Curación%");
		}
		else if (elegirMainStat == 12)
		{
			textBox1->AppendText("Bono de Daño Pyro%");
		}
		else if (elegirMainStat == 13)
		{
			textBox1->AppendText("Bono de Daño Electro%");
		}
		else if (elegirMainStat == 14)
		{
			textBox1->AppendText("Bono de Daño Cryo%");
		}
		else if (elegirMainStat == 15)
		{
			textBox1->AppendText("Bono de Daño Hydro%");
		}
		else if (elegirMainStat == 16)
		{
			textBox1->AppendText("Bono de Daño Anemo%");
		}
		else if (elegirMainStat == 17)
		{
			textBox1->AppendText("Bono de Daño Geo%");
		}
		else
		{
			textBox1->AppendText("Bono de Daño Fisico%");
		}

		textBox1->AppendText(" )" + "\r\n");

		for (int i = 0; i < (elegirNumSubstats + 3); i++)	// Imprimir sub stats
		{
			cout << "- ";

			if (elegirSubStats[i] == 1)
			{
				textBox1->AppendText("Vida");
			}
			else if (elegirSubStats[i] == 2)
			{
				textBox1->AppendText("ATQ");
			}
			else if (elegirSubStats[i] == 3)
			{
				textBox1->AppendText("DEF");
			}
			else if (elegirSubStats[i] == 4)
			{
				textBox1->AppendText("Vida");
				porcFinal = 1;
			}
			else if (elegirSubStats[i] == 5)
			{
				textBox1->AppendText("ATQ");
				porcFinal = 1;
			}
			else if (elegirSubStats[i] == 6)
			{
				textBox1->AppendText("DEF");
				porcFinal = 1;
			}
			else if (elegirSubStats[i] == 7)
			{
				textBox1->AppendText("Maestría Elemental");
			}
			else if (elegirSubStats[i] == 8)
			{
				textBox1->AppendText("Recarga de Energía%");
				porcFinal = 1;
			}
			else if (elegirSubStats[i] == 9)
			{
				textBox1->AppendText("Prob. CRIT%");
				porcFinal = 1;
			}
			else if (elegirSubStats[i] == 10)
			{
				textBox1->AppendText("Daño CRIT%");
				porcFinal = 1;
			}

			textBox1->AppendText(" +");

			if (elegirSubTiers[i] == 1)		// Imprimir valores de los sub stats
			{
				if (elegirSubStats[i] == 1)
				{
					textBox1->AppendText("" + 209);
				}
				else if (elegirSubStats[i] == 2)
				{
					textBox1->AppendText("" + 14);
				}
				else if (elegirSubStats[i] == 3 || elegirSubStats[i] == 7)
				{
					textBox1->AppendText("" + 16);
				}
				else if (elegirSubStats[i] == 4 || elegirSubStats[i] == 5)
				{
					textBox1->AppendText("" + 4.1);
				}
				else if (elegirSubStats[i] == 6)
				{
					textBox1->AppendText("" + 5.1);
				}
				else if (elegirSubStats[i] == 8)
				{
					textBox1->AppendText("" + 4.5);
				}
				else if (elegirSubStats[i] == 9)
				{
					textBox1->AppendText("" + 2.7);
				}
				else if (elegirSubStats[i] == 10)
				{
					textBox1->AppendText("" + 5.4);
				}
			}
			else if (elegirSubTiers[i] == 2)
			{
				if (elegirSubStats[i] == 1)
				{
					textBox1->AppendText("" + 239);
				}
				else if (elegirSubStats[i] == 2)
				{
					textBox1->AppendText("" + 16);
				}
				else if (elegirSubStats[i] == 3 || elegirSubStats[i] == 7)
				{
					textBox1->AppendText("" + 19);
				}
				else if (elegirSubStats[i] == 4 || elegirSubStats[i] == 5)
				{
					textBox1->AppendText("" + 4.7);
				}
				else if (elegirSubStats[i] == 6)
				{
					textBox1->AppendText("" + 5.8);
				}
				else if (elegirSubStats[i] == 8)
				{
					textBox1->AppendText("" + 5.2);
				}
				else if (elegirSubStats[i] == 9)
				{
					textBox1->AppendText("" + 3.1);
				}
				else if (elegirSubStats[i] == 10)
				{
					textBox1->AppendText("" + 6.2);
				}
			}
			else if (elegirSubTiers[i] == 3)
			{
				if (elegirSubStats[i] == 1)
				{
					textBox1->AppendText("" + 269);
				}
				else if (elegirSubStats[i] == 2)
				{
					textBox1->AppendText("" + 18);
				}
				else if (elegirSubStats[i] == 3 || elegirSubStats[i] == 7)
				{
					textBox1->AppendText("" + 21);
				}
				else if (elegirSubStats[i] == 4 || elegirSubStats[i] == 5)
				{
					textBox1->AppendText("" + 5.3);
				}
				else if (elegirSubStats[i] == 6)
				{
					textBox1->AppendText("" + 6.6);
				}
				else if (elegirSubStats[i] == 8)
				{
					textBox1->AppendText("" + 5.8);
				}
				else if (elegirSubStats[i] == 9)
				{
					textBox1->AppendText("" + 3.5);
				}
				else if (elegirSubStats[i] == 10)
				{
					textBox1->AppendText("" + 7.0);
				}
			}
			else if (elegirSubTiers[i] == 4)
			{
				if (elegirSubStats[i] == 1)
				{
					textBox1->AppendText("" + 299);
				}
				else if (elegirSubStats[i] == 2)
				{
					textBox1->AppendText("" + 19);
				}
				else if (elegirSubStats[i] == 3 || elegirSubStats[i] == 7)
				{
					textBox1->AppendText("" + 23);
				}
				else if (elegirSubStats[i] == 4 || elegirSubStats[i] == 5)
				{
					textBox1->AppendText("" + 5.8);
				}
				else if (elegirSubStats[i] == 6)
				{
					textBox1->AppendText("" + 7.3);
				}
				else if (elegirSubStats[i] == 8)
				{
					textBox1->AppendText("" + 6.5);
				}
				else if (elegirSubStats[i] == 9)
				{
					textBox1->AppendText("" + 3.9);
				}
				else if (elegirSubStats[i] == 10)
				{
					textBox1->AppendText("" + 7.8);
				}
			}
			if (porcFinal == 1)		// Añadir % si es necesario
			{
				textBox1->AppendText("%");
				porcFinal = 0;
			}
			if (i != (elegirNumSubstats + 2))	// Cambiar linea si no es el último substat
			{
				textBox1->AppendText("\r\n");
			}
			else
			{
				textBox1->AppendText("\r\n" + "\r\n");
			}

		}

		/*
			( Set 1 | Pluma | Atk )
			- Daño CRIT +7.0%
			- ATQ +2.4%
			- Def +14
			- Vida +166
		*/
	}

	inline void run_dominio(int filtrarInt, int filtrarSet, int filtrarPieza, int filtrarMainStat, int filtrarNumSubstats, int* filtrarSubStats, int& artefsQueCumplen, System::Windows::Forms::TextBox^ textBox1, int soloConclusion)	// Crear artefacto e imprimir por pantalla
	{
		int elegirSet = generar_num(2);		// 1 es el primer set, 2 es el segundo set
		int elegirPieza = generar_num(5);	// 1 es flor, 2 es pluma, 3 es reloj, 4 es cáliz y 5 es tiara
		int elegirMainStat;
		int elegirSubstatsFalsos[4] = { 0, 0, 0, 0 };
		int elegirSubStats[4] = { 0, 0, 0, 0 };
		int elegirSubTiers[4] = { 0, 0, 0, 0 };
		int traducir = 0;
		int sumSubFiltrados = 0;
		int sumable;

		if (elegirPieza == 1)	// Vida como main stat si es flor
		{
			elegirMainStat = 1;
		}
		else if (elegirPieza == 2)	// ATK como main stat si es pluma
		{
			elegirMainStat = 2;
		}
		else if (elegirPieza == 3)	// Vida%, ATK%, DEF%, recarga de energía% o maestría elemental como main stat si es reloj (probs. distintas)
		{
			elegirMainStat = mainStatReloj();
		}
		else if (elegirPieza == 4)	// Vida%, ATK%, DEF%, Pyro%, Electro%, Cryo%, Hydro%, Anemo%, Geo%, Físico% o EM como main stat si es cáliz (probs. distintas)
		{
			elegirMainStat = mainStatCaliz();
		}
		else	// Vida%, ATK%, DEF%, Prob. CRIT%, Daño CRIT%, Bono de curación% o EM como main stat si es tiara (probs. distintas)
		{
			elegirMainStat = mainStatTiara();
		}
		int elegirNumSubstats = prob_true(0.2);		// 0 son tres substats y 1 son cuatro substats

		for (int i = 0; i < (elegirNumSubstats + 3); i++)	// Generar /elegirNumSubstats + 3/ substats para el artefacto
		{
			elegirSubstatsFalsos[i] = generadorSubstats(elegirSubstatsFalsos, elegirMainStat);	// Son falsos porque los ID que retornan de la función no son reales sino únicos de cada tipo de pieza, es necesario otra función una vez se tengan todos los substats para que transforme esos ID en reales
		}
		for (int j = 0; j < (elegirNumSubstats + 3); j++)	// Convertir los substats falsos a ID's reales
		{
			elegirSubStats[j] = generarIDsVerdaderos(j, elegirSubstatsFalsos, elegirMainStat);
		}
		for (int k = 0; k < (elegirNumSubstats + 3); k++)	// Generar tiers a los substats: 1 tier más bajo y 4 tier más alto
		{
			elegirSubTiers[k] = generar_num(4);
		}

		if (filtrarInt == 0)	// Filtrar
		{
			traducir = 1;
		}
		else
		{
			if (elegirSet == filtrarSet || filtrarSet == 0)
			{
				if (elegirPieza == filtrarPieza || filtrarPieza == 0)
				{
					if (elegirMainStat == filtrarMainStat || filtrarMainStat == 0)
					{
						if ((elegirNumSubstats + 1) == filtrarNumSubstats || filtrarNumSubstats == 0)
						{
							for (int i = 0; i < 4; i++)
							{
								sumable = 1;
								for (int j = 0; j < 4; j++)
								{
									if ((filtrarSubStats[i] == elegirSubStats[j]) || filtrarSubStats[i] == 0)
									{
										if (sumable == 1)
										{
											sumSubFiltrados++;
											sumable = 0;
										}
									}
								}
							}
							if (sumSubFiltrados == 4)
							{
								traducir = 1;
							}
							sumSubFiltrados = 0;
						}
					}
				}
			}
		}

		if (traducir == 1)	// Solo traducir si no se pidió filtros o si se cumplió el filtro
		{
			traduccionArtefactos(elegirSet, elegirPieza, elegirMainStat, elegirNumSubstats, elegirSubStats, elegirSubTiers, textBox1, soloConclusion);		// Traducir todos los números a palabras e imprimir por pantalla
			artefsQueCumplen++;
		}
	}

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Agregue el código de constructor aquí.
			//
			this->textBox1->BackColor = System::Drawing::Color::White;
		}
		
	protected:
		/// <summary>
		/// Limpiar los recursos usados.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:


	private:

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;





	private: System::Windows::Forms::TextBox^ runsBox;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::GroupBox^ groupBox4;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;

	private: System::Windows::Forms::RadioButton^ radioButton25;
	private: System::Windows::Forms::RadioButton^ radioButton24;
	private: System::Windows::Forms::RadioButton^ radioButton23;
	private: System::Windows::Forms::RadioButton^ radioButton22;
	private: System::Windows::Forms::RadioButton^ radioButton21;
	private: System::Windows::Forms::RadioButton^ radioButton20;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton19;
	private: System::Windows::Forms::RadioButton^ radioButton18;
	private: System::Windows::Forms::RadioButton^ radioButton17;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ radioButton26;
	private: System::Windows::Forms::RadioButton^ radioButton27;
	private: System::Windows::Forms::RadioButton^ radioButton30;
	private: System::Windows::Forms::RadioButton^ radioButton29;
	private: System::Windows::Forms::RadioButton^ radioButton28;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox12;


	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
















	protected:

	private:
		/// <summary>
		/// Variable de diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método requerido para la asistencia del diseñador.
		/// El contenido del método no debe cambiarse con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->runsBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton30 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton29 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton28 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton26 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton27 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton25 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton24 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton23 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton22 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton21 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton20 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton19 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton18 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton17 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox1->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(648, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(218, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Simular dominio";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(648, 41);
			this->textBox1->MaxLength = 2147483647;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(218, 452);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(93, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Activar filtrado";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(630, 510);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Filtrar artefactos";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button2);
			this->groupBox7->Controls->Add(this->checkBox12);
			this->groupBox7->Controls->Add(this->runsBox);
			this->groupBox7->Controls->Add(this->label1);
			this->groupBox7->Location = System::Drawing::Point(359, 322);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(265, 182);
			this->groupBox7->TabIndex = 38;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Repeticiones del dominio";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(30, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Abrir cuadro de texto en otra ventana";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(6, 95);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(148, 17);
			this->checkBox12->TabIndex = 6;
			this->checkBox12->Text = L"Mostrar solo la conclusión";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// runsBox
			// 
			this->runsBox->Location = System::Drawing::Point(6, 69);
			this->runsBox->Name = L"runsBox";
			this->runsBox->Size = System::Drawing::Size(170, 20);
			this->runsBox->TabIndex = 4;
			this->runsBox->TextChanged += gcnew System::EventHandler(this, &Form1::runsBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 26);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Número de veces que se hace el dominio:\r\n(20 de resina por cada uno)";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->checkBox7);
			this->groupBox6->Controls->Add(this->checkBox8);
			this->groupBox6->Controls->Add(this->label3);
			this->groupBox6->Controls->Add(this->checkBox9);
			this->groupBox6->Controls->Add(this->checkBox6);
			this->groupBox6->Controls->Add(this->checkBox10);
			this->groupBox6->Controls->Add(this->checkBox5);
			this->groupBox6->Controls->Add(this->checkBox11);
			this->groupBox6->Controls->Add(this->checkBox4);
			this->groupBox6->Controls->Add(this->checkBox3);
			this->groupBox6->Controls->Add(this->checkBox2);
			this->groupBox6->Location = System::Drawing::Point(359, 138);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(265, 178);
			this->groupBox6->TabIndex = 37;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Sub Stats";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Enabled = false;
			this->checkBox7->Location = System::Drawing::Point(129, 155);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(131, 17);
			this->checkBox7->TabIndex = 47;
			this->checkBox7->Text = L"Recarga de Energía%";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Enabled = false;
			this->checkBox8->Location = System::Drawing::Point(129, 132);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(88, 17);
			this->checkBox8->TabIndex = 46;
			this->checkBox8->Text = L"Daño CRIT%";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 26);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Escoge hasta 4 Substats\r\n(No marcar nada para no filtrar)";
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Enabled = false;
			this->checkBox9->Location = System::Drawing::Point(129, 109);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(55, 17);
			this->checkBox9->TabIndex = 45;
			this->checkBox9->Text = L"DEF%";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Enabled = false;
			this->checkBox6->Location = System::Drawing::Point(6, 155);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(117, 17);
			this->checkBox6->TabIndex = 42;
			this->checkBox6->Text = L"Maestría Elemental";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Enabled = false;
			this->checkBox10->Location = System::Drawing::Point(129, 86);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(56, 17);
			this->checkBox10->TabIndex = 44;
			this->checkBox10->Text = L"ATQ%";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Location = System::Drawing::Point(6, 132);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(87, 17);
			this->checkBox5->TabIndex = 41;
			this->checkBox5->Text = L"Prob. CRIT%";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Enabled = false;
			this->checkBox11->Location = System::Drawing::Point(129, 63);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(55, 17);
			this->checkBox11->TabIndex = 43;
			this->checkBox11->Text = L"Vida%";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Location = System::Drawing::Point(6, 109);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(47, 17);
			this->checkBox4->TabIndex = 40;
			this->checkBox4->Text = L"DEF";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Enabled = false;
			this->checkBox3->Location = System::Drawing::Point(6, 86);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(48, 17);
			this->checkBox3->TabIndex = 39;
			this->checkBox3->Text = L"ATQ";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(6, 63);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(47, 17);
			this->checkBox2->TabIndex = 38;
			this->checkBox2->Text = L"Vida";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton30);
			this->groupBox5->Controls->Add(this->radioButton29);
			this->groupBox5->Controls->Add(this->radioButton28);
			this->groupBox5->Location = System::Drawing::Point(359, 42);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(265, 90);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Número de Substats";
			// 
			// radioButton30
			// 
			this->radioButton30->AutoSize = true;
			this->radioButton30->Enabled = false;
			this->radioButton30->Location = System::Drawing::Point(6, 65);
			this->radioButton30->Name = L"radioButton30";
			this->radioButton30->Size = System::Drawing::Size(100, 17);
			this->radioButton30->TabIndex = 13;
			this->radioButton30->TabStop = true;
			this->radioButton30->Text = L"Cuatro Substats";
			this->radioButton30->UseVisualStyleBackColor = true;
			// 
			// radioButton29
			// 
			this->radioButton29->AutoSize = true;
			this->radioButton29->Enabled = false;
			this->radioButton29->Location = System::Drawing::Point(6, 42);
			this->radioButton29->Name = L"radioButton29";
			this->radioButton29->Size = System::Drawing::Size(90, 17);
			this->radioButton29->TabIndex = 12;
			this->radioButton29->TabStop = true;
			this->radioButton29->Text = L"Tres Substats";
			this->radioButton29->UseVisualStyleBackColor = true;
			// 
			// radioButton28
			// 
			this->radioButton28->AutoSize = true;
			this->radioButton28->Checked = true;
			this->radioButton28->Enabled = false;
			this->radioButton28->Location = System::Drawing::Point(6, 19);
			this->radioButton28->Name = L"radioButton28";
			this->radioButton28->Size = System::Drawing::Size(121, 17);
			this->radioButton28->TabIndex = 11;
			this->radioButton28->TabStop = true;
			this->radioButton28->Text = L"No filtrar nº Substats";
			this->radioButton28->UseVisualStyleBackColor = true;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton26);
			this->groupBox4->Controls->Add(this->radioButton27);
			this->groupBox4->Controls->Add(this->radioButton25);
			this->groupBox4->Controls->Add(this->radioButton24);
			this->groupBox4->Controls->Add(this->radioButton23);
			this->groupBox4->Controls->Add(this->radioButton22);
			this->groupBox4->Controls->Add(this->radioButton21);
			this->groupBox4->Controls->Add(this->radioButton20);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->radioButton19);
			this->groupBox4->Controls->Add(this->radioButton18);
			this->groupBox4->Controls->Add(this->radioButton17);
			this->groupBox4->Controls->Add(this->radioButton16);
			this->groupBox4->Controls->Add(this->radioButton15);
			this->groupBox4->Controls->Add(this->radioButton14);
			this->groupBox4->Controls->Add(this->radioButton10);
			this->groupBox4->Controls->Add(this->radioButton13);
			this->groupBox4->Controls->Add(this->radioButton11);
			this->groupBox4->Controls->Add(this->radioButton12);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(6, 307);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(347, 197);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Main Stat";
			// 
			// radioButton26
			// 
			this->radioButton26->AutoSize = true;
			this->radioButton26->Checked = true;
			this->radioButton26->Enabled = false;
			this->radioButton26->Location = System::Drawing::Point(229, 174);
			this->radioButton26->Name = L"radioButton26";
			this->radioButton26->Size = System::Drawing::Size(112, 17);
			this->radioButton26->TabIndex = 17;
			this->radioButton26->TabStop = true;
			this->radioButton26->Text = L"No filtrar Main Stat";
			this->radioButton26->UseVisualStyleBackColor = true;
			// 
			// radioButton27
			// 
			this->radioButton27->AutoSize = true;
			this->radioButton27->Enabled = false;
			this->radioButton27->Location = System::Drawing::Point(150, 114);
			this->radioButton27->Name = L"radioButton27";
			this->radioButton27->Size = System::Drawing::Size(62, 17);
			this->radioButton27->TabIndex = 26;
			this->radioButton27->Text = L"Físico%";
			this->radioButton27->UseVisualStyleBackColor = true;
			// 
			// radioButton25
			// 
			this->radioButton25->AutoSize = true;
			this->radioButton25->Enabled = false;
			this->radioButton25->Location = System::Drawing::Point(78, 160);
			this->radioButton25->Name = L"radioButton25";
			this->radioButton25->Size = System::Drawing::Size(53, 17);
			this->radioButton25->TabIndex = 24;
			this->radioButton25->Text = L"Geo%";
			this->radioButton25->UseVisualStyleBackColor = true;
			// 
			// radioButton24
			// 
			this->radioButton24->AutoSize = true;
			this->radioButton24->Enabled = false;
			this->radioButton24->Location = System::Drawing::Point(78, 137);
			this->radioButton24->Name = L"radioButton24";
			this->radioButton24->Size = System::Drawing::Size(66, 17);
			this->radioButton24->TabIndex = 23;
			this->radioButton24->Text = L"Anemo%";
			this->radioButton24->UseVisualStyleBackColor = true;
			// 
			// radioButton23
			// 
			this->radioButton23->AutoSize = true;
			this->radioButton23->Enabled = false;
			this->radioButton23->Location = System::Drawing::Point(78, 114);
			this->radioButton23->Name = L"radioButton23";
			this->radioButton23->Size = System::Drawing::Size(61, 17);
			this->radioButton23->TabIndex = 22;
			this->radioButton23->Text = L"Hydro%";
			this->radioButton23->UseVisualStyleBackColor = true;
			// 
			// radioButton22
			// 
			this->radioButton22->AutoSize = true;
			this->radioButton22->Enabled = false;
			this->radioButton22->Location = System::Drawing::Point(6, 160);
			this->radioButton22->Name = L"radioButton22";
			this->radioButton22->Size = System::Drawing::Size(54, 17);
			this->radioButton22->TabIndex = 21;
			this->radioButton22->Text = L"Cryo%";
			this->radioButton22->UseVisualStyleBackColor = true;
			// 
			// radioButton21
			// 
			this->radioButton21->AutoSize = true;
			this->radioButton21->Enabled = false;
			this->radioButton21->Location = System::Drawing::Point(6, 137);
			this->radioButton21->Name = L"radioButton21";
			this->radioButton21->Size = System::Drawing::Size(66, 17);
			this->radioButton21->TabIndex = 20;
			this->radioButton21->Text = L"Electro%";
			this->radioButton21->UseVisualStyleBackColor = true;
			// 
			// radioButton20
			// 
			this->radioButton20->AutoSize = true;
			this->radioButton20->Enabled = false;
			this->radioButton20->Location = System::Drawing::Point(6, 114);
			this->radioButton20->Name = L"radioButton20";
			this->radioButton20->Size = System::Drawing::Size(54, 17);
			this->radioButton20->TabIndex = 19;
			this->radioButton20->Text = L"Pyro%";
			this->radioButton20->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Bono de Daño:";
			// 
			// radioButton19
			// 
			this->radioButton19->AutoSize = true;
			this->radioButton19->Enabled = false;
			this->radioButton19->Location = System::Drawing::Point(203, 65);
			this->radioButton19->Name = L"radioButton19";
			this->radioButton19->Size = System::Drawing::Size(118, 17);
			this->radioButton19->TabIndex = 17;
			this->radioButton19->Text = L"Bono de Curación%";
			this->radioButton19->UseVisualStyleBackColor = true;
			// 
			// radioButton18
			// 
			this->radioButton18->AutoSize = true;
			this->radioButton18->Enabled = false;
			this->radioButton18->Location = System::Drawing::Point(203, 42);
			this->radioButton18->Name = L"radioButton18";
			this->radioButton18->Size = System::Drawing::Size(87, 17);
			this->radioButton18->TabIndex = 16;
			this->radioButton18->Text = L"Daño CRIT%";
			this->radioButton18->UseVisualStyleBackColor = true;
			this->radioButton18->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton18_CheckedChanged);
			// 
			// radioButton17
			// 
			this->radioButton17->AutoSize = true;
			this->radioButton17->Enabled = false;
			this->radioButton17->Location = System::Drawing::Point(203, 19);
			this->radioButton17->Name = L"radioButton17";
			this->radioButton17->Size = System::Drawing::Size(86, 17);
			this->radioButton17->TabIndex = 15;
			this->radioButton17->Text = L"Prob. CRIT%";
			this->radioButton17->UseVisualStyleBackColor = true;
			this->radioButton17->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton17_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Enabled = false;
			this->radioButton16->Location = System::Drawing::Point(67, 42);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(130, 17);
			this->radioButton16->TabIndex = 14;
			this->radioButton16->Text = L"Recarga de Energía%";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton16_CheckedChanged);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Enabled = false;
			this->radioButton15->Location = System::Drawing::Point(67, 19);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(116, 17);
			this->radioButton15->TabIndex = 13;
			this->radioButton15->Text = L"Maestría Elemental";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton15_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Enabled = false;
			this->radioButton14->Location = System::Drawing::Point(6, 65);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(54, 17);
			this->radioButton14->TabIndex = 12;
			this->radioButton14->Text = L"DEF%";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton14_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Enabled = false;
			this->radioButton10->Location = System::Drawing::Point(296, 19);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(46, 17);
			this->radioButton10->TabIndex = 8;
			this->radioButton10->Text = L"Vida";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Enabled = false;
			this->radioButton13->Location = System::Drawing::Point(6, 42);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(55, 17);
			this->radioButton13->TabIndex = 11;
			this->radioButton13->Text = L"ATQ%";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton13_CheckedChanged);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Enabled = false;
			this->radioButton11->Location = System::Drawing::Point(296, 42);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(47, 17);
			this->radioButton11->TabIndex = 9;
			this->radioButton11->Text = L"ATQ";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Enabled = false;
			this->radioButton12->Location = System::Drawing::Point(6, 19);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(54, 17);
			this->radioButton12->TabIndex = 10;
			this->radioButton12->Text = L"Vida%";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton12_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton9);
			this->groupBox3->Controls->Add(this->radioButton7);
			this->groupBox3->Controls->Add(this->radioButton8);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->Location = System::Drawing::Point(6, 138);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(347, 163);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Pieza";
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Enabled = false;
			this->radioButton9->Location = System::Drawing::Point(6, 134);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(96, 17);
			this->radioButton9->TabIndex = 16;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Tiara de Logos";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton9_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Enabled = false;
			this->radioButton7->Location = System::Drawing::Point(6, 88);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(97, 17);
			this->radioButton7->TabIndex = 14;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Arenas del Eon";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Enabled = false;
			this->radioButton8->Location = System::Drawing::Point(6, 111);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(113, 17);
			this->radioButton8->TabIndex = 15;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Cáliz de Eonothem";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton8_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Enabled = false;
			this->radioButton4->Location = System::Drawing::Point(6, 19);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(92, 17);
			this->radioButton4->TabIndex = 11;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"No filtrar pieza";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Enabled = false;
			this->radioButton5->Location = System::Drawing::Point(6, 42);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(91, 17);
			this->radioButton5->TabIndex = 12;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Flor de la vida";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Enabled = false;
			this->radioButton6->Location = System::Drawing::Point(6, 65);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(115, 17);
			this->radioButton6->TabIndex = 13;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Pluma de la muerte";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton6_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Location = System::Drawing::Point(6, 42);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(347, 90);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Set";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(6, 42);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(50, 17);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Set 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Enabled = false;
			this->radioButton3->Location = System::Drawing::Point(6, 19);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(81, 17);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"No filtrar set";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(6, 65);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(50, 17);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Set 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &Form1::backgroundWorker1_DoWork);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(648, 499);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(218, 23);
			this->progressBar1->TabIndex = 4;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 532);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Simulador de artefactos AR45+";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		srand((unsigned)time(0));	// Seed para el rand(), obligatorio para randomizar la seed cada vez que se ejecute el programa

		int numRuns;	// Definición de variables
		int prob2artefs;
		int contArtefExtra = 0;
		int numArtefs = 0;
		int filtrarInt;
		int filtrarSet = 0;
		int filtrarPieza = 0;
		int filtrarMainStat = 0;
		int filtrarNumSubstats = 0;
		int filtrarSubStats[4] = { 0, 0, 0, 0 };
		int artefsQueCumplen = 0;
		int salir = 0;
		int contSubstats = 0;
		float relacionArtefTotal = 0;
		int soloConclusion = 0;

		Form2^ f2 = gcnew Form2;
		f2->textBox111->Text = "Señal recibida: procesando artefactos, por favor, espere...";

		String^ runDominio = runsBox->Text;
		char* runDominioChar = (char*)(void*)Marshal::StringToHGlobalAnsi(runDominio);
		if (isNumber(runDominioChar) == 0)		// Es un número?
		{
			MessageBox::Show(L"ERROR: Número introducido incorrecto, no usar decimales, negativos ni letras.");
		}
		else
		{
			numRuns = atoi(runDominioChar);		// Número de veces que se hace el dominio

			if (numRuns < 1)	// Error por introducción de número de runs
			{
				salir = 1;
				MessageBox::Show(L"ERROR: Número introducido incorrecto, no usar 0.");
			}

			if (this->checkBox1->Checked == false)	// Filtrar artefactos?
			{
				filtrarInt = 0;
			}
			else
			{
				filtrarInt = 1;
			}

			if (this->checkBox2->Checked == true)	// Contar número de checkBox activados de substats
			{
				contSubstats++;
			}
			if (this->checkBox3->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox4->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox5->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox6->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox7->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox8->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox9->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox10->Checked == true)
			{
				contSubstats++;
			}
			if (this->checkBox11->Checked == true)
			{
				contSubstats++;
			}

			if (filtrarInt == 1 && salir == 0)		// Si se quiere filtrar artefactos, proseguir a preguntar filtraciones
			{
				if (this->radioButton3->Checked == true)	// Filtrar set
				{
					filtrarSet = 0;
				}
				else if (this->radioButton1->Checked == true)
				{
					filtrarSet = 1;
				}
				else
				{
					filtrarSet = 2;
				}

				if (this->radioButton4->Checked == true)	// Filtrar pieza
				{
					filtrarPieza = 0;
				}
				else if (this->radioButton5->Checked == true)
				{
					filtrarPieza = 1;
				}
				else if (this->radioButton6->Checked == true)
				{
					filtrarPieza = 2;
				}
				else if (this->radioButton7->Checked == true)
				{
					filtrarPieza = 3;
				}
				else if (this->radioButton8->Checked == true)
				{
					filtrarPieza = 4;
				}
				else
				{
					filtrarPieza = 5;
				}

				if (this->radioButton10->Checked == true)	// Filtrar main stat
				{
					filtrarMainStat = 1;
				}
				else if (this->radioButton11->Checked == true)
				{
					filtrarMainStat = 2;
				}
				else if (this->radioButton12->Checked == true)
				{
					filtrarMainStat = 4;
				}
				else if (this->radioButton13->Checked == true)
				{
					filtrarMainStat = 5;
				}
				else if (this->radioButton14->Checked == true)
				{
					filtrarMainStat = 6;
				}
				else if (this->radioButton15->Checked == true)
				{
					filtrarMainStat = 7;
				}
				else if (this->radioButton16->Checked == true)
				{
					filtrarMainStat = 8;
				}
				else if (this->radioButton17->Checked == true)
				{
					filtrarMainStat = 9;
				}
				else if (this->radioButton18->Checked == true)
				{
					filtrarMainStat = 10;
				}
				else if (this->radioButton19->Checked == true)
				{
					filtrarMainStat = 11;
				}
				else if (this->radioButton20->Checked == true)
				{
					filtrarMainStat = 12;
				}
				else if (this->radioButton21->Checked == true)
				{
					filtrarMainStat = 13;
				}
				else if (this->radioButton22->Checked == true)
				{
					filtrarMainStat = 14;
				}
				else if (this->radioButton23->Checked == true)
				{
					filtrarMainStat = 15;
				}
				else if (this->radioButton24->Checked == true)
				{
					filtrarMainStat = 16;
				}
				else if (this->radioButton25->Checked == true)
				{
					filtrarMainStat = 17;
				}
				else if (this->radioButton27->Checked == true)
				{
					filtrarMainStat = 18;
				}
				else
				{
					filtrarMainStat = 0;
				}

				if (this->radioButton28->Checked)	// Filtrar número de substats
				{
					filtrarNumSubstats = 0;
				}
				else if (this->radioButton29->Checked)
				{
					filtrarNumSubstats = 1;
				}
				else
				{
					filtrarNumSubstats = 2;
				}

				if ((contSubstats > 4 && filtrarNumSubstats == 0) || (contSubstats > 3 && filtrarNumSubstats == 1) || (contSubstats > 4 && filtrarNumSubstats == 2))
				{
					salir = 1;
					MessageBox::Show(L"ERROR: Detectado exceso de filtros en los Sub Stats. Si no se escogió filtrar número de Sub Stats o si se escogió 4 Sub Stats, máximo escoger hasta 4; si se escogió filtrar 3 Sub Stats, escoger máximo hasta 3.");
				}

				if (salir == 0)
				{
					int ind = 0;
					if (this->checkBox2->Checked == true)	// Filtrar substats
					{
						filtrarSubStats[ind] = 1;
						ind++;
					}
					if (this->checkBox3->Checked == true)
					{
						filtrarSubStats[ind] = 2;
						ind++;
					}
					if (this->checkBox4->Checked == true)
					{
						filtrarSubStats[ind] = 3;
						ind++;
					}
					if (this->checkBox5->Checked == true)
					{
						filtrarSubStats[ind] = 9;
						ind++;
					}
					if (this->checkBox6->Checked == true)
					{
						filtrarSubStats[ind] = 7;
						ind++;
					}
					if (this->checkBox7->Checked == true)
					{
						filtrarSubStats[ind] = 8;
						ind++;
					}
					if (this->checkBox8->Checked == true)
					{
						filtrarSubStats[ind] = 10;
						ind++;
					}
					if (this->checkBox9->Checked == true)
					{
						filtrarSubStats[ind] = 6;
						ind++;
					}
					if (this->checkBox10->Checked == true)
					{
						filtrarSubStats[ind] = 5;
						ind++;
					}
					if (this->checkBox11->Checked == true)
					{
						filtrarSubStats[ind] = 4;
						ind++;
					}
				}
			}
			
			if (salir == 0)
			{
				if (checkBox12->Checked == true)
				{
					soloConclusion = 1;
				}

				textBox1->Text = "";
				for (int i = 0; i < numRuns; i++)	// Hay un 10% de que en cada run salga un artefacto extra
				{
					prob2artefs = prob_true(0.1);
					if (prob2artefs == 1)
					{
						contArtefExtra++;
					}
				}

				int numArtefsAntesDeCalcular = numRuns + contArtefExtra;

				for (int i = 0; i < numRuns; i++)	// Hacer /numRuns/ veces el dominio
				{
					run_dominio(filtrarInt, filtrarSet, filtrarPieza, filtrarMainStat, filtrarNumSubstats, filtrarSubStats, artefsQueCumplen, textBox1, soloConclusion);
					numArtefs++;
					relacionArtefTotal = (float)numArtefs / (float)numArtefsAntesDeCalcular * 100;
					this->progressBar1->Value = relacionArtefTotal;
				}

				if (contArtefExtra > 0)		// Pedir creación de artefactos extra
				{
					for (int i = 0; i < contArtefExtra; i++)
					{
						run_dominio(filtrarInt, filtrarSet, filtrarPieza, filtrarMainStat, filtrarNumSubstats, filtrarSubStats, artefsQueCumplen, textBox1, soloConclusion);
						numArtefs++;
						relacionArtefTotal = (float)numArtefs / (float)numArtefsAntesDeCalcular * 100;
						this->progressBar1->Value = relacionArtefTotal;
					}
				}

				if (numRuns != 1)
				{
					if (artefsQueCumplen != 0)
					{
						this->textBox1->AppendText("\r\n");
					}
					this->textBox1->AppendText(numRuns*20 + " de resina utilizada (" + numRuns*0.5 + " de resina concentrada)" + "\r\n");
				}
				this->textBox1->AppendText("Se han conseguido " + numArtefs + " artefactos");
				if (filtrarInt == 1)
				{
					this->textBox1->AppendText("\r\n" + "De esos artefactos, " + artefsQueCumplen + " son los artefactos deseados" + "\r\n");
					if (artefsQueCumplen == 0)
					{
						this->textBox1->AppendText("1 de cada 0 artefactos podría salir tal y como se desea" + "\r\n");
					}
					else
					{
						this->textBox1->AppendText("1 de cada " + numArtefs / artefsQueCumplen + " artefactos podría salir tal y como se desea" + "\r\n");
					}				
					this->textBox1->AppendText("(" + ((float)artefsQueCumplen / (float)numArtefs * 100) + "% de prob. de conseguir un artefacto con los filtros establecidos)");

					if (numRuns < 100)
					{
						this->textBox1->AppendText("\r\n" + "Recomendable aumentar drásticamente el número de veces que se hace" + "\r\n" + "el dominio para tener un % más exacto (Más de 100 runs minimo)" + "\r\n");
						this->textBox1->AppendText("Cuantos más filtros añadas, más runs deberías poner.");
					}
				}
			}
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void runsBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	// Activación de filtrado
		if (this->checkBox1->Checked == false)
		{
			this->radioButton1->Enabled = false;
			this->radioButton2->Enabled = false;
			this->radioButton3->Enabled = false;
			this->radioButton4->Enabled = false;
			this->radioButton5->Enabled = false;
			this->radioButton6->Enabled = false;
			this->radioButton7->Enabled = false;
			this->radioButton8->Enabled = false;
			this->radioButton9->Enabled = false;
			this->radioButton10->Enabled = false;
			this->radioButton11->Enabled = false;
			this->radioButton12->Enabled = false;
			this->radioButton13->Enabled = false;
			this->radioButton14->Enabled = false;
			this->radioButton15->Enabled = false;
			this->radioButton16->Enabled = false;
			this->radioButton17->Enabled = false;
			this->radioButton18->Enabled = false;
			this->radioButton19->Enabled = false;
			this->radioButton20->Enabled = false;
			this->radioButton21->Enabled = false;
			this->radioButton22->Enabled = false;
			this->radioButton23->Enabled = false;
			this->radioButton24->Enabled = false;
			this->radioButton25->Enabled = false;
			this->radioButton26->Enabled = false;
			this->radioButton27->Enabled = false;
			this->radioButton28->Enabled = false;
			this->radioButton29->Enabled = false;
			this->radioButton30->Enabled = false;
			this->checkBox2->Enabled = false;
			this->checkBox3->Enabled = false;
			this->checkBox4->Enabled = false;
			this->checkBox5->Enabled = false;
			this->checkBox6->Enabled = false;
			this->checkBox7->Enabled = false;
			this->checkBox8->Enabled = false;
			this->checkBox9->Enabled = false;
			this->checkBox10->Enabled = false;
			this->checkBox11->Enabled = false;
		}
		else
		{
			this->radioButton1->Enabled = true;
			this->radioButton2->Enabled = true;
			this->radioButton3->Enabled = true;
			this->radioButton4->Enabled = true;
			this->radioButton5->Enabled = true;
			this->radioButton6->Enabled = true;
			this->radioButton7->Enabled = true;
			this->radioButton8->Enabled = true;
			this->radioButton9->Enabled = true;
			this->radioButton10->Enabled = true;
			this->radioButton11->Enabled = true;
			this->radioButton12->Enabled = true;
			this->radioButton13->Enabled = true;
			this->radioButton14->Enabled = true;
			this->radioButton15->Enabled = true;
			this->radioButton16->Enabled = true;
			this->radioButton17->Enabled = true;
			this->radioButton18->Enabled = true;
			this->radioButton19->Enabled = true;
			this->radioButton20->Enabled = true;
			this->radioButton21->Enabled = true;
			this->radioButton22->Enabled = true;
			this->radioButton23->Enabled = true;
			this->radioButton24->Enabled = true;
			this->radioButton25->Enabled = true;
			this->radioButton26->Enabled = true;
			this->radioButton27->Enabled = true;
			this->radioButton28->Enabled = true;
			this->radioButton29->Enabled = true;
			this->radioButton30->Enabled = true;
			this->checkBox2->Enabled = true;
			this->checkBox3->Enabled = true;
			this->checkBox4->Enabled = true;
			this->checkBox5->Enabled = true;
			this->checkBox6->Enabled = true;
			this->checkBox7->Enabled = true;
			this->checkBox8->Enabled = true;
			this->checkBox9->Enabled = true;
			this->checkBox10->Enabled = true;
			this->checkBox11->Enabled = true;

			if (this->radioButton6->Checked == true)
			{
				this->checkBox3->Enabled = false;
				this->radioButton10->Enabled = false;
				this->radioButton12->Enabled = false;
				this->radioButton13->Enabled = false;
				this->radioButton14->Enabled = false;
				this->radioButton15->Enabled = false;
				this->radioButton16->Enabled = false;
				this->radioButton17->Enabled = false;
				this->radioButton18->Enabled = false;
				this->radioButton19->Enabled = false;
				this->radioButton20->Enabled = false;
				this->radioButton21->Enabled = false;
				this->radioButton22->Enabled = false;
				this->radioButton23->Enabled = false;
				this->radioButton24->Enabled = false;
				this->radioButton25->Enabled = false;
				this->radioButton27->Enabled = false;

				this->checkBox3->Checked = false;
				if (this->radioButton10->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton12->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton13->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton14->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton15->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton16->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton17->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton18->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton19->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton20->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton21->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton22->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton23->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton24->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton25->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton27->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
			}
			if (this->radioButton5->Checked == true)
			{
				this->checkBox2->Enabled = false;
				this->radioButton11->Enabled = false;
				this->radioButton12->Enabled = false;
				this->radioButton13->Enabled = false;
				this->radioButton14->Enabled = false;
				this->radioButton15->Enabled = false;
				this->radioButton16->Enabled = false;
				this->radioButton17->Enabled = false;
				this->radioButton18->Enabled = false;
				this->radioButton19->Enabled = false;
				this->radioButton20->Enabled = false;
				this->radioButton21->Enabled = false;
				this->radioButton22->Enabled = false;
				this->radioButton23->Enabled = false;
				this->radioButton24->Enabled = false;
				this->radioButton25->Enabled = false;
				this->radioButton27->Enabled = false;

				this->checkBox2->Checked = false;
				if (this->radioButton11->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton12->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton13->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton14->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton15->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton16->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton17->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton18->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton19->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton20->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton21->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton22->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton23->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton24->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton25->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton27->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
			}
			if (this->radioButton7->Checked == true)
			{
				this->radioButton10->Enabled = false;
				this->radioButton11->Enabled = false;
				this->radioButton17->Enabled = false;
				this->radioButton18->Enabled = false;
				this->radioButton19->Enabled = false;
				this->radioButton20->Enabled = false;
				this->radioButton21->Enabled = false;
				this->radioButton22->Enabled = false;
				this->radioButton23->Enabled = false;
				this->radioButton24->Enabled = false;
				this->radioButton25->Enabled = false;
				this->radioButton27->Enabled = false;

				if (this->radioButton10->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton11->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton17->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton18->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton19->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton20->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton21->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton22->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton23->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton24->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton25->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton27->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
			}
			if (this->radioButton8->Checked == true)
			{
				this->radioButton10->Enabled = false;
				this->radioButton11->Enabled = false;
				this->radioButton16->Enabled = false;
				this->radioButton17->Enabled = false;
				this->radioButton18->Enabled = false;
				this->radioButton19->Enabled = false;

				if (this->radioButton10->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton11->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton16->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton17->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton18->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton19->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
			}
			if (this->radioButton9->Checked == true)
			{
				this->radioButton10->Enabled = false;
				this->radioButton11->Enabled = false;
				this->radioButton16->Enabled = false;
				this->radioButton20->Enabled = false;
				this->radioButton21->Enabled = false;
				this->radioButton22->Enabled = false;
				this->radioButton23->Enabled = false;
				this->radioButton24->Enabled = false;
				this->radioButton25->Enabled = false;
				this->radioButton27->Enabled = false;

				if (this->radioButton10->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton11->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton16->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton20->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton21->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton22->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton23->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton24->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton25->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
				else if (this->radioButton27->Checked == true)
				{
					this->radioButton26->Checked = true;
				}
			}
			if (this->radioButton12->Checked == true)
			{
				this->checkBox11->Enabled = false;
				this->checkBox11->Checked = false;
			}
			if (this->radioButton13->Checked == true)
			{
				this->checkBox10->Enabled = false;
				this->checkBox10->Checked = false;
			}
			if (this->radioButton14->Checked == true)
			{
				this->checkBox9->Enabled = false;
				this->checkBox9->Checked = false;
			}
			if (this->radioButton15->Checked == true)
			{
				this->checkBox6->Enabled = false;
				this->checkBox6->Checked = false;
			}
			if (this->radioButton16->Checked == true)
			{
				this->checkBox7->Enabled = false;
				this->checkBox7->Checked = false;
			}
			if (this->radioButton17->Checked == true)
			{
				this->checkBox5->Enabled = false;
				this->checkBox5->Checked = false;
			}
			if (this->radioButton18->Checked == true)
			{
				this->checkBox8->Enabled = false;
				this->checkBox8->Checked = false;
			}
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	// Pluma
		if (this->radioButton6->Checked == true)
		{
			this->checkBox3->Enabled = false;
			this->radioButton10->Enabled = false;
			this->radioButton12->Enabled = false;
			this->radioButton13->Enabled = false;
			this->radioButton14->Enabled = false;
			this->radioButton15->Enabled = false;
			this->radioButton16->Enabled = false;
			this->radioButton17->Enabled = false;
			this->radioButton18->Enabled = false;
			this->radioButton19->Enabled = false;
			this->radioButton20->Enabled = false;
			this->radioButton21->Enabled = false;
			this->radioButton22->Enabled = false;
			this->radioButton23->Enabled = false;
			this->radioButton24->Enabled = false;
			this->radioButton25->Enabled = false;
			this->radioButton27->Enabled = false;

			this->checkBox3->Checked = false;
			if (this->radioButton10->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton12->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton13->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton14->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton15->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton16->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton17->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton18->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton19->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton20->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton21->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton22->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton23->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton24->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton25->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton27->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
		}
		else
		{
			this->checkBox3->Enabled = true;
			this->radioButton10->Enabled = true;
			this->radioButton12->Enabled = true;
			this->radioButton13->Enabled = true;
			this->radioButton14->Enabled = true;
			this->radioButton15->Enabled = true;
			this->radioButton16->Enabled = true;
			this->radioButton17->Enabled = true;
			this->radioButton18->Enabled = true;
			this->radioButton19->Enabled = true;
			this->radioButton20->Enabled = true;
			this->radioButton21->Enabled = true;
			this->radioButton22->Enabled = true;
			this->radioButton23->Enabled = true;
			this->radioButton24->Enabled = true;
			this->radioButton25->Enabled = true;
			this->radioButton27->Enabled = true;
		}
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	// Flor
		if (this->radioButton5->Checked == true)
		{
			this->checkBox2->Enabled = false;
			this->radioButton11->Enabled = false;
			this->radioButton12->Enabled = false;
			this->radioButton13->Enabled = false;
			this->radioButton14->Enabled = false;
			this->radioButton15->Enabled = false;
			this->radioButton16->Enabled = false;
			this->radioButton17->Enabled = false;
			this->radioButton18->Enabled = false;
			this->radioButton19->Enabled = false;
			this->radioButton20->Enabled = false;
			this->radioButton21->Enabled = false;
			this->radioButton22->Enabled = false;
			this->radioButton23->Enabled = false;
			this->radioButton24->Enabled = false;
			this->radioButton25->Enabled = false;
			this->radioButton27->Enabled = false;

			this->checkBox2->Checked = false;
			if (this->radioButton11->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton12->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton13->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton14->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton15->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton16->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton17->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton18->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton19->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton20->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton21->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton22->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton23->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton24->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton25->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton27->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
		}
		else
		{
			this->checkBox2->Enabled = true;
			this->radioButton11->Enabled = true;
			this->radioButton12->Enabled = true;
			this->radioButton13->Enabled = true;
			this->radioButton14->Enabled = true;
			this->radioButton15->Enabled = true;
			this->radioButton16->Enabled = true;
			this->radioButton17->Enabled = true;
			this->radioButton18->Enabled = true;
			this->radioButton19->Enabled = true;
			this->radioButton20->Enabled = true;
			this->radioButton21->Enabled = true;
			this->radioButton22->Enabled = true;
			this->radioButton23->Enabled = true;
			this->radioButton24->Enabled = true;
			this->radioButton25->Enabled = true;
			this->radioButton27->Enabled = true;
		}
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	// Reloj
		if (this->radioButton7->Checked == true)
		{
			this->radioButton10->Enabled = false;
			this->radioButton11->Enabled = false;
			this->radioButton17->Enabled = false;
			this->radioButton18->Enabled = false;
			this->radioButton19->Enabled = false;
			this->radioButton20->Enabled = false;
			this->radioButton21->Enabled = false;
			this->radioButton22->Enabled = false;
			this->radioButton23->Enabled = false;
			this->radioButton24->Enabled = false;
			this->radioButton25->Enabled = false;
			this->radioButton27->Enabled = false;

			if (this->radioButton10->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton11->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton17->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton18->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton19->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton20->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton21->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton22->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton23->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton24->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton25->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton27->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
		}
		else
		{
			this->radioButton10->Enabled = true;
			this->radioButton11->Enabled = true;
			this->radioButton17->Enabled = true;
			this->radioButton18->Enabled = true;
			this->radioButton19->Enabled = true;
			this->radioButton20->Enabled = true;
			this->radioButton21->Enabled = true;
			this->radioButton22->Enabled = true;
			this->radioButton23->Enabled = true;
			this->radioButton24->Enabled = true;
			this->radioButton25->Enabled = true;
			this->radioButton27->Enabled = true;
		}
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	// Cáliz
		if (this->radioButton8->Checked == true)
		{
			this->radioButton10->Enabled = false;
			this->radioButton11->Enabled = false;
			this->radioButton16->Enabled = false;
			this->radioButton17->Enabled = false;
			this->radioButton18->Enabled = false;
			this->radioButton19->Enabled = false;

			if (this->radioButton10->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton11->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton16->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton17->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton18->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton19->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
		}
		else
		{
			this->radioButton10->Enabled = true;
			this->radioButton11->Enabled = true;
			this->radioButton16->Enabled = true;
			this->radioButton17->Enabled = true;
			this->radioButton18->Enabled = true;
			this->radioButton19->Enabled = true;
		}
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {	// Tiara
		if (this->radioButton9->Checked == true)
		{
			this->radioButton10->Enabled = false;
			this->radioButton11->Enabled = false;
			this->radioButton16->Enabled = false;
			this->radioButton20->Enabled = false;
			this->radioButton21->Enabled = false;
			this->radioButton22->Enabled = false;
			this->radioButton23->Enabled = false;
			this->radioButton24->Enabled = false;
			this->radioButton25->Enabled = false;
			this->radioButton27->Enabled = false;

			if (this->radioButton10->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton11->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton16->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton20->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton21->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton22->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton23->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton24->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton25->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
			else if (this->radioButton27->Checked == true)
			{
				this->radioButton26->Checked = true;
			}
		}
		else
		{
			this->radioButton10->Enabled = true;
			this->radioButton11->Enabled = true;
			this->radioButton16->Enabled = true;
			this->radioButton20->Enabled = true;
			this->radioButton21->Enabled = true;
			this->radioButton22->Enabled = true;
			this->radioButton23->Enabled = true;
			this->radioButton24->Enabled = true;
			this->radioButton25->Enabled = true;
			this->radioButton27->Enabled = true;
		}
	}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton12->Checked == true)
		{
			this->checkBox11->Enabled = false;
			this->checkBox11->Checked = false;
		}
		else if (this->radioButton12->Checked == false)
		{
			this->checkBox11->Enabled = true;
		}
	}
	private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton13->Checked == true)
		{
			this->checkBox10->Enabled = false;
			this->checkBox10->Checked = false;
		}
		else if (this->radioButton13->Checked == false)
		{
			this->checkBox10->Enabled = true;
		}
	}
	private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton14->Checked == true)
		{
			this->checkBox9->Enabled = false;
			this->checkBox9->Checked = false;
		}
		else if (this->radioButton14->Checked == false)
		{
			this->checkBox9->Enabled = true;
		}
	}
	private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton15->Checked == true)
		{
			this->checkBox6->Enabled = false;
			this->checkBox6->Checked = false;
		}
		else if (this->radioButton15->Checked == false)
		{
			this->checkBox6->Enabled = true;
		}
	}
	private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton16->Checked == true)
		{
			this->checkBox7->Enabled = false;
			this->checkBox7->Checked = false;
		}
		else if (this->radioButton16->Checked == false)
		{
			this->checkBox7->Enabled = true;
		}
	}
	private: System::Void radioButton17_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton17->Checked == true)
		{
			this->checkBox5->Enabled = false;
			this->checkBox5->Checked = false;
		}
		else if (this->radioButton17->Checked == false)
		{
			this->checkBox5->Enabled = true;
		}
	}
	private: System::Void radioButton18_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton18->Checked == true)
		{
			this->checkBox8->Enabled = false;
			this->checkBox8->Checked = false;
		}
		else if (this->radioButton18->Checked == false)
		{
			this->checkBox8->Enabled = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2^ f2 = gcnew Form2;
		f2->Show();
	}
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
		while (true)
		{
			if (backgroundWorker1->CancellationPending) // Si se cancela
			{
				e->Cancel = true;
				break;
			}
			if (progressBar1->Value == progressBar1->Maximum)  // Si la barra de progreso llega al máximo
			{
				break;
			}

			backgroundWorker1->ReportProgress(10);  // Progreso de reporte
			Thread::Sleep(1000);   // Espera 1s
		}
	}
	private: System::Void backgroundWorker1_ProgressChanged(System::Object^ sender, System::ComponentModel::ProgressChangedEventArgs^ e) {

		progressBar1->Value += e->ProgressPercentage;  // Aumento de la barra de progreso

	}
	private: System::Void backgroundWorker1_RunWorkerCompleted(System::Object^ sender, System::ComponentModel::RunWorkerCompletedEventArgs^ e) {

		progressBar1->Value = 0;   // Reseteo del valor

		if (e->Cancelled)    // Mensajes de error
		{
			MessageBox::Show("ERROR: Si te ha salido este mensaje contacta con el creador y comparte el siguiente código de error: 10010");
		}
		else
		{
			MessageBox::Show("ERROR: Si te ha salido este mensaje contacta con el creador y comparte el siguiente código de error: 11101");
		}
	}
}
;
}
/*

*** Notas a tener en cuenta:
* Convertir int a String^ para escribir en cuadros de texto

String^ prueba2 = int.ToString();
textBox1->Text = prueba2;

* Añadir texto en vez de sustituirlo

this->textBox1->AppendText("ola" + 20 + "buenas" + "\r\n" + "yujuuu áññññéeu");

*** Cosas que tengo que hacer:
* Voy por: Añadir un boton que abra otro form con una ventana grande en la que se copia lo que pone en el textBox de form1 al
* nuevo textBox de form2 para poder ver con más claridad lo que pone en el cuadro de texto

*/