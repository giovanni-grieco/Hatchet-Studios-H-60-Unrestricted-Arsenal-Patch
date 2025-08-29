
class CfgPatches
{
	class MyAddon
	{
		// Meta information for editor
		name = "H60 unresricted.";
		author = "Goonster";
		units[] = {};
        weapons[] = {};
		requiredAddons[] = {"vtx_mh60m"};
        authors[] = {""};
    };
};

class VehicleSystemsTemplateLeftPilot;
class VehicleSystemsTemplateRightPilot;
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class VTX_MFD_1;
class VTX_MFD_1_CMWS;
class VTX_MFD_1_Monospace;
class VTX_MFD_1_Bold;
class VTX_MFD_2;
class VTX_MFD_2_CMWS;
class VTX_MFD_2_Monospace;
class VTX_MFD_2_Bold;
class VTX_MFD_3;
class VTX_MFD_3_CMWS;
class VTX_MFD_3_Monospace;
class VTX_MFD_3_Bold;
class VTX_MFD_4;
class VTX_MFD_4_CMWS;
class VTX_MFD_4_Monospace;
class VTX_MFD_4_Bold;
class VTX_MFD_1_ARMED;
class VTX_MFD_2_ARMED;
class VTX_MFD_3_ARMED;
class VTX_MFD_4_ARMED;
class ANVISHUD;
class ANVISHUD_COPILOT;
class VTX_CLOCK;
class VTX_ESIS_Horizon;
class VTX_ESIS_Misc;
class VTX_FDRight;
class VTX_FDLeft;
class VTX_FMS_L;
class VTX_FMS_R;
class VTX_ESIS_BOOT;

class CfgVehicles {
    class Helicopter_Base_H;
    class Heli_Transport_01_base_F: Helicopter_Base_H{
	};// Heli_Transport_01_base_F

