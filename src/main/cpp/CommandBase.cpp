#include "CommandBase.h"
#include "subsystems/DriveTrain.h"
#include <commands/Scheduler.h>

std::unique_ptr<OI>CommandBase::oi =
            std::make_unique<OI>();

std::unique_ptr<DriveTrain>CommandBase::driveTrain =
            std::make_unique<DriveTrain>();

CommandBase::CommandBase(const std::string &name) :
        frc::Command(name) {

}