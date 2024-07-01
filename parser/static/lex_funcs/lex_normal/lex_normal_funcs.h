/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_normal_funcs.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEX_NORMAL_FUNCS_H
# define LEX_NORMAL_FUNCS_H

# include "../../types/type_lex_normal.h"
# include "../../headers/symbols.h"
# include "../../headers/external_scanner_symbol_identifiers.h"
# include "../../headers/field_identifiers.h"
# include "../../headers/constants.h"
# include "../../char_set/charset_inline.h"
# include "./inline.h"
# include "../../../parse_types.h"

bool	lex_normal_s0(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s1(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s2(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s3(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s4(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s5(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s6(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s7(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s8(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s9(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s10(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s11(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s12(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s13(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s14(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s15(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s16(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s17(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s18(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s19(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s20(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s21(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s22(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s23(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s24(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s25(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s26(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s27(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s28(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s29(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s30(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s31(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s32(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s33(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s34(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s35(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s36(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s37(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s38(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s39(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s40(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s41(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s42(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s43(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s44(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s45(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s46(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s47(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s48(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s49(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s50(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s51(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s52(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s53(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s54(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s55(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s56(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s57(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s58(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s59(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s60(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s61(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s62(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s63(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s64(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s65(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s66(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s67(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s68(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s69(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s70(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s71(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s72(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s73(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s74(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s75(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s76(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s77(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s78(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s79(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s80(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s81(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s82(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s83(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s84(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s85(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s86(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s87(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s88(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s89(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s90(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s91(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s92(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s93(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s94(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s95(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s96(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s97(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s98(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s99(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s100(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s101(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s102(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s103(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s104(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s105(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s106(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s107(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s108(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s109(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s110(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s111(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s112(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s113(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s114(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s115(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s116(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s117(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s118(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s119(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s120(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s121(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s122(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s123(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s124(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s125(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s126(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s127(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s128(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s129(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s130(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s131(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s132(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s133(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s134(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s135(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s136(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s137(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s138(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s139(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s140(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s141(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s142(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s143(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s144(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s145(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s146(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s147(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s148(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s149(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s150(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s151(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s152(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s153(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s154(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s155(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s156(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s157(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s158(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s159(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s160(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s161(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s162(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s163(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s164(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s165(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s166(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s167(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s168(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s169(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s170(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s171(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s172(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s173(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s174(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s175(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s176(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s177(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s178(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s179(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s180(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s181(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s182(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s183(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s184(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s185(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s186(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s187(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s188(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s189(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s190(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s191(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s192(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s193(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s194(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s195(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s196(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s197(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s198(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s199(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s200(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s201(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s202(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s203(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s204(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s205(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s206(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s207(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s208(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s209(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s210(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s211(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s212(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s213(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s214(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s215(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s216(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s217(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s218(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s219(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s220(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s221(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s222(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s223(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s224(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s225(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s226(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s227(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s228(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s229(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s230(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s231(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s232(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s233(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s234(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s235(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s236(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s237(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s238(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s239(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s240(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s241(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s242(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s243(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s244(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s245(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s246(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s247(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s248(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s249(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s250(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s251(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s252(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s253(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s254(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s255(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s256(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s257(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s258(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s259(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s260(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s261(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s262(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s263(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s264(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s265(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s266(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s267(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s268(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s269(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s270(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s271(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s272(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s273(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s274(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s275(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s276(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s277(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s278(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s279(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s280(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s281(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s282(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s283(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s284(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s285(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s286(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s287(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s288(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s289(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s290(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s291(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s292(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s293(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s294(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s295(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s296(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s297(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s298(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s299(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s300(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s301(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s302(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s303(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s304(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s305(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s306(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s307(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s308(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s309(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s310(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s311(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s312(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s313(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s314(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s315(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s316(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s317(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s318(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s319(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s320(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s321(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s322(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s323(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s324(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s325(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s326(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s327(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s328(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s329(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s330(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s331(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s332(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s333(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s334(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s335(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s336(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s337(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s338(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s339(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s340(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s341(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s342(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s343(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s344(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s345(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s346(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s347(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s348(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s349(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s350(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s351(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s352(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s353(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s354(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s355(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s356(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s357(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s358(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s359(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s360(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s361(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s362(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s363(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s364(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s365(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s366(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s367(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s368(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s369(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s370(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s371(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s372(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s373(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s374(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s375(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s376(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s377(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s378(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s379(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s380(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s381(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s382(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s383(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s384(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s385(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s386(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s387(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s388(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s389(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s390(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s391(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s392(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s393(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s394(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s395(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s396(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s397(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s398(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s399(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s400(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s401(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s402(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s403(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s404(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s405(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s406(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s407(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s408(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s409(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s410(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s411(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s412(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s413(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s414(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s415(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s416(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s417(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s418(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s419(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s420(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s421(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s422(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s423(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s424(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s425(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s426(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s427(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s428(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s429(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s430(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s431(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s432(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s433(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s434(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s435(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s436(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s437(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s438(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s439(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s440(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s441(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s442(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s443(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s444(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s445(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s446(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s447(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s448(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s449(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s450(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s451(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s452(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s453(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s454(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s455(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s456(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s457(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s458(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s459(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s460(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s461(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s462(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s463(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s464(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s465(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s466(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s467(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s468(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s469(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s470(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s471(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s472(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s473(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s474(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s475(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s476(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s477(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s478(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s479(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s480(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s481(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s482(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s483(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s484(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s485(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s486(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s487(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s488(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s489(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s490(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s491(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s492(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s493(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s494(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s495(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s496(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s497(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s498(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_s499(t_lexer *lexer, t_lexer_state *s);
bool	lex_normal_default(t_lexer *lexer, t_lexer_state *s);

#endif // LEX_NORMAL_FUNCS_H
