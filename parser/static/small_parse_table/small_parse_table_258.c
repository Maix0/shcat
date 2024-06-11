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
	v->a[25800] = actions(751);
	v->a[25801] = 1;
	v->a[25802] = anon_sym_DOLLAR;
	v->a[25803] = actions(753);
	v->a[25804] = 1;
	v->a[25805] = anon_sym_DQUOTE;
	v->a[25806] = actions(755);
	v->a[25807] = 1;
	v->a[25808] = anon_sym_DOLLAR_LBRACE;
	v->a[25809] = actions(757);
	v->a[25810] = 1;
	v->a[25811] = anon_sym_DOLLAR_LPAREN;
	v->a[25812] = actions(759);
	v->a[25813] = 1;
	v->a[25814] = anon_sym_BQUOTE;
	v->a[25815] = state(260);
	v->a[25816] = 2;
	v->a[25817] = sym_concatenation;
	v->a[25818] = aux_sym_for_statement_repeat1;
	v->a[25819] = actions(928);
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = 3;
	v->a[25821] = sym_raw_string;
	v->a[25822] = sym_number;
	v->a[25823] = sym_word;
	v->a[25824] = state(646);
	v->a[25825] = 5;
	v->a[25826] = sym_arithmetic_expansion;
	v->a[25827] = sym_string;
	v->a[25828] = sym_simple_expansion;
	v->a[25829] = sym_expansion;
	v->a[25830] = sym_command_substitution;
	v->a[25831] = actions(541);
	v->a[25832] = 19;
	v->a[25833] = anon_sym_PIPE;
	v->a[25834] = anon_sym_SEMI_SEMI;
	v->a[25835] = anon_sym_AMP_AMP;
	v->a[25836] = anon_sym_PIPE_PIPE;
	v->a[25837] = anon_sym_LT;
	v->a[25838] = anon_sym_GT;
	v->a[25839] = anon_sym_GT_GT;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = anon_sym_AMP_GT;
	v->a[25841] = anon_sym_AMP_GT_GT;
	v->a[25842] = anon_sym_LT_AMP;
	v->a[25843] = anon_sym_GT_AMP;
	v->a[25844] = anon_sym_GT_PIPE;
	v->a[25845] = anon_sym_LT_AMP_DASH;
	v->a[25846] = anon_sym_GT_AMP_DASH;
	v->a[25847] = anon_sym_LT_LT;
	v->a[25848] = anon_sym_LT_LT_DASH;
	v->a[25849] = aux_sym_heredoc_redirect_token1;
	v->a[25850] = anon_sym_AMP;
	v->a[25851] = anon_sym_SEMI;
	v->a[25852] = 11;
	v->a[25853] = actions(3);
	v->a[25854] = 1;
	v->a[25855] = sym_comment;
	v->a[25856] = actions(543);
	v->a[25857] = 1;
	v->a[25858] = sym_file_descriptor;
	v->a[25859] = actions(749);
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = 1;
	v->a[25861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25862] = actions(751);
	v->a[25863] = 1;
	v->a[25864] = anon_sym_DOLLAR;
	v->a[25865] = actions(753);
	v->a[25866] = 1;
	v->a[25867] = anon_sym_DQUOTE;
	v->a[25868] = actions(755);
	v->a[25869] = 1;
	v->a[25870] = anon_sym_DOLLAR_LBRACE;
	v->a[25871] = actions(757);
	v->a[25872] = 1;
	v->a[25873] = anon_sym_DOLLAR_LPAREN;
	v->a[25874] = state(260);
	v->a[25875] = 2;
	v->a[25876] = sym_concatenation;
	v->a[25877] = aux_sym_for_statement_repeat1;
	v->a[25878] = actions(928);
	v->a[25879] = 3;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = sym_raw_string;
	v->a[25881] = sym_number;
	v->a[25882] = sym_word;
	v->a[25883] = state(646);
	v->a[25884] = 5;
	v->a[25885] = sym_arithmetic_expansion;
	v->a[25886] = sym_string;
	v->a[25887] = sym_simple_expansion;
	v->a[25888] = sym_expansion;
	v->a[25889] = sym_command_substitution;
	v->a[25890] = actions(541);
	v->a[25891] = 20;
	v->a[25892] = anon_sym_PIPE;
	v->a[25893] = anon_sym_SEMI_SEMI;
	v->a[25894] = anon_sym_AMP_AMP;
	v->a[25895] = anon_sym_PIPE_PIPE;
	v->a[25896] = anon_sym_LT;
	v->a[25897] = anon_sym_GT;
	v->a[25898] = anon_sym_GT_GT;
	v->a[25899] = anon_sym_AMP_GT;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
