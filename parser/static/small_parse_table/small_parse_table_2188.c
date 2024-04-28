/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2188.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10940(t_small_parse_table_array *v)
{
	v->a[218800] = sym_expansion;
	v->a[218801] = sym_command_substitution;
	v->a[218802] = sym_process_substitution;
	v->a[218803] = 18;
	v->a[218804] = actions(3);
	v->a[218805] = 1;
	v->a[218806] = sym_comment;
	v->a[218807] = actions(2341);
	v->a[218808] = 1;
	v->a[218809] = aux_sym_number_token1;
	v->a[218810] = actions(2343);
	v->a[218811] = 1;
	v->a[218812] = aux_sym_number_token2;
	v->a[218813] = actions(2347);
	v->a[218814] = 1;
	v->a[218815] = anon_sym_DOLLAR_LPAREN;
	v->a[218816] = actions(2357);
	v->a[218817] = 1;
	v->a[218818] = sym__brace_start;
	v->a[218819] = actions(9010);
	small_parse_table_10941(v);
}

void	small_parse_table_10941(t_small_parse_table_array *v)
{
	v->a[218820] = 1;
	v->a[218821] = anon_sym_DOLLAR_LBRACK;
	v->a[218822] = actions(9014);
	v->a[218823] = 1;
	v->a[218824] = anon_sym_DQUOTE;
	v->a[218825] = actions(9018);
	v->a[218826] = 1;
	v->a[218827] = anon_sym_DOLLAR_LBRACE;
	v->a[218828] = actions(9020);
	v->a[218829] = 1;
	v->a[218830] = anon_sym_BQUOTE;
	v->a[218831] = actions(9022);
	v->a[218832] = 1;
	v->a[218833] = anon_sym_DOLLAR_BQUOTE;
	v->a[218834] = actions(10358);
	v->a[218835] = 1;
	v->a[218836] = sym_word;
	v->a[218837] = actions(10364);
	v->a[218838] = 1;
	v->a[218839] = sym__comment_word;
	small_parse_table_10942(v);
}

void	small_parse_table_10942(t_small_parse_table_array *v)
{
	v->a[218840] = actions(10422);
	v->a[218841] = 1;
	v->a[218842] = anon_sym_DOLLAR;
	v->a[218843] = actions(9008);
	v->a[218844] = 2;
	v->a[218845] = anon_sym_LPAREN_LPAREN;
	v->a[218846] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[218847] = actions(9024);
	v->a[218848] = 2;
	v->a[218849] = anon_sym_LT_LPAREN;
	v->a[218850] = anon_sym_GT_LPAREN;
	v->a[218851] = actions(10360);
	v->a[218852] = 2;
	v->a[218853] = sym_test_operator;
	v->a[218854] = sym__special_character;
	v->a[218855] = actions(10362);
	v->a[218856] = 3;
	v->a[218857] = sym__bare_dollar;
	v->a[218858] = sym_raw_string;
	v->a[218859] = sym_ansi_c_string;
	small_parse_table_10943(v);
}

void	small_parse_table_10943(t_small_parse_table_array *v)
{
	v->a[218860] = state(1462);
	v->a[218861] = 9;
	v->a[218862] = sym_arithmetic_expansion;
	v->a[218863] = sym_brace_expression;
	v->a[218864] = sym_string;
	v->a[218865] = sym_translated_string;
	v->a[218866] = sym_number;
	v->a[218867] = sym_simple_expansion;
	v->a[218868] = sym_expansion;
	v->a[218869] = sym_command_substitution;
	v->a[218870] = sym_process_substitution;
	v->a[218871] = 18;
	v->a[218872] = actions(3);
	v->a[218873] = 1;
	v->a[218874] = sym_comment;
	v->a[218875] = actions(8178);
	v->a[218876] = 1;
	v->a[218877] = anon_sym_DOLLAR_LBRACK;
	v->a[218878] = actions(8184);
	v->a[218879] = 1;
	small_parse_table_10944(v);
}

void	small_parse_table_10944(t_small_parse_table_array *v)
{
	v->a[218880] = anon_sym_DQUOTE;
	v->a[218881] = actions(8188);
	v->a[218882] = 1;
	v->a[218883] = aux_sym_number_token1;
	v->a[218884] = actions(8190);
	v->a[218885] = 1;
	v->a[218886] = aux_sym_number_token2;
	v->a[218887] = actions(8192);
	v->a[218888] = 1;
	v->a[218889] = anon_sym_DOLLAR_LBRACE;
	v->a[218890] = actions(8194);
	v->a[218891] = 1;
	v->a[218892] = anon_sym_DOLLAR_LPAREN;
	v->a[218893] = actions(8196);
	v->a[218894] = 1;
	v->a[218895] = anon_sym_BQUOTE;
	v->a[218896] = actions(8198);
	v->a[218897] = 1;
	v->a[218898] = anon_sym_DOLLAR_BQUOTE;
	v->a[218899] = actions(8208);
	small_parse_table_10945(v);
}

/* EOF small_parse_table_2188.c */
