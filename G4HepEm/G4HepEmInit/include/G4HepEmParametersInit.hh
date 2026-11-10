
#ifndef G4HepEmParamatersInit_HH
#define G4HepEmParamatersInit_HH

struct G4HepEmParamaters;
struct G4HepEmRegionParmeters;

void InitHepEmParameters(struct G4HepEmParameters* hepEmPars);

// Sets the default values of one region from G4EmParameters and the global tracking cuts.
void InitHepEmRegionParameters(const struct G4HepEmParameters* hepEmPars, struct G4HepEmRegionParmeters& rDat);

// Extends the per-region array to all regions in the G4RegionStore (regions created
// after `InitHepEmParameters` get default values). Returns true if it was extended.
// New regions are initialised from `defaults` if given, else from Geant4.
bool ExtendHepEmRegionParameters(struct G4HepEmParameters* hepEmPars,
                                 const struct G4HepEmRegionParmeters* defaults = nullptr);

#endif // G4HepEmParamaters_HH
