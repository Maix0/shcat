/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_985.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4925(t_small_parse_table_array *v)
{
	v->a[98500] = anon_sym_DOLLAR;
	v->a[98501] = actions(371);
	v->a[98502] = 1;
	v->a[98503] = anon_sym_DQUOTE;
	v->a[98504] = actions(375);
	v->a[98505] = 1;
	v->a[98506] = aux_sym_number_token1;
	v->a[98507] = actions(377);
	v->a[98508] = 1;
	v->a[98509] = aux_sym_number_token2;
	v->a[98510] = actions(379);
	v->a[98511] = 1;
	v->a[98512] = anon_sym_DOLLAR_LBRACE;
	v->a[98513] = actions(381);
	v->a[98514] = 1;
	v->a[98515] = anon_sym_DOLLAR_LPAREN;
	v->a[98516] = actions(385);
	v->a[98517] = 1;
	v->a[98518] = anon_sym_DOLLAR_BQUOTE;
	v->a[98519] = actions(389);
	small_parse_table_4926(v);
}

void	small_parse_table_4926(t_small_parse_table_array *v)
{
	v->a[98520] = 1;
	v->a[98521] = sym_test_operator;
	v->a[98522] = actions(391);
	v->a[98523] = 1;
	v->a[98524] = sym__brace_start;
	v->a[98525] = actions(5807);
	v->a[98526] = 1;
	v->a[98527] = sym__special_character;
	v->a[98528] = actions(5809);
	v->a[98529] = 1;
	v->a[98530] = anon_sym_BQUOTE;
	v->a[98531] = state(2641);
	v->a[98532] = 1;
	v->a[98533] = aux_sym__literal_repeat1;
	v->a[98534] = state(2960);
	v->a[98535] = 1;
	v->a[98536] = sym__expression;
	v->a[98537] = actions(183);
	v->a[98538] = 2;
	v->a[98539] = anon_sym_PLUS_PLUS2;
	small_parse_table_4927(v);
}

void	small_parse_table_4927(t_small_parse_table_array *v)
{
	v->a[98540] = anon_sym_DASH_DASH2;
	v->a[98541] = actions(185);
	v->a[98542] = 2;
	v->a[98543] = anon_sym_DASH2;
	v->a[98544] = anon_sym_PLUS2;
	v->a[98545] = actions(352);
	v->a[98546] = 2;
	v->a[98547] = anon_sym_LPAREN_LPAREN;
	v->a[98548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98549] = actions(373);
	v->a[98550] = 2;
	v->a[98551] = sym_raw_string;
	v->a[98552] = sym_ansi_c_string;
	v->a[98553] = actions(387);
	v->a[98554] = 2;
	v->a[98555] = anon_sym_LT_LPAREN;
	v->a[98556] = anon_sym_GT_LPAREN;
	v->a[98557] = state(3071);
	v->a[98558] = 6;
	v->a[98559] = sym_binary_expression;
	small_parse_table_4928(v);
}

void	small_parse_table_4928(t_small_parse_table_array *v)
{
	v->a[98560] = sym_ternary_expression;
	v->a[98561] = sym_unary_expression;
	v->a[98562] = sym_postfix_expression;
	v->a[98563] = sym_parenthesized_expression;
	v->a[98564] = sym_concatenation;
	v->a[98565] = state(2521);
	v->a[98566] = 9;
	v->a[98567] = sym_arithmetic_expansion;
	v->a[98568] = sym_brace_expression;
	v->a[98569] = sym_string;
	v->a[98570] = sym_translated_string;
	v->a[98571] = sym_number;
	v->a[98572] = sym_simple_expansion;
	v->a[98573] = sym_expansion;
	v->a[98574] = sym_command_substitution;
	v->a[98575] = sym_process_substitution;
	v->a[98576] = 26;
	v->a[98577] = actions(71);
	v->a[98578] = 1;
	v->a[98579] = sym_comment;
	small_parse_table_4929(v);
}

void	small_parse_table_4929(t_small_parse_table_array *v)
{
	v->a[98580] = actions(187);
	v->a[98581] = 1;
	v->a[98582] = anon_sym_TILDE;
	v->a[98583] = actions(350);
	v->a[98584] = 1;
	v->a[98585] = sym_word;
	v->a[98586] = actions(359);
	v->a[98587] = 1;
	v->a[98588] = anon_sym_LPAREN;
	v->a[98589] = actions(361);
	v->a[98590] = 1;
	v->a[98591] = anon_sym_BANG;
	v->a[98592] = actions(363);
	v->a[98593] = 1;
	v->a[98594] = anon_sym_DOLLAR_LBRACK;
	v->a[98595] = actions(367);
	v->a[98596] = 1;
	v->a[98597] = anon_sym_DOLLAR;
	v->a[98598] = actions(371);
	v->a[98599] = 1;
	small_parse_table_4930(v);
}

/* EOF small_parse_table_985.c */
