
#include "StackingAction.hh"

#include "G4Track.hh"
#include "G4ios.hh"
#include "G4ParticleTable.hh"
#include "globals.hh"

StackingAction::StackingAction() : G4UserStackingAction()
{}

StackingAction::~StackingAction()
{}

G4ClassificationOfNewTrack StackingAction::ClassifyNewTrack(const G4Track* /*aTrack*/)
{
  return fUrgent;
}

void StackingAction::NewStage()
{}
  
void StackingAction::PrepareNewEvent()
{}
