/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_841.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4205(t_small_parse_table_array *v)
{
	v->a[84100] = anon_sym_LT_LT_DASH;
	v->a[84101] = 3;
	v->a[84102] = actions(3);
	v->a[84103] = 1;
	v->a[84104] = sym_comment;
	v->a[84105] = actions(1315);
	v->a[84106] = 1;
	v->a[84107] = sym__concat;
	v->a[84108] = actions(1313);
	v->a[84109] = 15;
	v->a[84110] = anon_sym_SEMI_SEMI;
	v->a[84111] = aux_sym_heredoc_redirect_token1;
	v->a[84112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84113] = anon_sym_AMP;
	v->a[84114] = aux_sym_concatenation_token1;
	v->a[84115] = anon_sym_DOLLAR;
	v->a[84116] = anon_sym_DQUOTE;
	v->a[84117] = sym_raw_string;
	v->a[84118] = aux_sym_number_token1;
	v->a[84119] = aux_sym_number_token2;
	small_parse_table_4206(v);
}

void	small_parse_table_4206(t_small_parse_table_array *v)
{
	v->a[84120] = anon_sym_DOLLAR_LBRACE;
	v->a[84121] = anon_sym_DOLLAR_LPAREN;
	v->a[84122] = anon_sym_BQUOTE;
	v->a[84123] = sym_word;
	v->a[84124] = anon_sym_SEMI;
	v->a[84125] = 6;
	v->a[84126] = actions(3);
	v->a[84127] = 1;
	v->a[84128] = sym_comment;
	v->a[84129] = actions(3422);
	v->a[84130] = 1;
	v->a[84131] = anon_sym_RBRACE;
	v->a[84132] = actions(3424);
	v->a[84133] = 1;
	v->a[84134] = anon_sym_PERCENT;
	v->a[84135] = state(2216);
	v->a[84136] = 2;
	v->a[84137] = sym_expansion_expression;
	v->a[84138] = sym_expansion_regex;
	v->a[84139] = actions(3426);
	small_parse_table_4207(v);
}

void	small_parse_table_4207(t_small_parse_table_array *v)
{
	v->a[84140] = 3;
	v->a[84141] = sym__immediate_double_hash;
	v->a[84142] = anon_sym_POUND;
	v->a[84143] = anon_sym_PERCENT_PERCENT;
	v->a[84144] = actions(3428);
	v->a[84145] = 8;
	v->a[84146] = anon_sym_COLON_DASH;
	v->a[84147] = anon_sym_DASH3;
	v->a[84148] = anon_sym_COLON_EQ;
	v->a[84149] = anon_sym_EQ2;
	v->a[84150] = anon_sym_COLON_QMARK;
	v->a[84151] = anon_sym_QMARK2;
	v->a[84152] = anon_sym_COLON_PLUS;
	v->a[84153] = anon_sym_PLUS3;
	v->a[84154] = 13;
	v->a[84155] = actions(3);
	v->a[84156] = 1;
	v->a[84157] = sym_comment;
	v->a[84158] = actions(2121);
	v->a[84159] = 1;
	small_parse_table_4208(v);
}

void	small_parse_table_4208(t_small_parse_table_array *v)
{
	v->a[84160] = anon_sym_DOLLAR;
	v->a[84161] = actions(2123);
	v->a[84162] = 1;
	v->a[84163] = anon_sym_DQUOTE;
	v->a[84164] = actions(2129);
	v->a[84165] = 1;
	v->a[84166] = anon_sym_DOLLAR_LBRACE;
	v->a[84167] = actions(2131);
	v->a[84168] = 1;
	v->a[84169] = anon_sym_DOLLAR_LPAREN;
	v->a[84170] = actions(2133);
	v->a[84171] = 1;
	v->a[84172] = anon_sym_BQUOTE;
	v->a[84173] = actions(3432);
	v->a[84174] = 1;
	v->a[84175] = anon_sym_RBRACE;
	v->a[84176] = actions(3434);
	v->a[84177] = 1;
	v->a[84178] = sym_variable_name;
	v->a[84179] = actions(3436);
	small_parse_table_4209(v);
}

void	small_parse_table_4209(t_small_parse_table_array *v)
{
	v->a[84180] = 1;
	v->a[84181] = sym__expansion_word;
	v->a[84182] = state(2193);
	v->a[84183] = 1;
	v->a[84184] = sym__concatenation_in_expansion;
	v->a[84185] = actions(3430);
	v->a[84186] = 2;
	v->a[84187] = sym_raw_string;
	v->a[84188] = sym_word;
	v->a[84189] = state(1999);
	v->a[84190] = 2;
	v->a[84191] = sym_string;
	v->a[84192] = sym_expansion;
	v->a[84193] = state(2004);
	v->a[84194] = 2;
	v->a[84195] = sym_simple_expansion;
	v->a[84196] = sym_command_substitution;
	v->a[84197] = 6;
	v->a[84198] = actions(3);
	v->a[84199] = 1;
	small_parse_table_4210(v);
}

/* EOF small_parse_table_841.c */
