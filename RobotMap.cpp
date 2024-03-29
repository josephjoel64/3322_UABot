// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::shooterSpeedController1 = NULL;
Relay* RobotMap::shooterSpike1 = NULL;
Encoder* RobotMap::shooterQuadratureEncoder1 = NULL;
DoubleSolenoid* RobotMap::shooterDoubleSolenoid1 = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	shooterSpeedController1 = new Jaguar(1, 1);
	lw->AddActuator("Shooter", "Speed Controller 1", (Jaguar*) shooterSpeedController1);
	
	shooterSpike1 = new Relay(1, 1);
	lw->AddActuator("Shooter", "Spike 1", shooterSpike1);
	
	shooterQuadratureEncoder1 = new Encoder(1, 1, 1, 2, false, Encoder::k4X);
	lw->AddSensor("Shooter", "Quadrature Encoder 1", shooterQuadratureEncoder1);
	shooterQuadratureEncoder1->SetDistancePerPulse(1.0);
        shooterQuadratureEncoder1->SetPIDSourceParameter(Encoder::kRate);
        shooterQuadratureEncoder1->Start();
	shooterDoubleSolenoid1 = new DoubleSolenoid(1, 1, 2);      
	
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
