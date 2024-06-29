/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_258.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1290(t_small_parse_table_array *v)
{
	v->a[25800] = anon_sym_LT_LT_DASH;
	v->a[25801] = actions(893);
	v->a[25802] = 2;
	v->a[25803] = anon_sym_AMP_AMP;
	v->a[25804] = anon_sym_PIPE_PIPE;
	v->a[25805] = state(1270);
	v->a[25806] = 2;
	v->a[25807] = sym_variable_assignment;
	v->a[25808] = aux_sym__variable_assignments_repeat1;
	v->a[25809] = actions(800);
	v->a[25810] = 3;
	v->a[25811] = aux_sym_heredoc_redirect_token1;
	v->a[25812] = anon_sym_AMP;
	v->a[25813] = anon_sym_SEMI;
	v->a[25814] = state(1256);
	v->a[25815] = 3;
	v->a[25816] = sym_file_redirect;
	v->a[25817] = sym_heredoc_redirect;
	v->a[25818] = aux_sym_redirected_statement_repeat1;
	v->a[25819] = actions(762);
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = 19;
	v->a[25821] = anon_sym_LT;
	v->a[25822] = anon_sym_GT;
	v->a[25823] = anon_sym_GT_GT;
	v->a[25824] = anon_sym_AMP_GT;
	v->a[25825] = anon_sym_AMP_GT_GT;
	v->a[25826] = anon_sym_LT_AMP;
	v->a[25827] = anon_sym_GT_AMP;
	v->a[25828] = anon_sym_GT_PIPE;
	v->a[25829] = anon_sym_LT_AMP_DASH;
	v->a[25830] = anon_sym_GT_AMP_DASH;
	v->a[25831] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25832] = anon_sym_DOLLAR;
	v->a[25833] = anon_sym_DQUOTE;
	v->a[25834] = sym_raw_string;
	v->a[25835] = sym_number;
	v->a[25836] = anon_sym_DOLLAR_LBRACE;
	v->a[25837] = anon_sym_DOLLAR_LPAREN;
	v->a[25838] = anon_sym_BQUOTE;
	v->a[25839] = sym_word;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = 12;
	v->a[25841] = actions(3);
	v->a[25842] = 1;
	v->a[25843] = sym_comment;
	v->a[25844] = actions(536);
	v->a[25845] = 1;
	v->a[25846] = sym_file_descriptor;
	v->a[25847] = actions(782);
	v->a[25848] = 1;
	v->a[25849] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25850] = actions(785);
	v->a[25851] = 1;
	v->a[25852] = anon_sym_DOLLAR;
	v->a[25853] = actions(788);
	v->a[25854] = 1;
	v->a[25855] = anon_sym_DQUOTE;
	v->a[25856] = actions(791);
	v->a[25857] = 1;
	v->a[25858] = anon_sym_DOLLAR_LBRACE;
	v->a[25859] = actions(794);
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = 1;
	v->a[25861] = anon_sym_DOLLAR_LPAREN;
	v->a[25862] = actions(797);
	v->a[25863] = 1;
	v->a[25864] = anon_sym_BQUOTE;
	v->a[25865] = state(263);
	v->a[25866] = 2;
	v->a[25867] = sym_concatenation;
	v->a[25868] = aux_sym_for_statement_repeat1;
	v->a[25869] = actions(918);
	v->a[25870] = 3;
	v->a[25871] = sym_raw_string;
	v->a[25872] = sym_number;
	v->a[25873] = sym_word;
	v->a[25874] = state(647);
	v->a[25875] = 5;
	v->a[25876] = sym_arithmetic_expansion;
	v->a[25877] = sym_string;
	v->a[25878] = sym_simple_expansion;
	v->a[25879] = sym_expansion;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = sym_command_substitution;
	v->a[25881] = actions(516);
	v->a[25882] = 19;
	v->a[25883] = anon_sym_PIPE;
	v->a[25884] = anon_sym_SEMI_SEMI;
	v->a[25885] = anon_sym_AMP_AMP;
	v->a[25886] = anon_sym_PIPE_PIPE;
	v->a[25887] = anon_sym_LT;
	v->a[25888] = anon_sym_GT;
	v->a[25889] = anon_sym_GT_GT;
	v->a[25890] = anon_sym_AMP_GT;
	v->a[25891] = anon_sym_AMP_GT_GT;
	v->a[25892] = anon_sym_LT_AMP;
	v->a[25893] = anon_sym_GT_AMP;
	v->a[25894] = anon_sym_GT_PIPE;
	v->a[25895] = anon_sym_LT_AMP_DASH;
	v->a[25896] = anon_sym_GT_AMP_DASH;
	v->a[25897] = anon_sym_LT_LT;
	v->a[25898] = anon_sym_LT_LT_DASH;
	v->a[25899] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
