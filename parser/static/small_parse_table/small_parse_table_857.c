/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_857.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4285(t_small_parse_table_array *v)
{
	v->a[85700] = anon_sym_LT_AMP_DASH;
	v->a[85701] = anon_sym_GT_AMP_DASH;
	v->a[85702] = state(1776);
	v->a[85703] = 2;
	v->a[85704] = sym_variable_assignment;
	v->a[85705] = aux_sym_command_repeat1;
	v->a[85706] = actions(4773);
	v->a[85707] = 3;
	v->a[85708] = anon_sym_GT_GT;
	v->a[85709] = anon_sym_AMP_GT_GT;
	v->a[85710] = anon_sym_GT_PIPE;
	v->a[85711] = actions(4768);
	v->a[85712] = 5;
	v->a[85713] = anon_sym_DOLLAR;
	v->a[85714] = aux_sym_number_token1;
	v->a[85715] = aux_sym_number_token2;
	v->a[85716] = anon_sym_DOLLAR_LPAREN;
	v->a[85717] = sym_word;
	v->a[85718] = actions(4770);
	v->a[85719] = 5;
	small_parse_table_4286(v);
}

void	small_parse_table_4286(t_small_parse_table_array *v)
{
	v->a[85720] = anon_sym_LT;
	v->a[85721] = anon_sym_GT;
	v->a[85722] = anon_sym_AMP_GT;
	v->a[85723] = anon_sym_LT_AMP;
	v->a[85724] = anon_sym_GT_AMP;
	v->a[85725] = actions(4779);
	v->a[85726] = 9;
	v->a[85727] = sym_test_operator;
	v->a[85728] = sym__brace_start;
	v->a[85729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85730] = sym__special_character;
	v->a[85731] = anon_sym_DQUOTE;
	v->a[85732] = sym_raw_string;
	v->a[85733] = anon_sym_DOLLAR_LBRACE;
	v->a[85734] = anon_sym_BQUOTE;
	v->a[85735] = anon_sym_DOLLAR_BQUOTE;
	v->a[85736] = 21;
	v->a[85737] = actions(57);
	v->a[85738] = 1;
	v->a[85739] = sym_comment;
	small_parse_table_4287(v);
}

void	small_parse_table_4287(t_small_parse_table_array *v)
{
	v->a[85740] = actions(4614);
	v->a[85741] = 1;
	v->a[85742] = anon_sym_LPAREN;
	v->a[85743] = actions(4616);
	v->a[85744] = 1;
	v->a[85745] = anon_sym_BANG;
	v->a[85746] = actions(4622);
	v->a[85747] = 1;
	v->a[85748] = anon_sym_TILDE;
	v->a[85749] = actions(4624);
	v->a[85750] = 1;
	v->a[85751] = anon_sym_DOLLAR;
	v->a[85752] = actions(4626);
	v->a[85753] = 1;
	v->a[85754] = anon_sym_DQUOTE;
	v->a[85755] = actions(4628);
	v->a[85756] = 1;
	v->a[85757] = aux_sym_number_token1;
	v->a[85758] = actions(4630);
	v->a[85759] = 1;
	small_parse_table_4288(v);
}

void	small_parse_table_4288(t_small_parse_table_array *v)
{
	v->a[85760] = aux_sym_number_token2;
	v->a[85761] = actions(4632);
	v->a[85762] = 1;
	v->a[85763] = anon_sym_DOLLAR_LBRACE;
	v->a[85764] = actions(4634);
	v->a[85765] = 1;
	v->a[85766] = anon_sym_DOLLAR_LPAREN;
	v->a[85767] = actions(4636);
	v->a[85768] = 1;
	v->a[85769] = anon_sym_BQUOTE;
	v->a[85770] = actions(4638);
	v->a[85771] = 1;
	v->a[85772] = anon_sym_DOLLAR_BQUOTE;
	v->a[85773] = actions(4787);
	v->a[85774] = 1;
	v->a[85775] = aux_sym__simple_variable_name_token1;
	v->a[85776] = actions(4789);
	v->a[85777] = 1;
	v->a[85778] = sym_variable_name;
	v->a[85779] = state(1637);
	small_parse_table_4289(v);
}

void	small_parse_table_4289(t_small_parse_table_array *v)
{
	v->a[85780] = 1;
	v->a[85781] = sym__arithmetic_postfix_expression;
	v->a[85782] = state(1638);
	v->a[85783] = 1;
	v->a[85784] = sym__arithmetic_unary_expression;
	v->a[85785] = state(1640);
	v->a[85786] = 1;
	v->a[85787] = sym__arithmetic_ternary_expression;
	v->a[85788] = state(1642);
	v->a[85789] = 1;
	v->a[85790] = sym__arithmetic_binary_expression;
	v->a[85791] = actions(4618);
	v->a[85792] = 2;
	v->a[85793] = anon_sym_PLUS_PLUS;
	v->a[85794] = anon_sym_DASH_DASH;
	v->a[85795] = actions(4620);
	v->a[85796] = 2;
	v->a[85797] = anon_sym_DASH2;
	v->a[85798] = anon_sym_PLUS2;
	v->a[85799] = state(1608);
	small_parse_table_4290(v);
}

/* EOF small_parse_table_857.c */
