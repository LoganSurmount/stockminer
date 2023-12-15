#ifndef __BOARD_H
#define __BOARD_H

#define NR_PRICE_BOARDS      12
#define NR_VOLUME_BOARDS      6
#define NR_LOWCAP_BOARDS      6
#define NR_VLOW_BOARDS        3
#define NR_VHIGH_BOARDS       3
#define NR_HIGHCAP_BOARDS     6
#define NR_INDI_BOARDS        2
#define MAX_DELTA_STOCKS     49
#define NR_DEF_STOCKS        19

#define LOWCAP_GAINER_BOARD   0
#define LOWCAP_LOSER_BOARD    1
#define HIGHCAP_GAINER_BOARD  2
#define HIGHCAP_LOSER_BOARD   3
#define LOWCAP_R15_BOARD      4
#define LOWCAP_R5_BOARD       5
#define LOWCAP_R1_BOARD       6
#define LOWCAP_R15L_BOARD     7
#define LOWCAP_R5L_BOARD      8
#define LOWCAP_R1L_BOARD      9
#define HIGHCAP_R15_BOARD    10
#define HIGHCAP_R5_BOARD     11
#define HIGHCAP_R1_BOARD     12
#define HIGHCAP_R15L_BOARD   13
#define HIGHCAP_R5L_BOARD    14
#define HIGHCAP_R1L_BOARD    15
#define LOWCAP_V15_BOARD     16
#define LOWCAP_V5_BOARD      17
#define LOWCAP_V1_BOARD      18
#define HIGHCAP_V15_BOARD    19
#define HIGHCAP_V5_BOARD     20
#define HIGHCAP_V1_BOARD     21
#define BULL_BOARD           22
#define BEAR_BOARD           23
#define CRYPTO_R15_BOARD     24
#define CRYPTO_R5_BOARD      24
#define CRYPTO_R1_BOARD      24
#define CRYPTO_R15L_BOARD    24
#define CRYPTO_R5L_BOARD     24
#define CRYPTO_R1L_BOARD     24

#define LOWCAP_BOARD_IDX     4
#define HIGHCAP_BOARD_IDX   10
#define VOLUME_BOARD_IDX    16
#define VLOW_BOARD_IDX      16
#define VHIGH_BOARD_IDX     19
#define INDI_BOARD_IDX      22
#define BULL_BOARD_IDX      22
#define BEAR_BOARD_IDX      23
#define CRYPTO_BOARD_IDX    24

#define BLOWCAPS_DELTA     1
#define BHIGHCAPS_DELTA    2
#define BLOWCAPS_PRICE     4
#define BHIGHCAPS_PRICE    8
#define BLOWCAPS_VOL      16
#define BHIGHCAPS_VOL     32
#define BULLCAPS          64
#define BEARCAPS         128
#define BTYPE_LOWCAPS    256
#define BTYPE_HIGHCAPS   512
#define BTYPE_CRYPTO    1024

/* wtab->table_type | session->table */
#define WATCHTABLE_RAPID15_LOWCAPS        (1<<0)
#define WATCHTABLE_RAPID5_LOWCAPS         (1<<1)
#define WATCHTABLE_RAPID1_LOWCAPS         (1<<2)
#define WATCHTABLE_RAPID15mL_LOWCAPS      (1<<3)
#define WATCHTABLE_RAPID5mL_LOWCAPS       (1<<4)
#define WATCHTABLE_RAPID1mL_LOWCAPS       (1<<5)
#define WATCHTABLE_RAPID15_HIGHCAPS       (1<<6)
#define WATCHTABLE_RAPID5_HIGHCAPS        (1<<7)
#define WATCHTABLE_RAPID1_HIGHCAPS        (1<<8)
#define WATCHTABLE_RAPID15mL_HIGHCAPS     (1<<9)
#define WATCHTABLE_RAPID5mL_HIGHCAPS      (1<<10)
#define WATCHTABLE_RAPID1mL_HIGHCAPS      (1<<11)
#define WATCHTABLE_VOL15                  (1<<12)
#define WATCHTABLE_VOL5                   (1<<13)
#define WATCHTABLE_VOL1                   (1<<14)
#define WATCHTABLE_VOL15H                 (1<<15)
#define WATCHTABLE_VOL5H                  (1<<16)
#define WATCHTABLE_VOL1H                  (1<<17)
#define WATCHTABLE_CUSTOM                 (1<<18)

#define LOWCAP_GAINERS  (WATCHTABLE_RAPID15_LOWCAPS   |WATCHTABLE_RAPID5_LOWCAPS   |WATCHTABLE_RAPID1_LOWCAPS)
#define LOWCAP_LOSERS   (WATCHTABLE_RAPID15mL_LOWCAPS |WATCHTABLE_RAPID5mL_LOWCAPS |WATCHTABLE_RAPID1mL_LOWCAPS)
#define HIGHCAP_GAINERS (WATCHTABLE_RAPID15_HIGHCAPS  |WATCHTABLE_RAPID5_HIGHCAPS  |WATCHTABLE_RAPID1_HIGHCAPS)
#define HIGHCAP_LOSERS  (WATCHTABLE_RAPID15mL_HIGHCAPS|WATCHTABLE_RAPID5mL_HIGHCAPS|WATCHTABLE_RAPID1mL_HIGHCAPS)
#define LOWCAP_VOLUME   (WATCHTABLE_VOL15             |WATCHTABLE_VOL5             |WATCHTABLE_VOL1)
#define HIGHCAP_VOLUME  (WATCHTABLE_VOL15H            |WATCHTABLE_VOL5H            |WATCHTABLE_VOL1H)
#define UFO_HIGHCAPS    (HIGHCAP_GAINERS|HIGHCAP_LOSERS)
#define UFO_LOWCAPS     (LOWCAP_GAINERS|LOWCAP_LOSERS)
#define UFO_VOLUME      (LOWCAP_VOLUME|HIGHCAP_VOLUME)
#define UFO_ALLSTOCKS   (UFO_HIGHCAPS|UFO_LOWCAPS)

/*
	LOWCAP_LOSERS:   56    0x38
	LOWCAP_GAINERS:  7     0x7 
	HIGHCAP_LOSERS:  3584  0xe00
	HIGHCAP_GAINERS: 448   0x1c0
	UFO_LOWCAPS:     63    0x3f
	UFO_HIGHCAPS:    4032  0xfc0
*/
extern int NR_DELTA_STOCKS;

#endif
