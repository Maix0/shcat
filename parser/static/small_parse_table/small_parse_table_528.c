/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_528.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2640(t_small_parse_table_array *v)
{
	v->a[52800] = sym_concatenation;
	v->a[52801] = state(1995);
	v->a[52802] = 1;
	v->a[52803] = sym_file_redirect;
	v->a[52804] = actions(627);
	v->a[52805] = 2;
	v->a[52806] = sym_test_operator;
	v->a[52807] = sym_raw_string;
	v->a[52808] = actions(2896);
	v->a[52809] = 2;
	v->a[52810] = anon_sym_LT_AMP_DASH;
	v->a[52811] = anon_sym_GT_AMP_DASH;
	v->a[52812] = state(1776);
	v->a[52813] = 2;
	v->a[52814] = sym_variable_assignment;
	v->a[52815] = aux_sym_command_repeat1;
	v->a[52816] = actions(2894);
	v->a[52817] = 3;
	v->a[52818] = anon_sym_GT_GT;
	v->a[52819] = anon_sym_AMP_GT_GT;
	small_parse_table_2641(v);
}

void	small_parse_table_2641(t_small_parse_table_array *v)
{
	v->a[52820] = anon_sym_GT_PIPE;
	v->a[52821] = actions(2892);
	v->a[52822] = 5;
	v->a[52823] = anon_sym_LT;
	v->a[52824] = anon_sym_GT;
	v->a[52825] = anon_sym_AMP_GT;
	v->a[52826] = anon_sym_LT_AMP;
	v->a[52827] = anon_sym_GT_AMP;
	v->a[52828] = state(1264);
	v->a[52829] = 7;
	v->a[52830] = sym_arithmetic_expansion;
	v->a[52831] = sym_brace_expression;
	v->a[52832] = sym_string;
	v->a[52833] = sym_number;
	v->a[52834] = sym_simple_expansion;
	v->a[52835] = sym_expansion;
	v->a[52836] = sym_command_substitution;
	v->a[52837] = 3;
	v->a[52838] = actions(3);
	v->a[52839] = 1;
	small_parse_table_2642(v);
}

void	small_parse_table_2642(t_small_parse_table_array *v)
{
	v->a[52840] = sym_comment;
	v->a[52841] = actions(2828);
	v->a[52842] = 7;
	v->a[52843] = sym_file_descriptor;
	v->a[52844] = sym__concat;
	v->a[52845] = sym_test_operator;
	v->a[52846] = sym__bare_dollar;
	v->a[52847] = sym__brace_start;
	v->a[52848] = ts_builtin_sym_end;
	v->a[52849] = aux_sym_heredoc_redirect_token1;
	v->a[52850] = actions(2826);
	v->a[52851] = 32;
	v->a[52852] = anon_sym_PIPE;
	v->a[52853] = anon_sym_SEMI_SEMI;
	v->a[52854] = anon_sym_PIPE_AMP;
	v->a[52855] = anon_sym_AMP_AMP;
	v->a[52856] = anon_sym_PIPE_PIPE;
	v->a[52857] = anon_sym_LT;
	v->a[52858] = anon_sym_GT;
	v->a[52859] = anon_sym_GT_GT;
	small_parse_table_2643(v);
}

void	small_parse_table_2643(t_small_parse_table_array *v)
{
	v->a[52860] = anon_sym_AMP_GT;
	v->a[52861] = anon_sym_AMP_GT_GT;
	v->a[52862] = anon_sym_LT_AMP;
	v->a[52863] = anon_sym_GT_AMP;
	v->a[52864] = anon_sym_GT_PIPE;
	v->a[52865] = anon_sym_LT_AMP_DASH;
	v->a[52866] = anon_sym_GT_AMP_DASH;
	v->a[52867] = anon_sym_LT_LT;
	v->a[52868] = anon_sym_LT_LT_DASH;
	v->a[52869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[52870] = anon_sym_AMP;
	v->a[52871] = aux_sym_concatenation_token1;
	v->a[52872] = anon_sym_DOLLAR;
	v->a[52873] = sym__special_character;
	v->a[52874] = anon_sym_DQUOTE;
	v->a[52875] = sym_raw_string;
	v->a[52876] = aux_sym_number_token1;
	v->a[52877] = aux_sym_number_token2;
	v->a[52878] = anon_sym_DOLLAR_LBRACE;
	v->a[52879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2644(v);
}

void	small_parse_table_2644(t_small_parse_table_array *v)
{
	v->a[52880] = anon_sym_BQUOTE;
	v->a[52881] = anon_sym_DOLLAR_BQUOTE;
	v->a[52882] = sym_word;
	v->a[52883] = anon_sym_SEMI;
	v->a[52884] = 3;
	v->a[52885] = actions(3);
	v->a[52886] = 1;
	v->a[52887] = sym_comment;
	v->a[52888] = actions(3050);
	v->a[52889] = 7;
	v->a[52890] = sym_file_descriptor;
	v->a[52891] = sym__concat;
	v->a[52892] = sym_test_operator;
	v->a[52893] = sym__bare_dollar;
	v->a[52894] = sym__brace_start;
	v->a[52895] = ts_builtin_sym_end;
	v->a[52896] = aux_sym_heredoc_redirect_token1;
	v->a[52897] = actions(3048);
	v->a[52898] = 32;
	v->a[52899] = anon_sym_PIPE;
	small_parse_table_2645(v);
}

/* EOF small_parse_table_528.c */
