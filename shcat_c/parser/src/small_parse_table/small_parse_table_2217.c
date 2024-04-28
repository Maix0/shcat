/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2217.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11085(t_small_parse_table_array *v)
{
	v->a[221700] = actions(9370);
	v->a[221701] = 2;
	v->a[221702] = anon_sym_DASH2;
	v->a[221703] = anon_sym_PLUS2;
	v->a[221704] = state(3426);
	v->a[221705] = 9;
	v->a[221706] = sym_subscript;
	v->a[221707] = sym__arithmetic_expression;
	v->a[221708] = sym__arithmetic_literal;
	v->a[221709] = sym__arithmetic_parenthesized_expression;
	v->a[221710] = sym_string;
	v->a[221711] = sym_number;
	v->a[221712] = sym_simple_expansion;
	v->a[221713] = sym_expansion;
	v->a[221714] = sym_command_substitution;
	v->a[221715] = 18;
	v->a[221716] = actions(3);
	v->a[221717] = 1;
	v->a[221718] = sym_comment;
	v->a[221719] = actions(7958);
	small_parse_table_11086(v);
}

void	small_parse_table_11086(t_small_parse_table_array *v)
{
	v->a[221720] = 1;
	v->a[221721] = anon_sym_DOLLAR_LBRACK;
	v->a[221722] = actions(7964);
	v->a[221723] = 1;
	v->a[221724] = anon_sym_DQUOTE;
	v->a[221725] = actions(7968);
	v->a[221726] = 1;
	v->a[221727] = aux_sym_number_token1;
	v->a[221728] = actions(7970);
	v->a[221729] = 1;
	v->a[221730] = aux_sym_number_token2;
	v->a[221731] = actions(7972);
	v->a[221732] = 1;
	v->a[221733] = anon_sym_DOLLAR_LBRACE;
	v->a[221734] = actions(7974);
	v->a[221735] = 1;
	v->a[221736] = anon_sym_DOLLAR_LPAREN;
	v->a[221737] = actions(7976);
	v->a[221738] = 1;
	v->a[221739] = anon_sym_BQUOTE;
	small_parse_table_11087(v);
}

void	small_parse_table_11087(t_small_parse_table_array *v)
{
	v->a[221740] = actions(7978);
	v->a[221741] = 1;
	v->a[221742] = anon_sym_DOLLAR_BQUOTE;
	v->a[221743] = actions(7988);
	v->a[221744] = 1;
	v->a[221745] = sym__brace_start;
	v->a[221746] = actions(9860);
	v->a[221747] = 1;
	v->a[221748] = sym_word;
	v->a[221749] = actions(9868);
	v->a[221750] = 1;
	v->a[221751] = sym__comment_word;
	v->a[221752] = actions(10608);
	v->a[221753] = 1;
	v->a[221754] = anon_sym_DOLLAR;
	v->a[221755] = actions(7954);
	v->a[221756] = 2;
	v->a[221757] = anon_sym_LPAREN_LPAREN;
	v->a[221758] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[221759] = actions(7980);
	small_parse_table_11088(v);
}

void	small_parse_table_11088(t_small_parse_table_array *v)
{
	v->a[221760] = 2;
	v->a[221761] = anon_sym_LT_LPAREN;
	v->a[221762] = anon_sym_GT_LPAREN;
	v->a[221763] = actions(9864);
	v->a[221764] = 2;
	v->a[221765] = sym_test_operator;
	v->a[221766] = sym__special_character;
	v->a[221767] = actions(9866);
	v->a[221768] = 3;
	v->a[221769] = sym__bare_dollar;
	v->a[221770] = sym_raw_string;
	v->a[221771] = sym_ansi_c_string;
	v->a[221772] = state(4357);
	v->a[221773] = 9;
	v->a[221774] = sym_arithmetic_expansion;
	v->a[221775] = sym_brace_expression;
	v->a[221776] = sym_string;
	v->a[221777] = sym_translated_string;
	v->a[221778] = sym_number;
	v->a[221779] = sym_simple_expansion;
	small_parse_table_11089(v);
}

void	small_parse_table_11089(t_small_parse_table_array *v)
{
	v->a[221780] = sym_expansion;
	v->a[221781] = sym_command_substitution;
	v->a[221782] = sym_process_substitution;
	v->a[221783] = 18;
	v->a[221784] = actions(3);
	v->a[221785] = 1;
	v->a[221786] = sym_comment;
	v->a[221787] = actions(191);
	v->a[221788] = 1;
	v->a[221789] = anon_sym_DOLLAR_LBRACK;
	v->a[221790] = actions(197);
	v->a[221791] = 1;
	v->a[221792] = anon_sym_DQUOTE;
	v->a[221793] = actions(201);
	v->a[221794] = 1;
	v->a[221795] = aux_sym_number_token1;
	v->a[221796] = actions(203);
	v->a[221797] = 1;
	v->a[221798] = aux_sym_number_token2;
	v->a[221799] = actions(205);
	small_parse_table_11090(v);
}

/* EOF small_parse_table_2217.c */
