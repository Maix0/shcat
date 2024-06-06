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
	v->a[25800] = aux_sym_number_token2;
	v->a[25801] = anon_sym_DOLLAR_LBRACE;
	v->a[25802] = anon_sym_DOLLAR_LPAREN;
	v->a[25803] = anon_sym_BQUOTE;
	v->a[25804] = anon_sym_DOLLAR_BQUOTE;
	v->a[25805] = sym_word;
	v->a[25806] = anon_sym_SEMI;
	v->a[25807] = 6;
	v->a[25808] = actions(3);
	v->a[25809] = 1;
	v->a[25810] = sym_comment;
	v->a[25811] = actions(3189);
	v->a[25812] = 1;
	v->a[25813] = aux_sym_concatenation_token1;
	v->a[25814] = actions(3192);
	v->a[25815] = 1;
	v->a[25816] = sym__concat;
	v->a[25817] = state(625);
	v->a[25818] = 1;
	v->a[25819] = aux_sym_concatenation_repeat1;
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = actions(2654);
	v->a[25821] = 5;
	v->a[25822] = sym_file_descriptor;
	v->a[25823] = sym_variable_name;
	v->a[25824] = sym_test_operator;
	v->a[25825] = sym__brace_start;
	v->a[25826] = aux_sym_heredoc_redirect_token1;
	v->a[25827] = actions(2652);
	v->a[25828] = 33;
	v->a[25829] = anon_sym_PIPE;
	v->a[25830] = anon_sym_SEMI_SEMI;
	v->a[25831] = anon_sym_SEMI_AMP;
	v->a[25832] = anon_sym_SEMI_SEMI_AMP;
	v->a[25833] = anon_sym_PIPE_AMP;
	v->a[25834] = anon_sym_AMP_AMP;
	v->a[25835] = anon_sym_PIPE_PIPE;
	v->a[25836] = anon_sym_LT;
	v->a[25837] = anon_sym_GT;
	v->a[25838] = anon_sym_GT_GT;
	v->a[25839] = anon_sym_AMP_GT;
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = anon_sym_AMP_GT_GT;
	v->a[25841] = anon_sym_LT_AMP;
	v->a[25842] = anon_sym_GT_AMP;
	v->a[25843] = anon_sym_GT_PIPE;
	v->a[25844] = anon_sym_LT_AMP_DASH;
	v->a[25845] = anon_sym_GT_AMP_DASH;
	v->a[25846] = anon_sym_LT_LT;
	v->a[25847] = anon_sym_LT_LT_DASH;
	v->a[25848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25849] = anon_sym_AMP;
	v->a[25850] = anon_sym_DOLLAR;
	v->a[25851] = sym__special_character;
	v->a[25852] = anon_sym_DQUOTE;
	v->a[25853] = sym_raw_string;
	v->a[25854] = aux_sym_number_token1;
	v->a[25855] = aux_sym_number_token2;
	v->a[25856] = anon_sym_DOLLAR_LBRACE;
	v->a[25857] = anon_sym_DOLLAR_LPAREN;
	v->a[25858] = anon_sym_BQUOTE;
	v->a[25859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = sym_word;
	v->a[25861] = anon_sym_SEMI;
	v->a[25862] = 3;
	v->a[25863] = actions(3);
	v->a[25864] = 1;
	v->a[25865] = sym_comment;
	v->a[25866] = actions(2654);
	v->a[25867] = 6;
	v->a[25868] = sym_file_descriptor;
	v->a[25869] = sym__concat;
	v->a[25870] = sym_test_operator;
	v->a[25871] = sym__bare_dollar;
	v->a[25872] = sym__brace_start;
	v->a[25873] = aux_sym_heredoc_redirect_token1;
	v->a[25874] = actions(2652);
	v->a[25875] = 35;
	v->a[25876] = anon_sym_esac;
	v->a[25877] = anon_sym_PIPE;
	v->a[25878] = anon_sym_SEMI_SEMI;
	v->a[25879] = anon_sym_SEMI_AMP;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = anon_sym_SEMI_SEMI_AMP;
	v->a[25881] = anon_sym_PIPE_AMP;
	v->a[25882] = anon_sym_AMP_AMP;
	v->a[25883] = anon_sym_PIPE_PIPE;
	v->a[25884] = anon_sym_LT;
	v->a[25885] = anon_sym_GT;
	v->a[25886] = anon_sym_GT_GT;
	v->a[25887] = anon_sym_AMP_GT;
	v->a[25888] = anon_sym_AMP_GT_GT;
	v->a[25889] = anon_sym_LT_AMP;
	v->a[25890] = anon_sym_GT_AMP;
	v->a[25891] = anon_sym_GT_PIPE;
	v->a[25892] = anon_sym_LT_AMP_DASH;
	v->a[25893] = anon_sym_GT_AMP_DASH;
	v->a[25894] = anon_sym_LT_LT;
	v->a[25895] = anon_sym_LT_LT_DASH;
	v->a[25896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25897] = anon_sym_AMP;
	v->a[25898] = aux_sym_concatenation_token1;
	v->a[25899] = anon_sym_DOLLAR;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
