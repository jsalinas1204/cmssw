#include <boost/cstdint.hpp>
namespace{
  namespace{
    uint32_t i32;
  }
}
#include "CondFormats/EcalObjects/interface/EcalPedestals.h"
namespace {
  std::map< uint32_t, EcalPedestals::Item > pedmap;
}

#include "CondFormats/EcalObjects/interface/EcalWeightXtalGroups.h"
#include "CondFormats/EcalObjects/interface/EcalXtalGroupId.h"
namespace {
  namespace {
    EcalWeightXtalGroups  gg;
    std::map<uint32_t, EcalXtalGroupId> groupmap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTBWeights.h"
#include "CondFormats/EcalObjects/interface/EcalWeightSet.h"
namespace {
  namespace {
    EcalTBWeights tbwgt;
    EcalWeightSet wset;
    EcalTBWeights::EcalTDCId id;
    std::map< std::pair< EcalXtalGroupId, EcalTBWeights::EcalTDCId > , EcalWeightSet > wgmap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalADCToGeVConstant.h"
namespace {
  namespace {
    EcalADCToGeVConstant adcfactor;
  }
}

#include "CondFormats/EcalObjects/interface/EcalGainRatios.h"
#include "CondFormats/EcalObjects/interface/EcalMGPAGainRatio.h"
namespace {
  namespace {
    EcalGainRatios gainratios;
    std::map<uint32_t, EcalMGPAGainRatio> ratiomap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalIntercalibConstants.h"
namespace {
  namespace {
    EcalIntercalibConstants intercalib;
    std::map<uint32_t, EcalIntercalibConstants::EcalIntercalibConstant> intermap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalDCUTemperatures.h"
namespace {
  namespace {
    EcalDCUTemperatures dcuTemperatures;
    std::map<uint32_t, float> dcuTempMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalPTMTemperatures.h"
namespace {
  namespace {
    EcalPTMTemperatures ptmTemperatures;
    std::map<uint32_t, float> ptmTempMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalChannelStatus.h"
#include "CondFormats/EcalObjects/interface/EcalChannelStatusCode.h"
namespace {
  namespace {
    EcalChannelStatus channelStatus;
    std::map<uint32_t, EcalChannelStatusCode> statusMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalMonitoringCorrections.h"
namespace {
  namespace {
    EcalMonitoringCorrections monitorCorrections;
    std::map<uint32_t, EcalMonitoringCorrections::EcalMonitoringCorrection> monCorrectionMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalLaserAlphas.h"
namespace {
  namespace {
    EcalLaserAlphas laserAplhas;
    std::map<uint32_t, EcalLaserAlphas::EcalLaserAlpha> laserAlphaMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalLaserAPDPNRatios.h"
namespace {
  namespace {
    std::map< uint32_t, EcalLaserAPDPNRatios::EcalLaserAPDPNpair>  laser_map;
    std::map< uint32_t, EcalLaserAPDPNRatios::EcalLaserTimeStamp> time_map  ;
  }
}

#include "CondFormats/EcalObjects/interface/EcalLaserAPDPNRatiosRef.h"
namespace {
  namespace {
    EcalLaserAPDPNRatiosRef laserAPDPNRatiosRef;
    std::map<uint32_t, EcalLaserAPDPNRatiosRef::EcalLaserAPDPNref> laserAPDPNRatiosRefMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGFineGrainEBIdMap.h"
namespace {
  namespace {
    EcalTPGFineGrainConstEB grain;
    std::map<uint32_t, EcalTPGFineGrainConstEB::EcalTPGFineGrainConstEB> EcalTPGFineGrainEBMap ;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGFineGrainStripEE.h"
namespace {
  namespace {   
    std::map< uint32_t, EcalTPGFineGrainStripEE::Item > EcalTPGFineGrainStripEEMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGFineGrainTowerEE.h"
namespace {
  namespace {   
    std::map< uint32_t, uint32_t> EcalTPGFineGrainTowerEEMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGGroups.h"
namespace {
  namespace {   
     std::map<uint32_t, uint32_t> EcalTPGGroupsMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGLinearizationConst.h"
namespace {
  namespace {   
    std::map< uint32_t, EcalTPGLinearizationConst::Item > EcalTPGLinearizationConstMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGLutIdMap.h"
namespace {
  namespace {   
    EcalTPGLut lut;
    std::map< uint32_t, EcalTPGLut::EcalTPGLut > EcalTPGLutMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGPedestals.h"
namespace {
  std::map< uint32_t, EcalTPGPedestals::Item > EcalTPGPedestalsMap;
}


#include "CondFormats/EcalObjects/interface/EcalTPGWeightIdMap.h"
namespace {
  namespace {   
    EcalTPGWeights weights;
   std::map<uint32_t, EcalTPGWeights::EcalTPGWeights> EcalTPGWeightMap;
  }
}

#include "CondFormats/EcalObjects/interface/EcalTPGSlidingWindow.h"
namespace {
  namespace {   
   std::map<uint32_t, uint32_t>                 EcalTPGSlidingWindowMap;
  }
}

