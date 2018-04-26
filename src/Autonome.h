/*
 * Autonome.h
 *
 *  Created on: 10 avr. 2018
 *      Author: Nathan
 */
#include <iostream>
#include "BaseRoulante.h"
#include "Pince.h"

#ifndef AUTONOME_H_
#define AUTONOME_H_

namespace rbl
{

class Autonome
{
public:
	Autonome();

	void autonomeInit(char coteSwitch,  Pince* pince);

	void departMilieu(BaseRoulante* base, Pince* pince);
	void departDroite(BaseRoulante* base, Pince* pince);
	void departGauche(BaseRoulante* base, Pince* pince);

	void memeCote(BaseRoulante* base, Pince* pince);
	void coteOppose(BaseRoulante* base, Pince* pince);

	virtual ~Autonome();

private:
	unsigned int etat, incrementation;
	const double toleranceAvancer = 2;
	const double toleranceRotation = 2;
	double erreur;

	bool switchDroit;
	int rotation1, rotation2;
	int rotationMemeCote1, rotationMemeCote2, rotationMemeCote3, rotationCoteOppose1, rotationCoteOppose2;
	int rotationMilieu1et8, rotationMilieu2et7, rotationMilieu3et5, rotationMilieu4et6;

};

} /* namespace rbl */

#endif /* AUTONOME_H_ */
