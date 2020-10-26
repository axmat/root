#include "RooFitComputeInterface.h"

/**
 * The dispatch pointer always points to the most recently created RooFitComputeClass object. Effectively, function calls through the object resolve to:
 *  - a generic cpu architecture implementation if the platform cpu doesn't support vector instruction sets, or
 *  - an optimized implementation that uses vector instructions, always compatible with the platform cpu.
 * The pointer is of type RooFitComputeInterface*, so that calling functions through it are always virtual calls.
 * \see RooFitComputeInterface, RooFitComputeClass, RF_ARCH
 */
RooFitCompute::RooFitComputeInterface* RooFitCompute::dispatch=nullptr;
