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
	v->a[25800] = aux_sym_heredoc_redirect_token1;
	v->a[25801] = anon_sym_AMP;
	v->a[25802] = anon_sym_SEMI;
	v->a[25803] = actions(678);
	v->a[25804] = 17;
	v->a[25805] = anon_sym_LT;
	v->a[25806] = anon_sym_GT;
	v->a[25807] = anon_sym_GT_GT;
	v->a[25808] = anon_sym_LT_AMP;
	v->a[25809] = anon_sym_GT_AMP;
	v->a[25810] = anon_sym_GT_PIPE;
	v->a[25811] = anon_sym_LT_AMP_DASH;
	v->a[25812] = anon_sym_GT_AMP_DASH;
	v->a[25813] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25814] = anon_sym_DOLLAR;
	v->a[25815] = anon_sym_DQUOTE;
	v->a[25816] = sym_raw_string;
	v->a[25817] = sym_number;
	v->a[25818] = anon_sym_DOLLAR_LBRACE;
	v->a[25819] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1291(v);
}

void	small_parse_table_1291(t_small_parse_table_array *v)
{
	v->a[25820] = anon_sym_BQUOTE;
	v->a[25821] = sym_word;
	v->a[25822] = 8;
	v->a[25823] = actions(3);
	v->a[25824] = 1;
	v->a[25825] = sym_comment;
	v->a[25826] = actions(682);
	v->a[25827] = 1;
	v->a[25828] = anon_sym_PIPE;
	v->a[25829] = actions(690);
	v->a[25830] = 1;
	v->a[25831] = sym_file_descriptor;
	v->a[25832] = actions(692);
	v->a[25833] = 1;
	v->a[25834] = sym_variable_name;
	v->a[25835] = state(1174);
	v->a[25836] = 2;
	v->a[25837] = sym_variable_assignment;
	v->a[25838] = aux_sym__variable_assignments_repeat1;
	v->a[25839] = state(1176);
	small_parse_table_1292(v);
}

void	small_parse_table_1292(t_small_parse_table_array *v)
{
	v->a[25840] = 3;
	v->a[25841] = sym_file_redirect;
	v->a[25842] = sym_heredoc_redirect;
	v->a[25843] = aux_sym_redirected_statement_repeat1;
	v->a[25844] = actions(935);
	v->a[25845] = 9;
	v->a[25846] = anon_sym_esac;
	v->a[25847] = anon_sym_SEMI_SEMI;
	v->a[25848] = anon_sym_AMP_AMP;
	v->a[25849] = anon_sym_PIPE_PIPE;
	v->a[25850] = anon_sym_LT_LT;
	v->a[25851] = anon_sym_LT_LT_DASH;
	v->a[25852] = aux_sym_heredoc_redirect_token1;
	v->a[25853] = anon_sym_AMP;
	v->a[25854] = anon_sym_SEMI;
	v->a[25855] = actions(678);
	v->a[25856] = 17;
	v->a[25857] = anon_sym_LT;
	v->a[25858] = anon_sym_GT;
	v->a[25859] = anon_sym_GT_GT;
	small_parse_table_1293(v);
}

void	small_parse_table_1293(t_small_parse_table_array *v)
{
	v->a[25860] = anon_sym_LT_AMP;
	v->a[25861] = anon_sym_GT_AMP;
	v->a[25862] = anon_sym_GT_PIPE;
	v->a[25863] = anon_sym_LT_AMP_DASH;
	v->a[25864] = anon_sym_GT_AMP_DASH;
	v->a[25865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25866] = anon_sym_DOLLAR;
	v->a[25867] = anon_sym_DQUOTE;
	v->a[25868] = sym_raw_string;
	v->a[25869] = sym_number;
	v->a[25870] = anon_sym_DOLLAR_LBRACE;
	v->a[25871] = anon_sym_DOLLAR_LPAREN;
	v->a[25872] = anon_sym_BQUOTE;
	v->a[25873] = sym_word;
	v->a[25874] = 11;
	v->a[25875] = actions(3);
	v->a[25876] = 1;
	v->a[25877] = sym_comment;
	v->a[25878] = actions(602);
	v->a[25879] = 1;
	small_parse_table_1294(v);
}

void	small_parse_table_1294(t_small_parse_table_array *v)
{
	v->a[25880] = sym_file_descriptor;
	v->a[25881] = actions(699);
	v->a[25882] = 1;
	v->a[25883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25884] = actions(701);
	v->a[25885] = 1;
	v->a[25886] = anon_sym_DOLLAR;
	v->a[25887] = actions(703);
	v->a[25888] = 1;
	v->a[25889] = anon_sym_DQUOTE;
	v->a[25890] = actions(705);
	v->a[25891] = 1;
	v->a[25892] = anon_sym_DOLLAR_LBRACE;
	v->a[25893] = actions(707);
	v->a[25894] = 1;
	v->a[25895] = anon_sym_DOLLAR_LPAREN;
	v->a[25896] = state(272);
	v->a[25897] = 2;
	v->a[25898] = sym_concatenation;
	v->a[25899] = aux_sym_for_statement_repeat1;
	small_parse_table_1295(v);
}

/* EOF small_parse_table_258.c */
