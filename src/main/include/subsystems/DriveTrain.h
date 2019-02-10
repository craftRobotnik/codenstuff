#pragma once


#include <frc/WPILib.h>



class DriveTrain : public frc::Subsystem {
private:
    // It's desirable that everything possible under private except
    // for methods that implement subsystem capabilities

public:
    DriveTrain();
    void InitDefaultCommand() override;

    void ArcadeDrive(double x, double y);

private:
    std::unique_ptr<frc::RobotDrive> drive;
    };
