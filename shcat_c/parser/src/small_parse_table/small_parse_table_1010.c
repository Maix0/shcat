/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1010.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5050(t_small_parse_table_array *v)
{
	v->a[101000] = anon_sym_DOLLAR_LPAREN;
	v->a[101001] = anon_sym_BQUOTE;
	v->a[101002] = anon_sym_DOLLAR_BQUOTE;
	v->a[101003] = anon_sym_LT_LPAREN;
	v->a[101004] = anon_sym_GT_LPAREN;
	v->a[101005] = sym_word;
	v->a[101006] = 26;
	v->a[101007] = actions(71);
	v->a[101008] = 1;
	v->a[101009] = sym_comment;
	v->a[101010] = actions(363);
	v->a[101011] = 1;
	v->a[101012] = anon_sym_DOLLAR_LBRACK;
	v->a[101013] = actions(367);
	v->a[101014] = 1;
	v->a[101015] = anon_sym_DOLLAR;
	v->a[101016] = actions(371);
	v->a[101017] = 1;
	v->a[101018] = anon_sym_DQUOTE;
	v->a[101019] = actions(375);
	small_parse_table_5051(v);
}

void	small_parse_table_5051(t_small_parse_table_array *v)
{
	v->a[101020] = 1;
	v->a[101021] = aux_sym_number_token1;
	v->a[101022] = actions(377);
	v->a[101023] = 1;
	v->a[101024] = aux_sym_number_token2;
	v->a[101025] = actions(379);
	v->a[101026] = 1;
	v->a[101027] = anon_sym_DOLLAR_LBRACE;
	v->a[101028] = actions(381);
	v->a[101029] = 1;
	v->a[101030] = anon_sym_DOLLAR_LPAREN;
	v->a[101031] = actions(385);
	v->a[101032] = 1;
	v->a[101033] = anon_sym_DOLLAR_BQUOTE;
	v->a[101034] = actions(391);
	v->a[101035] = 1;
	v->a[101036] = sym__brace_start;
	v->a[101037] = actions(1091);
	v->a[101038] = 1;
	v->a[101039] = sym_word;
	small_parse_table_5052(v);
}

void	small_parse_table_5052(t_small_parse_table_array *v)
{
	v->a[101040] = actions(1093);
	v->a[101041] = 1;
	v->a[101042] = anon_sym_LPAREN;
	v->a[101043] = actions(1095);
	v->a[101044] = 1;
	v->a[101045] = anon_sym_BANG;
	v->a[101046] = actions(1103);
	v->a[101047] = 1;
	v->a[101048] = anon_sym_TILDE;
	v->a[101049] = actions(1113);
	v->a[101050] = 1;
	v->a[101051] = sym_test_operator;
	v->a[101052] = actions(5809);
	v->a[101053] = 1;
	v->a[101054] = anon_sym_BQUOTE;
	v->a[101055] = actions(5916);
	v->a[101056] = 1;
	v->a[101057] = sym__special_character;
	v->a[101058] = state(2472);
	v->a[101059] = 1;
	small_parse_table_5053(v);
}

void	small_parse_table_5053(t_small_parse_table_array *v)
{
	v->a[101060] = aux_sym__literal_repeat1;
	v->a[101061] = state(2831);
	v->a[101062] = 1;
	v->a[101063] = sym__expression;
	v->a[101064] = actions(352);
	v->a[101065] = 2;
	v->a[101066] = anon_sym_LPAREN_LPAREN;
	v->a[101067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101068] = actions(387);
	v->a[101069] = 2;
	v->a[101070] = anon_sym_LT_LPAREN;
	v->a[101071] = anon_sym_GT_LPAREN;
	v->a[101072] = actions(1099);
	v->a[101073] = 2;
	v->a[101074] = anon_sym_PLUS_PLUS2;
	v->a[101075] = anon_sym_DASH_DASH2;
	v->a[101076] = actions(1101);
	v->a[101077] = 2;
	v->a[101078] = anon_sym_DASH2;
	v->a[101079] = anon_sym_PLUS2;
	small_parse_table_5054(v);
}

void	small_parse_table_5054(t_small_parse_table_array *v)
{
	v->a[101080] = actions(1109);
	v->a[101081] = 2;
	v->a[101082] = sym_raw_string;
	v->a[101083] = sym_ansi_c_string;
	v->a[101084] = state(2863);
	v->a[101085] = 6;
	v->a[101086] = sym_binary_expression;
	v->a[101087] = sym_ternary_expression;
	v->a[101088] = sym_unary_expression;
	v->a[101089] = sym_postfix_expression;
	v->a[101090] = sym_parenthesized_expression;
	v->a[101091] = sym_concatenation;
	v->a[101092] = state(2451);
	v->a[101093] = 9;
	v->a[101094] = sym_arithmetic_expansion;
	v->a[101095] = sym_brace_expression;
	v->a[101096] = sym_string;
	v->a[101097] = sym_translated_string;
	v->a[101098] = sym_number;
	v->a[101099] = sym_simple_expansion;
	small_parse_table_5055(v);
}

/* EOF small_parse_table_1010.c */
