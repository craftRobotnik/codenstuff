/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        /
/ Open Source Software - may be modified and shared by FRC teams. The code   /
/ must be accompanied by the FIRST BSD license file in the root directory of /
/ the project.                                                               /
/----------------------------------------------------------------------------*/

#include "subsystems/DriveTrain.h"
#include "WPILib.h"
#include "commands/JoystickDrive.h"
#include <frc/drive/DifferentialDrive.h>
#include <frc/PWMVictorSPX.h>
#include <frc/WPILib.h>






// Called just before this Command runs the first time



DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
    frc::PWMVictorSPX left {0};
    frc::PWMVictorSPX right {0};
    drive = std::make_unique<frc::RobotDrive>(left,right);




}


void DriveTrain::InitDefaultCommand() {
    SetDefaultCommand(new JoystickDrive());

}
void DriveTrain::ArcadeDrive(double x, double y)
{
    
   x = 1;
   y = 1;
    drive->ArcadeDrive(x,y);

    
}

