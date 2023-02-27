/**
 *
 * @file CDLinkedList_Tail.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 11 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARDLINKEDLIST_TAIL_H_
#define XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARDLINKEDLIST_TAIL_H_

#include <xUtils/DataStructure/LinkedList/CircularDoubleLinkedList/Intrinsics/xHeader/CDLinkedList_Struct.h>

CDLinkedList_nERROR CDLinkedList__enGetTail(const CDLinkedList_t*  const pstList, CDLinkedListItem_t** pstTailArg);
CDLinkedList_nERROR CDLinkedList__enSetTail(CDLinkedList_t* pstList, CDLinkedListItem_t* pstTailArg);
CDLinkedList_nERROR CDLinkedList__enIsTail(const CDLinkedListItem_t* const pstItem, boolean_t* pboStatus);

#endif /* XUTILS_DATASTRUCTURE_CIRCULARDOUBLELINKEDLIST_INTRINSICS_LIST_XHEADER_CIRCULARDLINKEDLIST_TAIL_H_ */