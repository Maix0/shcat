/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lex_keywords_funcs.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEX_KEYWORDS_FUNCS_H
# define LEX_KEYWORDS_FUNCS_H

# include "../../types/type_lex_keywords.h"
# include "../../headers/symbols.h"
# include "../../headers/external_scanner_symbol_identifiers.h"
# include "../../headers/field_identifiers.h"
# include "../../headers/constants.h"
# include "../../char_set/charset_inline.h"
# include "./inline.h"
# include "../../../parse_types.h"

bool	lex_keywords_s0(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s1(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s2(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s3(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s4(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s5(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s6(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s7(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s8(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s9(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s10(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s11(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s12(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s13(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s14(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s15(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s16(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s17(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s18(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s19(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s20(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s21(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s22(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s23(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s24(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s25(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s26(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s27(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s28(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s29(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s30(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s31(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s32(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s33(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s34(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s35(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s36(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s37(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s38(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s39(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s40(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s41(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s42(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s43(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s44(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s45(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s46(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s47(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s48(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s49(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s50(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s51(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s52(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s53(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s54(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s55(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s56(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s57(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s58(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s59(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s60(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s61(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s62(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s63(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s64(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s65(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s66(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s67(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s68(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s69(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s70(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s71(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s72(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s73(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s74(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s75(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s76(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s77(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s78(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s79(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s80(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s81(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s82(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s83(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s84(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_s85(t_lexer *lexer, t_lexer_state *s);
bool	lex_keywords_default(t_lexer *lexer, t_lexer_state *s);

#endif // LEX_KEYWORDS_FUNCS_H
