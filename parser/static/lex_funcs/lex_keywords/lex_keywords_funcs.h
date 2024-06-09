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
bool	lex_keywords_default(t_lexer *lexer, t_lexer_state *s);

#endif // LEX_KEYWORDS_FUNCS_H
