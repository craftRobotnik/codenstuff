#ifndef COMMANDBASE_H_
#define COMMANDBASE_H_

#include "memory"
#include "string"
#include "frc/commands/Command.h"
#include "OI.h"
#include "subsystems/DriveTrain.h"


class CommandBase: public frc::Command {
public:
    CommandBase(const std::string& name);
    CommandBase() = default;

    static std::unique_ptr<OI> oi;
    static std::unique_ptr<DriveTrain> driveTrain;

};


#endif /* COMMANDBASEH */