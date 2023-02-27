/**
 *
 * @file DMA_RegisterDefines_CTL4.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 14 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_PERIPHERAL_REGISTERDEFINES_XHEADER_DMA_REGISTERDEFINES_CTL4_H_
#define XDRIVER_MCU_DMA_PERIPHERAL_REGISTERDEFINES_XHEADER_DMA_REGISTERDEFINES_CTL4_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

/******************************************************************************************
 ************************************ 2 CTL4 *********************************************
 ******************************************************************************************/
/*-----------*/
#define DMA_CTL4_R_ENNMI_BIT ((UBase_t) 0U)

#define DMA_CTL4_ENNMI_MASK ((UBase_t) 0x01U)
#define DMA_CTL4_ENNMI_DIS ((UBase_t) 0x00U)
#define DMA_CTL4_ENNMI_ENA ((UBase_t) 0x01U)

#define DMA_CTL4_R_ENNMI_MASK (DMA_CTL4_ENNMI_MASK << DMA_CTL4_R_ENNMI_BIT)
#define DMA_CTL4_R_ENNMI_DIS (DMA_CTL4_ENNMI_DIS << DMA_CTL4_R_ENNMI_BIT)
#define DMA_CTL4_R_ENNMI_ENA (DMA_CTL4_ENNMI_ENA << DMA_CTL4_R_ENNMI_BIT)
/*-----------*/

/*-----------*/
#define DMA_CTL4_R_ROUNDROBIN_BIT ((UBase_t) 1U)

#define DMA_CTL4_ROUNDROBIN_MASK ((UBase_t) 0x01U)
#define DMA_CTL4_ROUNDROBIN_STATIC ((UBase_t) 0x00U)
#define DMA_CTL4_ROUNDROBIN_ENA ((UBase_t) 0x01U)

#define DMA_CTL4_R_ROUNDROBIN_MASK (DMA_CTL4_ROUNDROBIN_MASK << DMA_CTL4_R_ROUNDROBIN_BIT)
#define DMA_CTL4_R_ROUNDROBIN_STATIC (DMA_CTL4_ROUNDROBIN_STATIC << DMA_CTL4_R_ROUNDROBIN_BIT)
#define DMA_CTL4_R_ROUNDROBIN_ENA (DMA_CTL4_ROUNDROBIN_ENA << DMA_CTL4_R_ROUNDROBIN_BIT)
/*-----------*/

/*-----------*/
#define DMA_CTL4_R_RMWDIS_BIT ((UBase_t) 2U)

#define DMA_CTL4_RMWDIS_MASK ((UBase_t) 0x01U)
#define DMA_CTL4_RMWDIS_IMMENDIATE ((UBase_t) 0x00U)
#define DMA_CTL4_RMWDIS_NEXT ((UBase_t) 0x01U)

#define DMA_CTL4_R_RMWDIS_MASK (DMA_CTL4_RMWDIS_MASK << DMA_CTL4_R_RMWDIS_BIT)
#define DMA_CTL4_R_RMWDIS_IMMENDIATE (DMA_CTL4_RMWDIS_IMMENDIATE << DMA_CTL4_R_RMWDIS_BIT)
#define DMA_CTL4_R_RMWDIS_NEXT (DMA_CTL4_RMWDIS_NEXT << DMA_CTL4_R_RMWDIS_BIT)
/*-----------*/

/******************************************************************************************
 ************************************ 2 CTL *********************************************
 ******************************************************************************************/
/*-----------*/
#define DMA_CTL_R_ENNMI_BIT ((UBase_t) 0U)

#define DMA_CTL_ENNMI_MASK ((UBase_t) 0x01U)
#define DMA_CTL_ENNMI_DIS ((UBase_t) 0x00U)
#define DMA_CTL_ENNMI_ENA ((UBase_t) 0x01U)

#define DMA_CTL_R_ENNMI_MASK (DMA_CTL_ENNMI_MASK << DMA_CTL_R_ENNMI_BIT)
#define DMA_CTL_R_ENNMI_DIS (DMA_CTL_ENNMI_DIS << DMA_CTL_R_ENNMI_BIT)
#define DMA_CTL_R_ENNMI_ENA (DMA_CTL_ENNMI_ENA << DMA_CTL_R_ENNMI_BIT)
/*-----------*/

/*-----------*/
#define DMA_CTL_R_ROUNDROBIN_BIT ((UBase_t) 1U)

#define DMA_CTL_ROUNDROBIN_MASK ((UBase_t) 0x01U)
#define DMA_CTL_ROUNDROBIN_STATIC ((UBase_t) 0x00U)
#define DMA_CTL_ROUNDROBIN_ENA ((UBase_t) 0x01U)

#define DMA_CTL_R_ROUNDROBIN_MASK (DMA_CTL_ROUNDROBIN_MASK << DMA_CTL_R_ROUNDROBIN_BIT)
#define DMA_CTL_R_ROUNDROBIN_STATIC (DMA_CTL_ROUNDROBIN_STATIC << DMA_CTL_R_ROUNDROBIN_BIT)
#define DMA_CTL_R_ROUNDROBIN_ENA (DMA_CTL_ROUNDROBIN_ENA << DMA_CTL_R_ROUNDROBIN_BIT)
/*-----------*/

/*-----------*/
#define DMA_CTL_R_RMWDIS_BIT ((UBase_t) 2U)

#define DMA_CTL_RMWDIS_MASK ((UBase_t) 0x01U)
#define DMA_CTL_RMWDIS_IMMENDIATE ((UBase_t) 0x00U)
#define DMA_CTL_RMWDIS_NEXT ((UBase_t) 0x01U)

#define DMA_CTL_R_RMWDIS_MASK (DMA_CTL_RMWDIS_MASK << DMA_CTL_R_RMWDIS_BIT)
#define DMA_CTL_R_RMWDIS_IMMENDIATE (DMA_CTL_RMWDIS_IMMENDIATE << DMA_CTL_R_RMWDIS_BIT)
#define DMA_CTL_R_RMWDIS_NEXT (DMA_CTL_RMWDIS_NEXT << DMA_CTL_R_RMWDIS_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_DMA_PERIPHERAL_REGISTERDEFINES_XHEADER_DMA_REGISTERDEFINES_CTL4_H_ */
