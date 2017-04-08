#pragma once
#include "common_includes.h"
#include "enumerates.h"
#include "structures.h"
/**
 * @file headers/stores.h
 * @brief headers/stores.h
 *
 * @ingroup sanctuary_notes
 * @{
 */

/** stores_init initializes the resources used by store owners.*/
void stores_init();

/** stores_renew_items renews the items sold in stores.*/
void stores_renew_items();

/** stores_cleanup releases the resources used by store owners.*/
void stores_cleanup();

/** stores_talk_griswold initiates a dialogue with Griswold.*/
void stores_talk_griswold();

/** stores_talk_griswold_buy_basic initiates a buy basic item dialogue with*/
/** Griswold.*/
void stores_talk_griswold_buy_basic();

/** stores_talk_griswold_buy_premium initiates a buy premium item dialogue with*/
/** Griswold.*/
bool32_t stores_talk_griswold_buy_premium();

/** stores_griswold_wants reports whether Griswold wants to buy the given*/
/** inventory item.*/
bool32_t __fastcall stores_griswold_wants(int inv_num);

/** stores_talk_griswold_sell initiates a sell player item dialogue with*/
/** Griswold.*/
void stores_talk_griswold_sell();

/** stores_is_damaged reports whether the given inventory item is damaged (i.e.*/
/** it may be repaired).*/
bool32_t __fastcall stores_is_damaged(int inv_num);

/** stores_talk_griswold_repair initiates a repair player item dialogue with*/
/** Griswold.*/
void stores_talk_griswold_repair();

/** stores_talk_adria initiates a dialogue with Adria.*/
void stores_talk_adria();

/** stores_talk_adria_buy initiates a buy item dialogue with Adria.*/
void stores_talk_adria_buy();

/** stores_adria_wants reports whether Adria wants to buy the given item; which*/
/** is either an inventory or a belt item, as described below.*/
/***/
/**    switch {*/
/**    case inv_or_belt_num >= 0:*/
/**       inv_num = inv_or_belt_num*/
/**    case inv_or_belt_num < 0:*/
/**       belt_num = -inv_or_belt_num - 1*/
/**    }*/
bool32_t __fastcall stores_adria_wants(int inv_or_belt_num);

/** stores_talk_adria_sell initiates a sell player item dialogue with Adria.*/
void stores_talk_adria_sell();

/** stores_has_used_charges reports whether the given inventory item is a staff*/
/** with consumed charges (i.e. it may be recharged).*/
bool32_t __fastcall stores_has_used_charges(int inv_num);

/** stores_talk_adria_recharge initiates a recharge staff dialogue with Adria.*/
void stores_talk_adria_recharge();

/** stores_talk_not_enough_gold informs the player that they have not enough*/
/** gold to satisfy the deal.*/
void stores_talk_not_enough_gold();

/** stores_talk_not_enough_room informs the player that they have not enough*/
/** room in inventory to complete the trade.*/
void stores_talk_not_enough_room();

/** stores_talk_confirm asks the player to confirm the deal.*/
void stores_talk_confirm();

/** stores_talk_wirt initiates a dialogue with Wirt.*/
void stores_talk_wirt();

/** stores_talk_wirt_buy initiates a buy item dialogue with Wirt.*/
void stores_talk_wirt_buy();

/** stores_talk_pepin initiates a dialogue with Pepin.*/
void stores_talk_pepin();

/** stores_talk_pepin_buy initiates a buy item dialogue with Pepin.*/
void stores_talk_pepin_buy();

/** stores_talk_cain initiates a dialogue with Cain.*/
void stores_talk_cain();

/** stores_is_unidentified reports whether the given item is magical and*/
/** unidentified (i.e. it may be identified).*/
bool32_t __fastcall stores_is_unidentified(Item *item);

/** stores_talk_cain_identify initiates an identify item dialogue with Cain.*/
void stores_talk_cain_identify();

/** stores_talk_gossip initiates a gossip dialogue with the active NPC.*/
void stores_talk_gossip();

/** stores_talk_odgen initiates a dialogue with Odgen.*/
void stores_talk_odgen();

/** stores_talk_gillian initiates a dialogue with Gillian.*/
void stores_talk_gillian();

/** stores_talk_farnham initiates a dialogue with Farnham.*/
void stores_talk_farnham();

/** stores_draw renders a store owner dialogue on screen.*/
void stores_draw();

/** @} */