    class vtx_H60_base: Heli_Transport_01_base_F {
        class Components {
            class TransportPylonsComponent {
                class Pylons;
                class Presets;
            }; // TransportPylonsComponent
            class SensorsManagerComponent;
        }; // Components
    };
	class vtx_MH60M_DAP_MLASS: vtx_H60_base {
		class Components {
          class TransportPylonsComponent {
              uiPicture = "z\vtx\addons\MH60M\Data\UI\vtx_mh60m_dap_3den_ca.paa";
              class Pylons {
                  class pylons1 {
                      attachment = "VTX_M230_Chaingun_L";
                      priority = 5;
                      hardpoints[] = {
                        "VTX_ST_L",
                        "VTX_ST_R",
                        "VTX_ST_OUTBOARD",
                        "B_MISSILE_PYLON",
                        "B_BOMB_PYLON",
                      };
                      UIposition[] = {0.55, 0.41};
                  };
                  class pylons2: pylons1 {
                      attachment = "VTX_PylonRack_M261_M229"; // 19rnd 70mm rockets
                      mirroredMissilePos = 1;
                      hardpoints[] = {
                        "VTX_ST_L",
                        "VTX_ST_R",
                        "VTX_ST_OUTBOARD",
                        "B_MISSILE_PYLON",
                        "B_BOMB_PYLON",
                      };
                      UIposition[] = {0.12, 0.41};
                  };
                  class pylons3: pylons1 {
                      UIposition[] = {0.59, 0.47};
                      hardpoints[] = {
                        "VTX_ST_L",
                        "VTX_ST_R",
                        "VTX_ST_OUTBOARD",
                        "B_MISSILE_PYLON",
                        "B_BOMB_PYLON",
                      };
                      attachment = "VTX_4Rnd_ACE_Hellfire_AGM114K";
                  };
                  class pylons4: pylons2 {
                      UIposition[] = {0.08, 0.47};
                      hardpoints[] = {
                        "VTX_ST_L",
                        "VTX_ST_R",
                        "VTX_ST_OUTBOARD",
                        "B_MISSILE_PYLON",
                        "B_BOMB_PYLON",
                      };
                      attachment = "VTX_4Rnd_ACE_Hellfire_AGM114K";
                  };
              };
              class Presets {
                  class Empty {
                      displayName = "Empty";
                      attachment[] = {};
                  };
                  class Default {
                      displayName = "Default";
                      attachment[] = {"VTX_M230_Chaingun_L", "VTX_PylonRack_M261_M229", ""};
                  };
                  class Interdiction {
                      displayName = "30mm + APKWS";
                      attachment[] = {"VTX_M230_Chaingun_L", "VTX_PylonRack_M261_APKWS", ""};
                  };
                  class Rocket {
                      displayName = "Rocket";
                      attachment[] = {"VTX_PylonRack_M261_M229", "VTX_PylonRack_M261_M229", ""};
                  };
                  class APKWS {
                      displayName = "APKWS";
                      attachment[] = {"VTX_PylonRack_M261_APKWS", "VTX_PylonRack_M261_APKWS", ""};
                  };
                  class Hellfire {
                      displayName = "Hellfire";
                      attachment[] = {"VTX_4Rnd_ACE_Hellfire_AGM114K", "VTX_4Rnd_ACE_Hellfire_AGM114K", ""};
                  };
                  class MixedGuided {
                      displayName = "APKWS + Hellfire";
                      attachment[] = {"VTX_PylonRack_M261_APKWS", "VTX_4Rnd_ACE_Hellfire_AGM114K", ""};
                  };
              };
          }; // TransportPylonsComponent
          #include "sensors.hpp"
        };
	};
	class vtx_MH60M_DAP : vtx_H60_base {
		class Components {
          class TransportPylonsComponent {
            uiPicture = "z\vtx\addons\MH60M\Data\UI\vtx_mh60m_dap_3den_ca.paa";
            class Pylons {
                class pylons1 {
                    attachment = "VTX_M230_Chaingun_L";
                    priority = 5;
                    hardpoints[] = {
                      "VTX_ST_L",
                      "VTX_ST_R",
                      "VTX_ST_OUTBOARD",
                      "B_MISSILE_PYLON",
                      "B_BOMB_PYLON",
                    };
                    UIposition[] = {0.59, 0.41};
                };
                class pylons2: pylons1 {
                    attachment = "VTX_PylonRack_M261_M229"; // 19rnd 70mm rockets
                    mirroredMissilePos = 1;
                    hardpoints[] = {
                      "VTX_ST_L",
                      "VTX_ST_R",
                      "VTX_ST_OUTBOARD",
                      "B_MISSILE_PYLON",
                      "B_BOMB_PYLON",
                    };
                    UIposition[] = {0.08, 0.41};
                };
            };
            class Presets {
                class Empty {
                    displayName = "Empty";
                    attachment[] = {};
                };
                class Default {
                    displayName = "Default";
                    attachment[] = {"VTX_M230_Chaingun_L", "VTX_PylonRack_M261_M229", ""};
                };
                class Interdiction {
                    displayName = "30mm + APKWS";
                    attachment[] = {"VTX_M230_Chaingun_L", "VTX_PylonRack_M261_APKWS", ""};
                };
                class Rocket {
                    displayName = "Rocket";
                    attachment[] = {"VTX_PylonRack_M261_M229", "VTX_PylonRack_M261_M229", ""};
                };
                class APKWS {
                    displayName = "APKWS";
                    attachment[] = {"VTX_PylonRack_M261_APKWS", "VTX_PylonRack_M261_APKWS", ""};
                };
                class Hellfire {
                    displayName = "Hellfire";
                    attachment[] = {"VTX_4Rnd_ACE_Hellfire_AGM114K", "VTX_4Rnd_ACE_Hellfire_AGM114K", ""};
                };
                class MixedGuided {
                    displayName = "APKWS + Hellfire";
                    attachment[] = {"VTX_PylonRack_M261_APKWS", "VTX_4Rnd_ACE_Hellfire_AGM114K", ""};
                };
            };
        }; // TransportPylonsComponent

          #include "sensors.hpp"
        };
	};
};