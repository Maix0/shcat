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
	v->a[25800] = 1;
	v->a[25801] = sym_concatenation;
	v->a[25802] = state(2089);
	v->a[25803] = 1;
	v->a[25804] = sym__heredoc_expression;
	v->a[25805] = state(2090);
	v->a[25806] = 1;
	v->a[25807] = sym__heredoc_pipeline;
	v->a[25808] = actions(921);
	v->a[25809] = 2;
	v->a[25810] = sym_raw_string;
	v->a[25811] = sym_word;
	v->a[25812] = actions(923);
	v->a[25813] = 2;
	v->a[25814] = anon_sym_PIPE;
	v->a[25815] = anon_sym_PIPE_AMP;
	v->a[25816] = actions(925);
	v->a[25817] = 2;
	v->a[25818] = anon_sym_AMP_AMP;
	v->a[25819] = anon_sym_PIPE_PIPE;
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = actions(929);
	v->a[25821] = 2;
	v->a[25822] = anon_sym_LT_AMP_DASH;
	v->a[25823] = anon_sym_GT_AMP_DASH;
	v->a[25824] = state(1507);
	v->a[25825] = 2;
	v->a[25826] = sym_file_redirect;
	v->a[25827] = aux_sym_redirected_statement_repeat2;
	v->a[25828] = state(1614);
	v->a[25829] = 6;
	v->a[25830] = sym_arithmetic_expansion;
	v->a[25831] = sym_string;
	v->a[25832] = sym_number;
	v->a[25833] = sym_simple_expansion;
	v->a[25834] = sym_expansion;
	v->a[25835] = sym_command_substitution;
	v->a[25836] = actions(927);
	v->a[25837] = 8;
	v->a[25838] = anon_sym_LT;
	v->a[25839] = anon_sym_GT;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = anon_sym_GT_GT;
	v->a[25841] = anon_sym_AMP_GT;
	v->a[25842] = anon_sym_AMP_GT_GT;
	v->a[25843] = anon_sym_LT_AMP;
	v->a[25844] = anon_sym_GT_AMP;
	v->a[25845] = anon_sym_GT_PIPE;
	v->a[25846] = 22;
	v->a[25847] = actions(3);
	v->a[25848] = 1;
	v->a[25849] = sym_comment;
	v->a[25850] = actions(933);
	v->a[25851] = 1;
	v->a[25852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25853] = actions(935);
	v->a[25854] = 1;
	v->a[25855] = anon_sym_DOLLAR;
	v->a[25856] = actions(937);
	v->a[25857] = 1;
	v->a[25858] = anon_sym_DQUOTE;
	v->a[25859] = actions(939);
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = 1;
	v->a[25861] = aux_sym_number_token1;
	v->a[25862] = actions(941);
	v->a[25863] = 1;
	v->a[25864] = aux_sym_number_token2;
	v->a[25865] = actions(943);
	v->a[25866] = 1;
	v->a[25867] = anon_sym_DOLLAR_LBRACE;
	v->a[25868] = actions(945);
	v->a[25869] = 1;
	v->a[25870] = anon_sym_DOLLAR_LPAREN;
	v->a[25871] = actions(947);
	v->a[25872] = 1;
	v->a[25873] = anon_sym_BQUOTE;
	v->a[25874] = actions(949);
	v->a[25875] = 1;
	v->a[25876] = sym_file_descriptor;
	v->a[25877] = actions(961);
	v->a[25878] = 1;
	v->a[25879] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = state(1355);
	v->a[25881] = 1;
	v->a[25882] = aux_sym__heredoc_command;
	v->a[25883] = state(1832);
	v->a[25884] = 1;
	v->a[25885] = sym_concatenation;
	v->a[25886] = state(2068);
	v->a[25887] = 1;
	v->a[25888] = sym__heredoc_pipeline;
	v->a[25889] = state(2071);
	v->a[25890] = 1;
	v->a[25891] = sym__heredoc_expression;
	v->a[25892] = actions(921);
	v->a[25893] = 2;
	v->a[25894] = sym_raw_string;
	v->a[25895] = sym_word;
	v->a[25896] = actions(923);
	v->a[25897] = 2;
	v->a[25898] = anon_sym_PIPE;
	v->a[25899] = anon_sym_PIPE_AMP;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
